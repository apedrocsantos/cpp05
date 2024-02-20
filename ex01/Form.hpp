/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:03:55 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/20 09:16:11 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    std::string const _name;
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
    
    Form(void);
    Form(std::string name, int sign_grade, int exe_grade);
    Form(const Form& that);
    Form &operator=(const Form &that);
    ~Form();
    std::string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExeGrade() const;
    void beSigned(Bureaucrat &b);
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif