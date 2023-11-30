/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:21:30 by hikaru            #+#    #+#             */
/*   Updated: 2023/11/30 11:25:26 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */)
{
	// std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << "Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

void	ScalarConverter::convert(std::string const &str)
{
	std::istringstream ssi(str);
	int				i;
	float			f;
	double			d;

	try
	{
		ssi >> i;
		f = static_cast<float>(std::stof(str));
		d = static_cast<double>(std::stod(str));
		if (ssi.fail())
			std::cout << "char: impossible" << std::endl;
		else if (std::isprint(i))
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << std::fixed;
		if (ssi.fail())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << std::setprecision(1) << i << std::endl;
		size_t	decimal_pos = str.find('.');
		size_t digit = decimal_pos == std::string::npos ? 1 : str.size() - decimal_pos - 1;
		std::cout << "float: " << std::setprecision(digit) << f << "f" << std::endl;
		std::cout << "double: " << std::setprecision(digit) << d << std::endl;
	}
	catch(const std::exception& e)
	{
		i = static_cast<int>(str[0]);
		if (std::isprint(i))
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << std::fixed;
		std::cout << "int: " << std::setprecision(1) << i << std::endl;
		std::cout << "float: " << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << std::setprecision(1) << static_cast<double>(i) << std::endl;
	}
}