/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:09:38 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/25 20:46:00 by isojo-go         ###   ########.fr       */
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
			Fixed(void);
			Fixed(int const num);
			Fixed(float const fnum);
			Fixed(const Fixed& obj);
			~Fixed(void);

			Fixed&	operator=(const Fixed& obj);
			
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int 	toInt(void) const;

		private:
			int					_value;
			static const int	_bits = 8;

	};

	std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif // FIXED_HPP
