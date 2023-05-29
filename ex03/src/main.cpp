/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:35:47 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/29 22:08:23 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

static void	printYellowLine(std::string str)
{
	std::cout  << std::endl << "\033[0;33m" << str
				<< "\033[0;39m" << std::endl;
}

int main(void)
{
	printYellowLine("[ -------- CHECKING POINT CLASS -------- ]");
	Fixed	a;
	Fixed	b;

	a = 10.5f;
	b = 22.1f;

	Point	pZero;
	Point	pFloat(3.2, 2.5);
	Point	pInt(3, 5);
	Point	pAB(a, b);

	printYellowLine("pZero: ");
	std::cout << pZero << std::endl;

	printYellowLine("pFloat: ");
	std::cout << pFloat << std::endl;

	printYellowLine("pInt: ");
	std::cout << pInt << std::endl;

	printYellowLine("pAB: ");
	std::cout << pAB << std::endl;

	pZero = pFloat;

	printYellowLine("after pZero = pFloat --> pZero: ");
	std::cout << pZero << std::endl;

	/* ********************************************************************* */

	printYellowLine("[ ------------ CHECKING BSP ------------ ]");
	

	return (0);
}
