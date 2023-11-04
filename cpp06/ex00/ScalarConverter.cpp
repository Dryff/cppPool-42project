/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colas <colas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:06:32 by colas             #+#    #+#             */
/*   Updated: 2023/11/04 09:57:05 by colas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter & other) {
	(void)other;
}

ScalarConverter::~ScalarConverter() {
}

void ScalarConverter::convert(const std::string &input) {
	if (input.length() < 1) {
		std::cout << "The input must not be empty" << std::endl;
		return ;
	}
	if (input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (input == "+inf" || input == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (input == "-inf" || input == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (checkFloat(input)) {
		printFloat(input);
	}
	else if (checkDouble(input)) {
		printDouble(input);
	}
	else if (checkInt(input)) {
		printInt(input);
	}
	else if (input.length() == 1 && std::isprint(input[0])) {
		printChar(input);
	}
}

void ScalarConverter::printChar(const std::string &input) {
	char c = input[0];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::printInt(const std::string &input) {
	long value = 0;
	std::istringstream s(input);
	s >> value;

	char c = static_cast<char>(value);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (value >= INT_MIN && value <= INT_MAX)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void ScalarConverter::printFloat(const std::string &input) {
	std::cout << "salut" << std::endl;
	float value = atof(input.c_str());
	char c = static_cast<char>(value);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (value >= static_cast<float>(INT_MIN) && value <= static_cast<float>(INT_MAX))
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void ScalarConverter::printDouble(const std::string &input) {
	double value = atof(input.c_str());
	char c = static_cast<char>(value);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (value >= static_cast<float>(INT_MIN) && value <= static_cast<float>(INT_MAX))
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (static_cast<float>(value) >= FLT_MIN && static_cast<float>(value) <= FLT_MAX)
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

bool ScalarConverter::checkInt(const std::string &input) {
	size_t j = 0;
	if (input[j] == '-' || input[j] == '+') {
		j++;
	}
	for (size_t i = j; i < input.length(); i++) {
		if (!std::isdigit(input[i])) {
			return false;
		}
	}
	return true;
}

bool ScalarConverter::checkFloat(const std::string &input) {
	if (input.find('.') != std::string::npos && input.find('f') != std::string::npos)
		return true;
	return false;
}

bool ScalarConverter::checkDouble(const std::string &input) {
	if (input.find('.') != std::string::npos)
		return true;
	return false;
}

ScalarConverter &				ScalarConverter::operator=(ScalarConverter const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	(void)rhs;
	return *this;
}