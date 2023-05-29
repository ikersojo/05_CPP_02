/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:35:47 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/29 15:11:07 by isojo-go         ###   ########.fr       */
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
	printYellowLine("[ -------- EX02 EXAMPLES -------- ]");
	Fixed		a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	/* ********************************************************************* */

	printYellowLine("[ ------ ADDITIONAL  TESTS ------ ]");
	Fixed		c(10.600f);
	Fixed		d(5.200f);
	Fixed		e(6);

	printYellowLine("10.6 = ...");
	std::cout << c << std::endl;
	printYellowLine("5.2 = ...");
	std::cout << d << std::endl;
	printYellowLine("6 = ...");
	std::cout << e << std::endl;

	printYellowLine("[ ------------------------------- ]");
	printYellowLine("10.6 + 5.2 = ...");
	std::cout << (c + d) << std::endl;
	printYellowLine("10.6 - 5.2 = ...");
	std::cout << (c - d) << std::endl;
	printYellowLine("10.6 * 5.2 = ...");
	std::cout << (c * d) << std::endl;
	printYellowLine("10.6 / 5.2 = ...");
	std::cout << (c / d) << std::endl;

	printYellowLine("[ ------------------------------- ]");
	printYellowLine("c++ = ...");
	std::cout << c << " -> " << c++ << " -> " << c++ << " -> " << c++ << " -> " << c << std::endl;
	printYellowLine("c-- = ...");
	std::cout << c << " -> " << c-- << " -> " << c-- << " -> " << c-- << " -> " << c << std::endl;
	printYellowLine("++c = ...");
	std::cout << c << " -> " << ++c << " -> " << ++c << " -> " << ++c << " -> " << c << std::endl;
	printYellowLine("--c = ...");
	std::cout << c << " -> " << --c << " -> " << --c << " -> " << --c << " -> " << c << std::endl;

	printYellowLine("[ ------------------------------- ]");
	printYellowLine("10.6 > 5.2 = ...");
	std::cout << (c > d) << std::endl;
	printYellowLine("10.6 < 5.2 = ...");
	std::cout << (c < d) << std::endl;
	printYellowLine("10.6 >= 5.2 = ...");
	std::cout << (c >= d) << std::endl;
	printYellowLine("10.6 <= 5.2 = ...");
	std::cout << (c <= d) << std::endl;
	printYellowLine("10.6 == 5.2 = ...");
	std::cout << (c == d) << std::endl;
	printYellowLine("10.6 != 5.2 = ...");
	std::cout << (c != d) << std::endl;
	printYellowLine("10.6 == 10.6 = ...");
	std::cout << (c == c) << std::endl;

	printYellowLine("[ ------------------------------- ]");
	printYellowLine("max(10.6, 5.2) = ...");
	std::cout << Fixed::max(c, d) << std::endl;
	printYellowLine("min(10.6, 5.2) = ...");
	std::cout << Fixed::min(c, d) << std::endl;

	return (0);
}
