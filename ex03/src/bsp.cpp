/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:57:53 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/30 16:19:22 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Triangle t1(point, b, c);
	Triangle t2(a, point, c);
	Triangle t3(a, b, point);
	Triangle tTot(a, b, c);

	if (t1.getArea() == 0 || t2.getArea() == 0 || t3.getArea()== 0)
		return (false);
	if (tTot.getArea() == t1.getArea() + t2.getArea() + t3.getArea())
		return (true);
	return (false);
}
