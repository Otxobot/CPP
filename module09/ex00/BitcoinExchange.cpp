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
    this->_data = getCsvData("data.csv");
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

std::map<std::string, float> BitcoinExchange::getCsvData(const std::string &database1)
{
    std::ifstream input(database1.c_str());
    if (!input.is_open())
    {
        std::cout << "No se puede abrir el archivo que contiene la base de datos" << std::endl;
        return _data;
    }
    std::string line;
    while (std::getline(input, line))
    {
        std::cout << "aver" << line << std::endl;
    }
    return (_data);
}

void BitcoinExchange::parse_input(std::string filename)
{
    std::cout << "received " << filename << std::endl;
}