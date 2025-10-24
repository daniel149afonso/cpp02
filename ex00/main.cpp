/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:16:37 by daniel149af       #+#    #+#             */
/*   Updated: 2025/10/24 13:16:12 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

int	main()
{

	
	float a = 0.1f;
    float b = 0.2f;
    float c = a + b;

    std::cout << std::setprecision(20);
    std::cout << "a + b = " << c << std::endl;
	return (0);
}