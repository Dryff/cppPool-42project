#ifndef BITCOINEXHANGE_HPP
#define BITCOINEXHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cstdlib>


inline bool ft_error(std::string str) {
		std::cerr << str << std::endl;
		return false;
}

class BitcoinExchange {
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		bool initializeMap(std::ifstream& dbFile);
		void operate();
		void printMap();

		float getRate(std::string date);

        bool isValidLineFormat(size_t delim, std::string line);
        bool isValidDate(std::string date);
        bool isValidRate(std::string rate);

    private:
        bool checkDate(std::string date);
        bool checkDateFormat(std::string date);
        std::map<std::string, float> dataBase;
};

#endif