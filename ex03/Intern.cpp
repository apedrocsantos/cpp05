/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:00:11 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/07 13:21:40 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
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
    AForm *forms[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    while (index < 3 && name.compare(names[index]))
        index++;
    if (index == 3)
        throw(NoFormFound());
    std::cout << "Intern creates " << name << std::endl;
    return (forms[index]);
}