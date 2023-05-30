/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:37:02 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/30 15:58:45 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
	#define MAIN_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include "../classes/inc/Fixed.hpp"
	#include "../classes/inc/Point.hpp"
	#include "../classes/inc/Triangle.hpp"
	#include <iostream>

	bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif // MAIN_HPP
