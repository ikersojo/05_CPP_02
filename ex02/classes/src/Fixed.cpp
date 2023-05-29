/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:13:18 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/29 20:39:59 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// Constructors
/* ************************************************************************** */

Fixed::Fixed(void) : _value(0)
{
	if (DEBUG == 1)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num)
{
	float	fnum;

	if (DEBUG == 1)
		std::cout << "Int constructor called" << std::endl;
	fnum = roundf(num * (float)(1 << this->_bits));
	this->_value = (int)fnum;
}

Fixed::Fixed(float const num)
{
	float	fnum;

	if (DEBUG == 1)
		std::cout << "Float constructor called" << std::endl;
	fnum = roundf(num * (float)(1 << this->_bits));
	this->_value = (int)fnum;
}

Fixed::Fixed(const Fixed& fixed_instance)
{
	if (DEBUG == 1)
		std::cout << "Copy constructor called" << std::endl;
	*this = fixed_instance;
}

// Destructor
/* ************************************************************************** */

Fixed::~Fixed(void)
{
	if (DEBUG == 1)
		std::cout << "Destructor called" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Fixed&	Fixed::operator=(const Fixed& fixed_instance)
{
	this->_value = fixed_instance.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed& fixed_instance) const
{
	Fixed	sum;

	sum = this->toFloat() + fixed_instance.toFloat();
	return (sum);
}

Fixed	Fixed::operator-(const Fixed& fixed_instance) const
{
	return (Fixed (this->toFloat() - fixed_instance.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& fixed_instance) const
{
	return (Fixed (this->toFloat() * fixed_instance.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& fixed_instance) const
{
	return (Fixed (this->toFloat() / fixed_instance.toFloat()));
}

/* ************************************************************************** */

Fixed&	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	fixed_instance;

	fixed_instance = *this;
	this->_value++;
	return (fixed_instance);
}

Fixed	Fixed::operator--(int)
{
	Fixed	fixed_instance;

	fixed_instance = *this;
	this->_value--;
	return (fixed_instance);
}

/* ************************************************************************** */

bool	Fixed::operator<(const Fixed& fixed_instance) const
{
	if (this->toFloat() < fixed_instance.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& fixed_instance) const
{
	if (this->toFloat() <= fixed_instance.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed& fixed_instance) const
{
	if (this->toFloat() > fixed_instance.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& fixed_instance) const
{
	if (this->toFloat() >= fixed_instance.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& fixed_instance) const
{
	if (this->toFloat() != fixed_instance.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& fixed_instance) const
{
	if (this->toFloat() == fixed_instance.toFloat())
		return (true);
	return (false);
}

// Instance methods:
/* ************************************************************************** */

int		Fixed::getRawBits(void) const
{
	if (DEBUG == 1)
		std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	if (DEBUG == 1)
		std::cout << "setRawBits member function call ed" << std::endl;
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

// Class methods:
/* ************************************************************************** */

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed&			Fixed::min(Fixed& a, Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

Fixed&			Fixed::max(Fixed& a, Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

// Stream operator overload to print Fixed Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Fixed& fixed_instance)
{
	os << fixed_instance.toFloat();
	return (os);
}
