/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:04:05 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/20 18:27:22 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& that)
{
    *this = that;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &that)
{
    if (this != &that)
    {
        this->_target = that._target;
    }
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void RobotomyRequestForm::executeForm(void) const
{
    std::cout << "Makes some drilling noises...\n";
    srand(time(0));
    if (rand() % 2)
        std::cout << this->_target << " has been successfully robotomized!!!\n";
    else
        std::cout << "Robotomy failed.\n";
}
