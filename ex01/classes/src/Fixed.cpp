/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:13:18 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 23:22:20 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num) : _value(num)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const fnum)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)fnum;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	std::cout << "Asignation operator called" << std::endl;
	this->_value = obj.getRawBits();
	return (*this);
}

// float	Fixed::operator<<(const Fixed& obj)
// {
// 	return(obj.toFloat());
// }

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_value));
}

int 	Fixed::toInt(void) const
{
	return (this->_value);
}
