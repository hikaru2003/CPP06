/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:03:53 by hikaru            #+#    #+#             */
/*   Updated: 2023/11/30 19:19:30 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer(/* args */)
{
	// std::cout << "Default constructor called" << std::endl;
}

Serializer::~Serializer()
{
	// std::cout << "Destructor called" << std::endl;
}

Serializer::Serializer(const Serializer &rhs)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Serializer	&Serializer::operator=(const Serializer &rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);	
}