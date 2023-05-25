/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:13:18 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/25 20:52:15 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num)
{
	float	fnum;

	std::cout << "Int const∫ructor called" << std::endl;
	fnum = roundf(num * (float)(1 << this->_bits));
	this->_value = (int)fnum;
}

Fixed::Fixed(float const num)
{
	float	fnum;

	std::cout << "Float constructor called" << std::endl;
	fnum = roundf(num * (float)(1 << this->_bits));
	this->_value = (int)fnum;
}

Fixed::Fixed(const Fixed& fixed_instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed_instance;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& fixed_instance)
{
	std::cout << "Asignation operator called" << std::endl;
	this->_value = fixed_instance.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function call ed" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	float	fnum;

	fnum = (float)this->_value / (float)(1 << this->_bits);
	return (fnum);
}

int 	Fixed::toInt(void) const
{
	float	fnum;

	fnum = (float)this->_value / (float)(1 << this->_bits);
	return ((int)fnum);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed_instance)
{
	os << fixed_instance.toFloat();
	return (os);
}
