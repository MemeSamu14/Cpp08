/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:04:07 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/06 12:04:55 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "OutOfRange.hpp"

Span::Span(unsigned int n): max(n)
{
	if (n == 0)
		throw OutOfRange();
	return ;
}

Span::Span(const Span &a): array(a.array), max(a.max)
{
	return ;
}

const Span& Span::operator=(const Span &a)
{
	if (this != &a)
	{
		this->max = a.max;
		this->array = a.array;
	}
	return (*this);
}

Span::~Span()
{
	return ;
}

void	Span::addNumber(int num)
{
	if (this->array.size() >= this->max)
		throw OutOfRange();
	else
		array.push_back(num);
	return ;
}

unsigned int	Span::shortestSpan() const
{
	int value;
	if (this->array.size() <= 1)
		throw OutOfRange();
	else
	{
		std::vector<int> tmp = this->array;
		std::sort(tmp.begin(), tmp.end());
		value = tmp[1] - tmp[0];
		for (int i = 0; i < static_cast<int>(array.size()) - 1; i++)
		{
			if (std::abs(tmp[i + 1] - tmp[i]) < value)
				value = std::abs(tmp[i + 1] - tmp[i]);
		}
	}
	return (static_cast<unsigned int>(value));
}

unsigned int	Span::longestSpan() const
{
	int value;
	if (this->array.size() <= 1)
		throw OutOfRange();
	else
	{
		std::vector<int> tmp = this->array;
		std::sort(tmp.begin(), tmp.end());
		value = tmp[static_cast<int>(array.size()) - 1] - tmp[0];
	}
	return (static_cast<unsigned int>(value));
}