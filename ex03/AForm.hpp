/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:03:55 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/20 19:38:47 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    std::string const _name;
    std::string _target;
    bool _is_signed;
    int const _sign_grade;
    int const _exe_grade;
    
    public:
    class GradeTooHighException : public std::exception
    {
        public:
        virtual const char* what() const throw() {return "Grade too high\n";}
    };
    
    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char* what() const throw() {return "Grade too low\n";}
    };

    class NotSigned : public std::exception
    {
        public:
        virtual const char* what() const throw() {return "Form is not signed.\n";}
    };

    class CantExe : public std::exception
    {
        public:
        virtual const char* what() const throw() {return "Bureaucrat can't execute form.\n";}
    };
    
    AForm(void);
    AForm(std::string name, int sign_grade, int exe_grade);
    AForm(const AForm& that);
    AForm &operator=(const AForm &that);
    ~AForm();
    std::string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExeGrade() const;
    void beSigned(Bureaucrat &b);
    void execute(Bureaucrat const & executor) const;
    virtual void executeForm(void) const = 0;
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif