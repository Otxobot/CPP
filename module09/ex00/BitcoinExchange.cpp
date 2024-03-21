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
    for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); it++)
    {
        std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;
    }
    input.close();
}

void BitcoinExchange::parse_input(std::string filename)
{
    std::cout << "received " << filename << std::endl;
}