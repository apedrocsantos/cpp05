/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:32:18 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/13 15:52:25 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("ze", 1000);
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		
	}
	
	
	// std::cout << b.getGrade() << " " << b.getName() << "\n";
	// b.incrementGrade();
	// std::cout << b.getGrade() << "\n";
	// b.decrementGrade();
	// std::cout << b.getGrade() << "\n";
	// b.decrementGrade();
	// std::cout << b.getGrade() << "\n";
	// b.incrementGrade();
	// std::cout << b.getGrade() << "\n";
	// b.incrementGrade();
	// std::cout << b.getGrade() << "\n";
	// b.setGRade(200);
	// b.setGRade(150);
	// b.incrementGrade();
	// std::cout << b.getGrade() << "\n";
	// b.decrementGrade();
	// std::cout << b.getGrade() << "\n";
	// b.decrementGrade();
	// std::cout << b.getGrade() << "\n";
	return (0);
}