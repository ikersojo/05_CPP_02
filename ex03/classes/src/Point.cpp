/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 20:25:32 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/29 22:16:21 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

// Constructors
/* ************************************************************************** */

Point::Point(void) : _x(0), _y(0)
{
	if (DEBUG == 1)
		std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	if (DEBUG == 1)
		std::cout << "x, y float constructor called" << std::endl;
}

Point::Point(const Fixed x, const Fixed y): _x(x), _y(y)
{
	if (DEBUG == 1)
		std::cout << "x, y Fixed constructor called" << std::endl;
}

Point::Point(const Point& point_instance) : _x(point_instance.getX()), _y(point_instance.getY())
{
	if (DEBUG == 1)
		std::cout << "Copy constructor called" << std::endl;
}

// Destructor
/* ************************************************************************** */

Point::~Point(void)
{
	if (DEBUG == 1)
		std::cout << "Destructor called" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Point&	Point::operator=(const Point& point_instance)
{
	// if (this != &point_instance)
	// {
	// 	(Fixed)this->_x = point_instance.getX();
	// 	(Fixed)this->_y = point_instance.getY();
	// }
	return (point_instance);
}

// Instance methods:
/* ************************************************************************** */
const Fixed&	Point::getX(void) const
{
	return (this->_x);
}

const Fixed&	Point::getY(void) const
{
	return (this->_y);
}


// Stream operator overload to print Point Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Point& point_instance)
{
	os << "point (" << point_instance.getX() << ", " << point_instance.getY() << ")";
	return (os);
}
