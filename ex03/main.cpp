/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:32:18 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/07 13:24:40 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "\n===== Creating a non-existing form =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		Intern i;
		AForm *f = i.makeForm("PresidedntialPardonForm", "target");
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Creating a ShrubberyCreationForm form =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		Intern i;
		AForm *f = i.makeForm("ShrubberyCreationForm", "target");
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Creating a RobotomyRequestForm form =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		Intern i;
		AForm *f = i.makeForm("RobotomyRequestForm", "target");
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Creating a PresidentialPardonForm form =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		Intern i;
		AForm *f = i.makeForm("PresidentialPardonForm", "target");
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return (0);
}