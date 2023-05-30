/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:35:47 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/30 16:23:26 by isojo-go         ###   ########.fr       */
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

	printYellowLine("after b = a --> pAA: ");
	b = a;
	Point	pAA(a, b);
	std::cout << pAA << std::endl;

	printYellowLine("after pZero = pFloat --> pZero: ");
	pZero = pFloat;
	std::cout << pZero << std::endl;

	/* ********************************************************************* */

	printYellowLine("[ ----------- CHECK TRIANGLES ---------- ]");
	Point	pA(0,0);
	Point	pB(1,1);
	Point	pC(2,0);

	printYellowLine("t0 Triangle: ");
	Triangle t0;
	std::cout << t0 << " with an area of " << t0.getArea() << std::endl;

	printYellowLine("t1 Triangle: ");
	Triangle t1(pA, pB, pC);
	std::cout << t1 << " with an area of " << t1.getArea() << std::endl;

	printYellowLine("t2 Triangle (copied from t1): ");
	Triangle t2(t1);
	std::cout << t2 << " with an area of " << t2.getArea() << std::endl;

	printYellowLine("t3 Triangle (asigned from t1): ");
	Triangle t3;
	t3 = t1;
	std::cout << t3 << " with an area of " << t3.getArea() << std::endl;

	/* ********************************************************************* */

	printYellowLine("[ ------------ CHECKING BSP ------------ ]");
	bool test1;
	Point p1(0,0);
	bool test2;
	Point p2(0.5,0.5);
	bool test3;
	Point p3(-1,-1);
	bool test4;
	Point p4(1,0.5);

	test1 = bsp(pA, pB, pC, p1);
	test2 = bsp(pA, pB, pC, p2);
	test3 = bsp(pA, pB, pC, p3);
	test4 = bsp(pA, pB, pC, p4);

	printYellowLine("test1 (vertex point) should be false: ");
	std::cout << test1 << std::endl;
	printYellowLine("test2 (line point) should be false: ");
	std::cout << test2 << std::endl;
	printYellowLine("test3 (outside point) should be false: ");
	std::cout << test3 << std::endl;

	printYellowLine("test4 (inside point) should be true: ");
	std::cout << test4 << std::endl;

	return (0);
}
