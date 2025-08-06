/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutOfRange.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:13:51 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/06 11:50:43 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTOFRANGE_HPP
#define OUTOFRANGE_HPP

#include <iostream>

class OutOfRange: public std::exception
{
	public:
		OutOfRange();
		const char* what() const throw();
};

#endif