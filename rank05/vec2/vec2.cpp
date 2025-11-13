#include "vec2.hpp"

vec2::vec2(): x(0), y(0) { }

vec2::vec2(float x, float y): x(x), y(y) { }

vec2::vec2(const vec2 &obj) {

	this->operator=(obj);
}

vec2	&vec2::operator=(const vec2 &obj) {

	if (this != &obj) {
	
		this->x = obj.x;
		this->y = obj.y;
	}
	return (*this);
}

vec2::~vec2() {}

//better reuse [] operators instead of  getx and getY

float	vec2::getX() const {

	return (this->x);
}

float	vec2::getY() const {

	return (this->y);
}

vec2	vec2::operator+(const vec2 &obj) const{
	
	return (vec2(this->x + obj.x, this->y + obj.y));
}

vec2	vec2::operator-(const vec2 &obj) const {
	
	return (vec2(this->x - obj.x, this->y - obj.y));
}

vec2	vec2::operator*(const vec2 &obj) const {

	return (vec2(this->x * obj.x, this->y * obj.y));
}

vec2	vec2::operator*(float num) const {
	
	return (vec2(this->x * num, this->y * num));
}

vec2	&vec2::operator+=(const vec2 &obj) {

	*this = *this + obj;
	return (*this);
}

vec2	&vec2::operator-=(const vec2 &obj) {

	*this = *this - obj;
	return (*this);
}

vec2	&vec2::operator*=(const vec2 &obj) {

	*this = *this * obj;
	return (*this);
}

vec2	&vec2::operator*=(float num) {

	*this = *this * num;
	return (*this);
}

vec2	vec2::operator++(int) {

	vec2 temp(*this);
	++(*this);
	return (temp);
}

vec2	&vec2::operator++() {

	this->x += 1;
	this->y += 1;
	
	return(*this);
}

vec2	vec2::operator--(int) {

	vec2 temp(*this);
	--(*this);
	return (temp);
}

vec2	&vec2::operator--() {

	this->x -= 1;
	this->y -= 1;
	return (*this);
}

bool	vec2::operator==(const vec2 &obj) const {

	return (this->x == obj.x && this->y == obj.y);
}

bool	vec2::operator!=(const vec2 &obj) const {

	return !(*this == obj);
}

float	vec2::operator[](int i) const{

	return ((i == 0) ? this->getX() : this->getY());
}

float	&vec2::operator[](int i) {

	return ((i == 0) ? this->x : this->y);
}

vec2	vec2::operator-() {

	return (vec2(-x, -y));
}

vec2	operator*(float number, const vec2 &obj) {

	return (vec2(number * obj.x, number * obj.y));
}

std::ostream &operator<<(std::ostream &os, const vec2 &obj) {

	os << "{" << obj.getX() << "," << obj.getY() << "}";
	return (os);
}
