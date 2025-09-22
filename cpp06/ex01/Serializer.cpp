/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:11:16 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/22 09:19:55 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &obj) {

	this->operator=(obj);
}

Serializer	&Serializer::operator=(const Serializer &obj) {

	if (this != &obj)
		return (*this);
	return (*this);
}

Serializer::~Serializer() {}

uintptr_t	Serializer::serialize(Data *ptr) {

	uintptr_t	dataPtr = reinterpret_cast<uintptr_t>(ptr);

	return (dataPtr);
}

Data	*Serializer::deserialize(uintptr_t	raw) {

	Data	*modifiedPtr = reinterpret_cast<Data *>(raw);
	return (modifiedPtr);
}
