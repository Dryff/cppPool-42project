/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgelin <cgelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:18:20 by prossi            #+#    #+#             */
/*   Updated: 2023/11/14 16:55:29 by cgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> 
{
    public:
        MutantStack() {};
        MutantStack(MutantStack const & other) : std::stack<T>(other) {};
        ~MutantStack() {
            this->c.clear();
        };

        MutantStack &operator=(MutantStack const &obj) {
            if (obj != *this) 
            {
                this->c = obj.c;
            }
            return *this;
        };

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin() { return this->c.begin(); };
        iterator end() { return this->c.end(); };

        const_iterator begin() const { return this->c.begin(); };
        const_iterator end() const { return this->c.end(); };

};

#endif