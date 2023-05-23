/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:09:38 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 23:22:20 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>

	class Fixed
	{
		public:
			Fixed(void);
			Fixed(int const num);
			Fixed(float const fnum);
			~Fixed(void);
			Fixed(const Fixed& obj);

			Fixed&	operator=(const Fixed& obj);
			// float	operator<<(const Fixed& obj);
			
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int 	toInt(void) const;

		private:
			int					_value;
			static const int	_bit = 8;

	};

#endif // FIXED_HPP
