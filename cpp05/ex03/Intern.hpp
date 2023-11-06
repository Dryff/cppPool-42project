/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgelin <cgelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:50:23 by ael-khni          #+#    #+#             */
/*   Updated: 2023/11/06 16:40:24 by cgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {

public:
    Intern();
    Intern(const Intern& src);
    ~Intern();

    Intern& operator=(const Intern& rhs);

    AForm*   makeForm(std::string name, std::string target);

    class FormNotFoundException: public std::exception {
		  virtual const char*	what() const throw();
	};
};

#endif // INTERN_HPP