/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:03:50 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/07 13:25:19 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _is_signed(false), _sign_grade(0), _exe_grade(0)
{
    return;
}

AForm::AForm(std::string name, int sign_grade, int exe_grade) : _name(name), _is_signed(false), _sign_grade(sign_grade), _exe_grade(exe_grade)
{
    if (sign_grade > 150)
        throw(AForm::GradeTooHighException());
    if (sign_grade < 1)
        throw(AForm::GradeTooHighException());
    if (exe_grade > 150)
        throw(AForm::GradeTooHighException());
    if (exe_grade < 1)
        throw(AForm::GradeTooHighException());
    
}

AForm::AForm(const AForm& that) : _name(that.getName()), _sign_grade(that.getSignGrade()), _exe_grade(that.getExeGrade())
{
    *this = that;
}

AForm &AForm::operator=(const AForm &that)
{
    if (this != &that)
        this->_is_signed = that.getIsSigned();
    return (*this);
}

AForm::~AForm()
{
    
}

std::string AForm::getName() const
{
    return (this->_name);
}

bool AForm::getIsSigned() const
{
    return (this->_is_signed);
}

int AForm::getSignGrade() const
{
    return (this->_sign_grade);
}

int AForm::getExeGrade() const
{
    return (this->_exe_grade);
}

void AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->_sign_grade)
    {
        this->_is_signed = true;
    }
    else
        throw(AForm::GradeTooLowException());
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (!this->_is_signed)
        throw(AForm::NotSigned());
    if (executor.getGrade() > this->_exe_grade)
        throw(AForm::CantExe());
    executeForm();
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs)
{
    o << rhs.getName() << " is signed: " << rhs.getIsSigned() << ".\nSign grade: " << rhs.getSignGrade() << ", execute grade: " << rhs.getExeGrade() << ".\n";
    return (o);
}