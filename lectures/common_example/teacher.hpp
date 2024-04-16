#ifndef _TEACHER_HPP
#define _TEACHER_HPP
#define _CRT_SECURE_NO_WARNINGS

#include "person.hpp"
#include <iostream>
#include <cstring>

class Teacher : public Person {
protected:
	unsigned salary;
public:
	Teacher() {
		salary = 0;
	}
	
	Teacher(char const* name, 
		unsigned const& age, 
		unsigned const& salary) : 
		Person(name, age), salary(salary) {}
	
	void print() const {
		Person::print();
		std::cout << " " << salary;
	}
};
#endif
