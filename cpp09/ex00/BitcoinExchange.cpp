#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& to_copy) {
    *this = to_copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& to_copy) {
    this->dataBase = to_copy.dataBase;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {};

float BitcoinExchange::getRate(std::string date)
{
    if (this->dataBase.count(date) > 0)
        return this->dataBase.at(date);
    return (--this->dataBase.upper_bound(date))->second;
}

void BitcoinExchange::printMap() {
	for (std::map<std::string, float>::iterator it = this->dataBase.begin(); it != this->dataBase.end(); ++it) {
        std::cout << "Key: " << it->first << " | Value: " << it->second << std::endl;
    }
}

bool BitcoinExchange::isValidRate(std::string rate)
{
	if (rate.empty() || rate.find_first_not_of("0123456789.-") != std::string::npos || rate.at(0) == '.' || rate.find('.', rate.length() - 1) != std::string::npos)
		return ft_error("Error: invalid rate format");
	float ratef = std::stof(rate);
	if (ratef < 0)
		return ft_error("Error: not a positive number.");
	if (ratef > 1000)
		return ft_error("Error: too large a number.");
	return true;
}

bool BitcoinExchange::isValidLineFormat(size_t delim, std::string line) {
	if (delim == std::string::npos || line.length() < delim + 2) 
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::isValidDate(std::string date)
{
	if (!this->checkDateFormat(date))
		return false;
	if (!this->checkDate(date))
		return false;
	return true;
}

bool BitcoinExchange::checkDateFormat(std::string date) 
{
	if (date.empty())
			return false;
	size_t sep1 = date.find('-');
	size_t sep2 = date.find('-', sep1 + 1);
	if (sep1 == std::string::npos || sep2 == std::string::npos
	||  date.find_first_not_of("0123456789.-") != std::string::npos)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::checkDate(std::string date)
{
	std::string str;
	int year, month, day;
	std::istringstream ss(date);
	int i = 0;

	while (std::getline(ss, str, '-'))
	{
		if (i == 0) {
			year = stoi(str);
			if (year < 2009)
				return ft_error("Error: Do not have data for this date.");
		}
		if (i == 1) {
			month = stoi(str);
			if (month < 1 || month > 12)
				return ft_error("Error: Month doesn't exist.");
		}
		if (i == 2) {
			day = stoi(str);
			if ( (day < 1 || day > 31)
			||   (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
			||	 (month == 2 && day > 29)
			||   (month == 2 && day > 28 && year != 2012 && year != 2016 && year != 2020))
				return ft_error("Error: Day doesn't exist.");
			if (year == 2009 && month == 1 && day == 1)
				return ft_error("Error: Do not have data for this date.");
		}
		i++;
	}
	if (i != 3)
		return ft_error("Error: Incorrect date format.");
	return true;
}

bool BitcoinExchange::initializeMap(std::ifstream& dbFile)
{
    std::string line;
    size_t commaPos;

    if (!std::getline(dbFile, line))
		return false;
	while (std::getline(dbFile, line))
	{
		commaPos = line.find(',');
		std::string rate = line.substr(commaPos + 1);
		this->dataBase[line.substr(0, commaPos)] = std::stof(rate);
	}
	return true;
}