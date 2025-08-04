/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:01:35 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 16:14:23 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>

class NotFoundException: public std::exception
{
	public:
		NotFoundException(){};
		const char *what() const throw(){ return ("not found"); };
};

template <typename T>
bool	easyfind(const T&a, int value)
{
	for (int i = 0; a[i]; i++)
	{
		std::cout << a[i] << std::endl;
		if (a[i] == value)
			return (true);
	}
	throw	NotFoundException();
	return (false);
}

#endif