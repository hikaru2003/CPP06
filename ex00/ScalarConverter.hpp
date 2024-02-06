/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:21:10 by hikaru            #+#    #+#             */
/*   Updated: 2024/02/03 12:38:27 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class ScalarConverter
{
private:
	/* data */
	ScalarConverter(/* args */);
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	ScalarConverter	&operator=(const ScalarConverter &rhs);
	
public:
	static void	convert(std::string const &str);
};
