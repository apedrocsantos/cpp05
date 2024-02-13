/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:32:27 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/13 13:08:05 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
    std::string _name;
    int _grade;
    
    public:
    Bureaucrat(void);
    Bureaucrat(int grade) throw();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();
    void getName();
    void getGrade();
    void incrementGrade(int nb);
    void decrementGrade(int nb);

    
};

#endif