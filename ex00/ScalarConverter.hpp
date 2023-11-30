/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:21:10 by hikaru            #+#    #+#             */
/*   Updated: 2023/11/30 19:39:44 by hikaru           ###   ########.fr       */
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
public:
	ScalarConverter(/* args */);
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	ScalarConverter	&operator=(const ScalarConverter &rhs);
	
	static void	convert(std::string const &str);
};
