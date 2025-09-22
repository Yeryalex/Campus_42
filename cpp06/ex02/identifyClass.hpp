/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifyClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:46:18 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/22 14:41:17 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFYCLASS_HPP
# define	IDENTIFYCLASS_HPP

#include "Base.hpp"

Base	*generate(void);
void	identify(Base	*p);
void	identify(Base	&p);

#endif
