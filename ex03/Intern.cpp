/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:00:11 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/20 19:39:08 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

Intern::Intern(void)
{
    
}

Intern::Intern(const Intern& that)
{
    *this = that;
}

Intern &Intern::operator=(const Intern &that)
{
    if (this != &that)
    {
        *this = that;
    }
    return(*this);
}

Intern::~Intern()
{
    
}

AForm *Intern::makeForm(std::string name, std::string target) const
{
    int index = 0;
    std::string names[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    while (index < 3 && name.compare(names[index]))
        index++;
    switch (index)
    {
        case 0:
            std::cout << "ShrubberyCreationForm\n";
            break;
        case 1:
            std::cout << "RobotomyRequestForm\n";
            break;
        case 2:
            std::cout << "PresidentialPardonForm\n";
            break;
        default:
            throw(NoFormFound());
    };
    return (new ShrubberyCreationForm(target));
}