/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:32:24 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/07 12:41:39 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Default Bureaucrat constructor called\n";
    this->_grade = 0;
    
};
Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor called\n";
    if (grade > 150)
        throw(Bureaucrat::GradeTooHighException());
    if (grade < 1)
        throw(Bureaucrat::GradeTooLowException());
};
Bureaucrat::Bureaucrat(const Bureaucrat& that)
{
    std::cout << "Bureaucrat copy constructor called\n";
    *this = that;
};
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &that)
{
    std::cout << "Bureaucrat copy assignment operator called\n";
    if (this != &that)
    {
        this->_name = that.getName();
        this->_grade = that.getGrade();
    }
    return (*this);
};
Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Bureaucrat destructor called\n";
};

std::string Bureaucrat::getName() const
{
    return this->_name;
};

int Bureaucrat::getGrade() const
{
    return this->_grade;
};

void Bureaucrat::setGrade(int grade)
{
    if (grade > 150)
        throw(Bureaucrat::GradeTooHighException());
    if (grade < 1)
        throw(Bureaucrat::GradeTooLowException());
    this->_grade = grade;
}

void Bureaucrat::incrementGrade(void)
{
    if (this->_grade - 1 >= 1)
        this->_grade -= 1;
    else
        throw(Bureaucrat::GradeTooHighException());
};

void Bureaucrat::decrementGrade(void)
{
    if (this->_grade + 1 <= 150)
        this->_grade += 1;
    else
        throw(Bureaucrat::GradeTooLowException());
};

void Bureaucrat::signForm(AForm &f)
{
    if (f.getIsSigned())
    {
        std::cout << "Form is already signed\n";
        return;
    }
    try
    {
        f.beSigned(*this);
        std::cout << this->_name << " signed " << f.getName() << ".\n";
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " couldn't sign " << f.getName() << " because he doesn't have enough privileges.\n";
    }
}

void  Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed form " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " couldn't execute form. ";
        std::cout << "Reason: " << e.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
        o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".\n";
        return (o);
}
