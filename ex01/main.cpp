/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:43:25 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/06 12:00:14 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "OutOfRange.hpp"

int main()
{
	try
	{
		Span	a(5);
		
		a.addNumber(6);
		a.addNumber(3);
		a.addNumber(20);
		a.addNumber(15);
	
		std::cout << "shortest: " << a.shortestSpan() << std::endl;
		std::cout << "longest: " << a.longestSpan() << std::endl;
	}
	catch (const OutOfRange &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}