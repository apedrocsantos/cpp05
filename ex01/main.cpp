/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:32:18 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/19 20:49:26 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "\n===== Try creating a Form with -100 =====\n\n";
	try
	{
		Bureaucrat b("ze", 100);
		Form f("form1", 1, 10);
		std::cout << b;
		std::cout << f;
		f.beSigned(b);
		std::cout << f;
	}
	catch(Form::GradeTooHighException& e)
	{
		std::cout << e.what();
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cout << e.what();
	}
	return (0);
}