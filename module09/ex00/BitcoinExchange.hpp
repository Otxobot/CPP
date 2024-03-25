/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:46:34 by abasante          #+#    #+#             */
/*   Updated: 2024/03/19 17:46:35 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <cmath>


class BitcoinExchange
{
    private:
        std::map<std::string, float> _data;
        std::string enteringDate;
        double enteringRate;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator=(const BitcoinExchange& rhs);
        ~BitcoinExchange();

        //Receive data from .csv
        void getCsvData( const std::string &database);
        //Receive data from input.txt and parse the lines inside
        void parse_input(std::string filename);
        void parse_line(std::string date, std::string rate);

        //Checks if date and exchange rates are valid
        int  validDate(std::string date);
        int  validRate(std::string rate);

        //Returns the date 
        std::string getEnteringDate(std::string date);
};

#endif