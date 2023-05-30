/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 20:25:35 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/29 22:09:47 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
	#define POINT_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <cmath>
	#include "../inc/Fixed.hpp"
	
	class Point
	{
		public:
			// Constructors
			Point(void);
			Point(const float x, const float y);
			Point(const Fixed x, const Fixed y);
			Point(const Point& point_instance);

			// Destructor
			~Point(void);

			// Operator overload:
			Point&	operator=(const Point& rhs);

			// Instance methods:
			const Fixed&	getX(void) const;
			const Fixed&	getY(void) const;

		private:
			// Instance attributes:
			const Fixed	_x;
			const Fixed	_y;
	};

	// Stream operator overload to print Point Class instances:
	std::ostream& operator<<(std::ostream& os, const Point& point_instance);

#endif // POINT_HPP

// bool bsp(Point const a, Point const b, Point const c, Point const point);