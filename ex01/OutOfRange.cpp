/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutOfRange.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:13:51 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/06 11:35:32 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OutOfRange.hpp"

OutOfRange::OutOfRange()
{
	return ;
}

const char* OutOfRange::what() const throw()
{
	return ("Errore, out of range or incorrect size");
}