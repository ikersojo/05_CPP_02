/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:09:38 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 23:06:26 by isojo-go         ###   ########.fr       */
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
			~Fixed(void);
			Fixed(const Fixed& obj);

			Fixed&	operator=(const Fixed& obj);
			
			int		getRawBits(void) const;
			void	setRawBits(int const raw);

		private:
			int					_value;
			static const int	_bit = 8;

	};

#endif // FIXED_HPP
