/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:53:27 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/06 11:49:06 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	array;
		unsigned int		max;
	public:
		Span(unsigned int n);
		Span(const Span &a);
		const Span&	operator=(const Span &a);
		~Span();
	
		void			addNumber(int num);
		unsigned int	shortestSpan() const; 
		unsigned int	longestSpan() const; 
};


#endif