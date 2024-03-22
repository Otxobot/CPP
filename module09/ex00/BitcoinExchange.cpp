/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:46:32 by abasante          #+#    #+#             */
/*   Updated: 2024/03/19 17:46:33 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    getCsvData("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj){
    *this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    if (this != &rhs)
    {
        this->_data = rhs._data;
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange(){

}

void BitcoinExchange::getCsvData(const std::string &database1)
{
    std::ifstream input(database1.c_str());
    if (!input.is_open())
    {
        std::cout << "No se puede abrir el archivo" << std::endl;
        return ;
    }
    std::string line;
    while (std::getline(input, line))
    {
        size_t pos = line.find(",");
        if (pos == line.npos)
        {
            std::cout << "Formato incorrecto de data.csv" << std::endl;
            return ;
        }
        std::string date = line.substr(0, line.find(","));
        std::string rate = line.substr(line.find(",") + 1);
		this->_data[date] = std::atof(rate.c_str());
    }
    // for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); it++)
    // {
    //     std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;
    // }
    input.close();
}

int BitcoinExchange::validDate(std::string date)
{
    if (date.find('-') == date.npos)
        return (1);
    if (date.length() != 11 || date[4] != '-' || date[7] != '-')
    {
        // std::cout << date.length() << std::endl;
        // std::cout << date[9] << std::endl;
        // std::cout << date[10] << std::endl;
        // std::cout << date[11] << std::endl;
        return (1);
    }
    if (std::atoi(date.substr(0, 4).c_str()) < 2009 || std::atoi(date.substr(0, 4).c_str()) > 2022)
        return (1);
    if (std::atoi(date.substr(5, 2).c_str()) < 1 || std::atoi(date.substr(5, 2).c_str()) > 12)
        return (1);
    if (std::atoi(date.substr(8, 2).c_str()) < 1 || std::atoi(date.substr(8, 2).c_str()) > 31)
		return (1);
    if (std::atoi(date.substr(5, 2).c_str()) == 2 && std::atoi(date.substr(8, 2).c_str()) > 29)
		return (1);
    return (0);
}

int BitcoinExchange::validRate(std::string rate)
{
    if (rate.size() == 0)
        return (1);
    if (rate.find(".") == rate.npos)
	{
		if (std::atoi(rate.c_str()) < 0 || std::atoi(rate.c_str()) > 1000)
			return (1);
	}
	else
	{
		if (std::atof(rate.c_str()) < 0 || std::atof(rate.c_str()) > 1000)
			return (1);
	}
    this->enteringRate = std::atof(rate.c_str());
    return (0);
}

void BitcoinExchange::parse_line(std::string date, std::string rate)
{
    if (validDate(date) == 1)
    {
        std::cout << "La fecha es incorrecta" << std::endl;
        return ;
    }
    else if (validRate(rate) == 1)
    {
        std::cout << "El valor es incorrecto" << std::endl;
        return ;
    }
    std::cout << date << " => " << rate << " = " << this->enteringRate * _data[rate] << std::endl;
}

void BitcoinExchange::parse_input(std::string filename)
{
    std::ifstream input(filename.c_str());
    if (!input.is_open())
    {
        std::cout << "El archivo de entrada no se puede abrir" << std::endl;
        return ;
    }
    std::string line;
    while (std::getline(input, line))
    {
        size_t pos = line.find('|');
        if (pos == line.npos)
        {
            std::cout << "Error: Input incorrecto => " << line << std::endl;
            continue ;
        }
        std::string date = line.substr(0, line.find('|'));
        std::string rate = line.substr(line.find('|') + 1);
        this->parse_line(date, rate);
    }
}
