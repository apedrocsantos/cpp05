/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:32:27 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/07 10:33:45 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
    const std::string   _name;
    int                 _grade;

    public:
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
    
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& that);
    Bureaucrat &operator=(const Bureaucrat &that);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void setGrade(int grade);
    void incrementGrade(void);
    void decrementGrade(void);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif