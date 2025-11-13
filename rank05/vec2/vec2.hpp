#pragma once

#include <iostream>
#include <string>

class vec2 {

	private:
		float x;
		float y;
	public:
		vec2();
		vec2(float x, float y);
		vec2(const vec2 &obj);
		vec2 &operator=(const vec2 &obj);
		~vec2();
		
		float	getX() const;
		float	getY() const;
		
		vec2	operator+(const vec2 &obj) const;
		vec2	operator-(const vec2 &obj) const;
		vec2	operator*(const vec2 &obj) const;
		vec2	operator*(float num) const;

		vec2	operator-();
		friend	vec2	operator*(float num, const vec2 &obj);

		float	operator[](int i) const;
		float	&operator[](int i);

		vec2	&operator++();
		vec2	operator++(int);
		vec2	&operator--();
		vec2	operator--(int);

		vec2	&operator+=(const vec2 &obj);
		vec2	&operator-=(const vec2 &obj);
		vec2	&operator*=(const vec2 &obj);
		vec2	&operator*=(float num);

		bool	operator==(const vec2 &obj) const;
		bool	operator!=(const vec2 &obj) const;
		
		friend std::ostream	&operator<<(std::ostream &os, const vec2 &obj);
};

