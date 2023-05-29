/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:09:38 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/29 14:33:21 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <cmath>
	
	class Fixed
	{
		public:
			// Constructors
			Fixed(void);
			Fixed(int const num);
			Fixed(float const num);
			Fixed(const Fixed& fixed_instance);

			// Destructor
			~Fixed(void);

			// Operator overload:
			Fixed&	operator=(const Fixed& fixed_instance);

			Fixed	operator+(const Fixed& fixed_instance) const;
			Fixed	operator-(const Fixed& fixed_instance) const;
			Fixed	operator*(const Fixed& fixed_instance) const;
			Fixed	operator/(const Fixed& fixed_instance) const;
			
			Fixed&	operator++(void);
			Fixed&	operator--(void);
			Fixed	operator++(int);
			Fixed	operator--(int);

			bool	operator<(const Fixed& fixed_instance) const;
			bool	operator<=(const Fixed& fixed_instance) const;
			bool	operator>(const Fixed& fixed_instance) const;
			bool	operator>=(const Fixed& fixed_instance) const;
			bool	operator!=(const Fixed& fixed_instance) const;
			bool	operator==(const Fixed& fixed_instance) const;

			// Instance methods:
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;

			// Class methods:
			static const Fixed&		min(const Fixed& a, const Fixed& b);
			static const Fixed&		max(const Fixed& a, const Fixed& b);
			static Fixed&			min(Fixed& a, Fixed& b);
			static Fixed&			max(Fixed& a, Fixed& b);

		private:
			// Instance attributes:
			int					_value;
			static const int	_bits = 8;

	};

	// Stream operator overload to print Fixed Class instances:
	std::ostream& operator<<(std::ostream& os, const Fixed& fixed_instance);

#endif // FIXED_HPP
