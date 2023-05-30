/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:58:06 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/30 15:58:45 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_HPP
	#define TRIANGLE_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <cmath>
	#include "../inc/Point.hpp"

	class Triangle
	{
		public:
			// Constructors
			Triangle(void);
			Triangle(Point const a, Point const b, Point const c);
			Triangle(const Triangle& triangle_instance);

			// Destructor
			~Triangle(void);

			// Operator overload:
			Triangle&		operator=(const Triangle& rhs);

			// Instance methods:
			const Fixed		getArea(void) const;
			const Point		getA(void) const;
			const Point		getB(void) const;
			const Point		getC(void) const;

		private:
			// Instance attributes:
			Fixed	_area;
			Point	_a;
			Point	_b;
			Point	_c;

			// Private instance methods:
			void	deriveArea(void);
	};

	// Stream operator overload to print Fixed Class instances:
	std::ostream& operator<<(std::ostream& os, const Triangle& triangle_instance);

#endif // TRIANGLE_HPP
