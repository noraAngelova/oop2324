#define _CRT_SECURE_NO_WARNINGS
#include "person.hpp"
#include "student.hpp"
#include <iostream>
#include <cstring>

Student::Student()  {
	fn = new char[1];
	strcpy(fn, "\0");
}

Student::Student(char const* name, 
	unsigned const& age, 
	char const* fnStr) : Person(name, age) {
	fn = new char[strlen(fnStr) + 1];
	strcpy(fn, fnStr);
}

Student::~Student() {
	delete[] fn;
}

Student::Student(Student const& other) : Person(other) {
	fn = new char[strlen(other.fn) + 1];
	strcpy(fn, other.fn);
}

Student::Student(Student && other) : Person(std::move(other)) {
	fn = other.fn;
	other.fn = nullptr;
}

Student& Student::operator=(Student const& other) {
	if (this != &other) {
		Person::operator=(other);

		delete[] fn;
		fn = new char[strlen(other.fn) + 1];
		strcpy(fn, other.fn);
	}

	return *this;
}

Student& Student::operator=(Student&& other) {
	if (this != &other) {
		Person::operator=(std::move(other));
		
		fn = other.fn;
		other.fn = nullptr;
	}
	return *this;
}

void Student::print() const {
	Person::print();
	std::cout << " " << fn;
}
