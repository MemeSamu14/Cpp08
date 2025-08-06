/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:56:18 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/06 18:00:10 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <stack>

int main()
{
	// {
	// 	std::cout << "swap" << std::endl;
	// 	MutantStack<int> mstack1;
	// 	MutantStack<int> mstack2;
	// 	mstack1.push(1);
	// 	mstack1.push(2);
	// 	mstack2.push(1);
	// 	std::cout << "size 1: " << mstack1.size() << std::endl;
	// 	std::cout << "size 2: " << mstack2.size() << std::endl;
	// 	mstack1.swap(mstack2);
	// 	std::cout << "size 1: " << mstack1.size() << std::endl;
	// 	std::cout << "size 2: " << mstack2.size() << std::endl;
	// }

	{
		MutantStack<int> mstack;
		mstack.push(5);
		
		mstack.push(17);
		// std::cout << "top " << mstack.top() << std::endl;
		// std::cout << "size " << mstack.size() << std::endl;
		// 
		// mstack.pop();
		// std::cout << "top " << mstack.top() << std::endl;
		// std::cout << "size " << mstack.size() << std::endl;
		// mstack.push(3);
		// mstack.push(5);
		// mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		MutantStack<int>tommi;
		for (int i = 0; i < 25000; i++) {
			tommi.push(i);
		}
		MutantStack<int>::iterator it = tommi.begin();
		MutantStack<int>::iterator ite = tommi.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
	}
	return 0;
}