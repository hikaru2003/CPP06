/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:51:06 by hikaru            #+#    #+#             */
/*   Updated: 2023/11/19 15:24:24 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	ScalarConverter	conv;
	if (argc != 2)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}
	conv.convert(argv[1]);
	return 0;
}