/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:04:05 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/20 18:27:22 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& that)
{
    *this = that;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &that)
{
    if (this != &that)
    {
        this->_target = that._target;
    }
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::executeForm(void) const
{
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}
