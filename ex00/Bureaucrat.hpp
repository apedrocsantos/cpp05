/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:32:27 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/13 15:39:24 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
    std::string _name;
    int _grade;
    class GradeTooHighException : public std::exception
    {
        public:
        virtual const char* what() const throw()
        {
            return "Grade too high\n";
        }
    };
    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char* what() const throw()
        {
            return "Grade too low\n";
        }
    };
    
    public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& that);
    Bureaucrat &operator=(const Bureaucrat &that);
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    void setGrade(int grade);
    void incrementGrade(void);
    void decrementGrade(void);

    
};

#endif