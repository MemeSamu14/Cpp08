/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotFoundException.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:50:37 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/06 10:31:51 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotFoundException.hpp"

NotFoundException::NotFoundException()
{
	return ;
};
const char* NotFoundException::what() const throw()
{
	return ("not found");
};
