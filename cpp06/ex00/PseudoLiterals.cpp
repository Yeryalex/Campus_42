/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PseudoLiterals.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:30:06 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/19 10:14:23 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CheckString.hpp"

void	printError(void) {

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
}

void	printLiterals(std::string limit, int a) {

    if (a == 1) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << limit << "f" << std::endl;
        std::cout << "double: " << limit << std::endl;
    }
    else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << limit  << std::endl;
        std::cout << "double: " << limit.substr(0, limit.length() - 1) << std::endl;
    }
}

int	checkLiterals(const std::string &str) {

    std::string limits[6] = {"nan", "-inf", "+inf", "nanf", "-inff", "+inff"};

    for (int i = 0; i < 3; i++) {
        if (str == limits[i]) {
            return (1);
        }
    }
    for (int i = 3; i < 6; i++) {
        if (str == limits[i]) {
            return (2);
        }
    }
    return (0);
}

int	extraCharsDouble(const std::string &str) {

    for (unsigned int i = 0; i < str.length(); i++) {

        if (!isdigit(str[i]) && str[i] != '.')
        {
            if (str[i] != '-')
                return (1);
        }
    }
    return (0);
}

int	extraCharsFloat(const std::string &str) {

    for (unsigned int i = 0; i < str.length(); i++) {

        if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
        {
            std::cout << str[i] << std::endl;
            if (str[i] != '-')
                return (1);
        }
    }
    return (0);
}
