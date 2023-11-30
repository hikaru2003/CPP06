/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:51:06 by hikaru            #+#    #+#             */
/*   Updated: 2023/11/30 19:20:46 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Serializer.hpp"

int	main(void)
{
	Data	data;
	data.s1 = "Hello";
	data.n = 42;

	std::cout << "Data: " << &data << std::endl;
	std::cout << "serialize: " << Serializer::serialize(&data) << std::endl;
	std::cout << "deserialize: " << Serializer::deserialize(Serializer::serialize(&data)) << std::endl;
	
	return 0;
}