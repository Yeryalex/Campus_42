/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionString.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:09:31 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/09/19 10:47:46 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CheckString.hpp"

void    convertToChar(const std::string &str) {
	
	int value = atoi(str.c_str());
	
	if (std::isprint(value))
        std::cout << "char: '" << static_cast<char>(value) << "'"<< std::endl;
    else if (std::iscntrl(value))
        std::cout << "char: Non displayable" << std::endl;
    else
		std::cout << "char: impossible" << std::endl;
	
	std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << static_cast<float>(value) << ".0f" <<std::endl;
    std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	convertToInt(const std::string &str) {

    int	value = atoi(str.c_str());

    std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << value << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value)
		<< "f" << std::endl;
    std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void	convertToDouble(const std::string &str) {

    char	*endptr;
    double	value = strtod(str.c_str(), &endptr);
    int		digits = countDigits(str);

    if (value <= MAX_INT && value >= MIN_INT)
    {
        charDisplay(value);
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(digits)
			<< static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << value << std::endl;
    }
    else if (value < MAX_FLOAT && value > MIN_FLOAT) {

        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(digits)
			<< static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << value << std::endl;
    }
    else {

        if (dotFound(str)) {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossble" << std::endl;
        std::cout << "float: Impossible" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(digits) << value <<  std::endl;
        }
        else {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossble" << std::endl;
        std::cout << "float: Impossible" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << value <<  std::endl;
        }
    }
}

void	convertToFloat(const std::string &str) {

    char	*endptr;
    double	value = strtod(str.c_str(), &endptr);
    int		digits = countDigits(str);

    if (value <= MAX_INT && value >= MIN_INT) {

        charDisplay(value);
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(digits)
			<< static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(digits) << value << std::endl;
    }
    else if (value >= MIN_FLOAT && value <= MAX_FLOAT) {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        if (dotFound(str))
        {
            std::cout << "float: " << std::fixed <<  std::setprecision(digits) << value << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(value) <<  std::endl;
        }
        else
        {
            std::cout << "float: " <<  std::fixed << std::setprecision(1) << value << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(value) <<  std::endl;
        }
    }
}

void charDisplay(long value) {

    if (value >= 0 && value <= 127) {

        if (std::isprint(value))
            std::cout << "char: '" << static_cast<char>(value) << "'"<< std::endl;
        else if (std::iscntrl(value))
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
}
