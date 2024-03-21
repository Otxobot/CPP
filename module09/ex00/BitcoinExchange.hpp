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
        
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator=(const BitcoinExchange& rhs);
        ~BitcoinExchange();

        void getCsvData( const std::string &database);
        void parse_input(std::string filename);
        void parse_line(std::string date, std::string rate);
        int  validDate(std::string date);
        int  validRate(std::string rate);

};

#endif