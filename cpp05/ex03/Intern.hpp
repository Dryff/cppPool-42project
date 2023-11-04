/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colas <colas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:50:23 by ael-khni          #+#    #+#             */
/*   Updated: 2023/10/15 19:32:54 by colas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {

public:
    Intern();
    Intern(const Intern& src);
    ~Intern();

    Intern& operator=(const Intern& rhs);

    Form*   makeForm(std::string name, std::string target);

    class FormNotFoundException: public std::exception {
		virtual const char*	what() const throw();
	};
};

#endif // INTERN_HPP