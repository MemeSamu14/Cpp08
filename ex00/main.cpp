/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:58:04 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/06 10:35:24 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include "NotFoundException.hpp"

int	main(void)
{
	bool mhanz = false;
	std::vector<int> a;
	for (int i = 1; i < 6; i++)
		a.push_back(i);
	try
	{
		mhanz = easyfind(a, 2); // found
		if (mhanz == true)
			std::cout << "trovato!" << std::endl;
	}
	catch (const NotFoundException &e){ std::cout << e.what() << std::endl; }
	try
	{
		mhanz = easyfind(a, 13); // not found
		if (mhanz == true)
			std::cout << "trovato!" << std::endl;
	}
	catch (const NotFoundException &e){ std::cout << e.what() << std::endl; }

	return (0);
}