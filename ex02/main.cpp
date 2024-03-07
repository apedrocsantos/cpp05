/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:32:18 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/07 12:55:44 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	/*	
		ShrybberyCreationForm:	sign:145, exec: 137;
		RobotomyRequestForm:	sign: 72, exec: 45;
		PresidentialPardonForm:	sign: 25, exec: 5;
	*/
	std::cout << "\n===== Sign fail, Exec ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 147);
		std::cout << b << std::endl;
		PresidentialPardonForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Sign ok, Exec fail =====\n\n";
	try
	{
		Bureaucrat b("ze", 6);
		std::cout << b << std::endl;
		PresidentialPardonForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
		b.executeForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== PresidentialPardonForm Sign ok, Exec ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		std::cout << b << std::endl;
		PresidentialPardonForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
		b.executeForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== ShrubberyCreationForm Sign ok, Exec ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		ShrubberyCreationForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
		b.executeForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== RobotomyRequestForm Sign ok, Exec ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 5);
		RobotomyRequestForm f("someGuy");
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
		b.executeForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return (0);
}