#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	BitcoinExchange btc;
	std::string line;

	if (argc != 2)
		return ft_error("Error: Usage: ./btc [Filename]");
	std::ifstream inputFile(argv[1], std::ifstream::in);
	if (!inputFile.is_open())
		return ft_error("Error: could not open given file.");
	std::ifstream dbFile("data.csv", std::ifstream::in);
	if (!dbFile.is_open())
		return ft_error("Error: could not open database file.");

	if (!btc.initializeMap(dbFile))
		return ft_error("Error: dataBase file is empty.");
	dbFile.close();

	if (!std::getline(inputFile, line))
		return ft_error("Error: given file is empty.");
	while (std::getline(inputFile, line))
	{
		size_t delim = line.find('|');
		std::string date = line.substr(0, delim - 1);
		std::string rate = line.substr(delim + 2);

		if (!btc.isValidLineFormat(delim, line))
			continue;
		if (!btc.isValidDate(date))
			continue;
		if (!btc.isValidRate(rate))
			continue;

		float res = std::atof(rate.c_str()) * btc.getRate(date);
		std::cout << date << " => " << rate << " = " << res << std::endl;
	}
}