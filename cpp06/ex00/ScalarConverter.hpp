#ifndef SCALARCONVERTER_HPP
# define	SCALARCONVERTER_HPP

class ScalarConverter {

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		ScalarConverter &operator=(const ScalarConverter &obj);
		~ScalarConverter();
		static void	converter(const std::string &str);
};

#endif
