/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:39:56 by hikaru            #+#    #+#             */
/*   Updated: 2024/02/03 12:38:48 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

struct Data
{
	std::string	s1;
	int			n;
};

class Serializer
{
private:
	/* data */
	Serializer(/* args */);
	~Serializer();
	Serializer(const Serializer &rhs);
	Serializer	&operator=(const Serializer &rhs);
	
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

