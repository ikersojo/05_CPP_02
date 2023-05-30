#include "../inc/Triangle.hpp"

// Constructors
/* ************************************************************************** */

Triangle::Triangle(void)
{
	if (DEBUG == 1)
		std::cout << "Default Triangle constructor called" << std::endl;
	this->_a = Point(0, 0);
	this->_b = Point(1, 0);
	this->_c = Point(0, 1);
	this->deriveArea();
}

Triangle::Triangle(Point const a, Point const b, Point const c)
{
	if (DEBUG == 1)
		std::cout << "Initialized Triangle constructor called" << std::endl;
	this->_a = a;
	this->_b = b;
	this->_c = c;
	this->deriveArea();
}

Triangle::Triangle(const Triangle& triangle_instance) : _a(triangle_instance.getA()), _b(triangle_instance.getB()), _c(triangle_instance.getC())
{
	if (DEBUG == 1)
		std::cout << "Copy Triangle constructor called" << std::endl;
	this->deriveArea();
}

// Destructor
/* ************************************************************************** */

Triangle::~Triangle(void)
{
	if (DEBUG == 1)
		std::cout << "Triangle destructor called" << std::endl;
}


// Operator overload:
/* ************************************************************************** */

Triangle&       Triangle::operator=(const Triangle& rhs)
{
	if (this != &rhs)
		this->_area = rhs.getArea();
	return (*this);
}


// Instance methods:
/* ************************************************************************** */

void     Triangle::deriveArea(void)
{
	Fixed	area;
	
	area = (this->_a.getX()*(this->_b.getY() - this->_c.getY()) + this->_b.getX()*(this->_c.getY() - this->_a.getY()) + this->_c.getX()*(this->_a.getY() - this->_b.getY())) * 0.5f;

	if (area.toFloat() < 0)
		area = area * (-1.0f);
	this->_area = area;
}

const Point     Triangle::getA(void) const
{
	return (this->_a);
}

const Point     Triangle::getB(void) const
{
	return (this->_b);
}

const Point     Triangle::getC(void) const
{
	return (this->_c);
}

const Fixed     Triangle::getArea(void) const
{
	return (this->_area);
}

// Stream operator overload to print Triangle Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Triangle& triangle_instance)
{
	os << "Triangle [" << triangle_instance.getA() << ", " << triangle_instance.getB() << ", " << triangle_instance.getC() << "]";
	return (os);
}
