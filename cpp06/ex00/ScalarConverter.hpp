/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colas <colas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:06:46 by colas             #+#    #+#             */
/*   Updated: 2023/11/04 09:09:25 by colas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <climits>
#include <cmath>
#include <cfloat>
#include <sstream>

class ScalarConverter {
private:
    void printChar(std::string const &input);
    void printInt(std::string const & input);
	void printFloat(std::string const & input);
	void printDouble(std::string const & input);

	bool checkInt(std::string const & input);
	bool checkFloat(std::string const & input);
	bool checkDouble(std::string const & input);
	
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter const & other);
    ScalarConverter&	operator =(const ScalarConverter& other);

	void convert(std::string const & input);
    
   ~ScalarConverter();
};

#endif
