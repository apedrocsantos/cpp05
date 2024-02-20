/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:04:05 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/20 18:27:22 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& that)
{
    *this = that;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &that)
{
    if (this != &that)
    {
        this->_target = that._target;
    }
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void ShrubberyCreationForm::executeForm(void) const
{
    std::ofstream ofs((this->_target + "_shrubbery").c_str());
    ofs << "       _-_\n"
        <<"    /~~   ~~\\\n"
        << "/~~         ~~\\\n"
        <<"{               }\n"
        <<" \\  _-     -_  /\n"
        <<"   ~  \\\\ //  ~\n"
        <<"_- -   | | _- _\n"
        <<"  _ -  | |   -_\n"
        <<"      // \\";
    ofs.close();
}
