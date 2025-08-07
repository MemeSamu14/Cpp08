/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:02:08 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/07 09:37:04 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <deque>
#include <stack>


template <typename T>
class MutantStack: public std::stack<T>
{
	public:

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		const_iterator begin() const { return this->c.begin(); }
		const_iterator end() const { return this->c.end(); }
};



// template <typename T>
// class MutantStack: public std::stack<T>
// {
// 	public:
// 		struct iterator 
// 		{
// 			iterator(T* ptr) : i(ptr) {}
// 			T&			operator*() const { return *i; }
// 			T*			operator->() { return i; }
// 			iterator&	operator++() { i++; return *this; }  
// 			iterator	operator++(int) { iterator tmp = *this; ++(*this); return tmp; }
// 			iterator&	operator--() { i--; return *this; }  
// 			iterator	operator--(int) { iterator tmp = *this; --(*this); return tmp; }
// 			T&			operator=(const iterator &a){ this->i = a.i; return (*this);}
// 			bool		operator!=(const iterator &a)
// 			{ 
// 				if (this->i == a.i)
// 					return (false);
// 				return (true);
// 			}
// 			~iterator(){};
// 			private:
// 				T* i;
// 		};
// 		MutantStack(){};
// 		~MutantStack(){};
// 		typename MutantStack<T>::iterator	begin();
// 		typename MutantStack<T>::iterator	end();

// };


// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::begin()
// {
// 	return (iterator(&this->c[0]));
// }


// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::end()
// {
// 	return (iterator(&this->c[static_cast<int>(this->c.size())]));
// }

#endif