/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:32:18 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/07 11:55:44 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "\n===== Sign fail =====\n\n";
	try
	{
		Bureaucrat b("ze", 100);
		Form f("form1", 1, 10);
		std::cout << b;
		std::cout << f;
		b.signForm(f);
		std::cout << f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===== Sign ok =====\n\n";
	try
	{
		Bureaucrat b("ze", 100);
		Form f("form1", 100, 10);
		std::cout << b;
		std::cout << f;
		b.signForm(f);
		std::cout << f;
		b.signForm(f);
		std::cout << f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return (0);
}