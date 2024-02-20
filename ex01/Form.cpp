/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:03:50 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/20 09:17:59 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _is_signed(false), _sign_grade(0), _exe_grade(0)
{
    return;
}

Form::Form(std::string name, int sign_grade, int exe_grade) : _name(name), _is_signed(false), _sign_grade(sign_grade), _exe_grade(exe_grade)
{
    if (sign_grade > 150)
        throw(Form::GradeTooHighException());
    if (sign_grade < 1)
        throw(Form::GradeTooHighException());
    if (exe_grade > 150)
        throw(Form::GradeTooHighException());
    if (exe_grade < 1)
        throw(Form::GradeTooHighException());
    
}

Form::Form(const Form& that) : _name(that.getName()), _sign_grade(that.getSignGrade()), _exe_grade(that.getExeGrade())
{
    *this = that;
}

Form &Form::operator=(const Form &that)
{
    if (this != &that)
        this->_is_signed = that.getIsSigned();
    return (*this);
}

Form::~Form()
{
    
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getIsSigned() const
{
    return (this->_is_signed);
}

int Form::getSignGrade() const
{
    return (this->_sign_grade);
}

int Form::getExeGrade() const
{
    return (this->_exe_grade);
}

void Form::beSigned(Bureaucrat &b)
{
    b.signForm(*this);
    if (b.getGrade() <= this->_sign_grade)
    {
        this->_is_signed = true;
    }
    else
        throw(Form::GradeTooLowException());
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
    o << rhs.getName() << ", is signed: " << rhs.getIsSigned() << ".\nSign grade: " << rhs.getSignGrade() << ", execute grade: " << rhs.getExeGrade() << ".\n";
    return (o);
}