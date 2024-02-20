
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:04:02 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/20 18:27:27 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
    public:
    class NoFormFound : public std::exception
    {
        public:
        virtual const char* what() const throw()
        {
            return "Form not found.\n";
        }
    };
    Intern(void);
    Intern(const Intern& that);
    Intern &operator=(const Intern &that);
    ~Intern();
    AForm *makeForm(std::string name, std::string target) const;
};

#endif