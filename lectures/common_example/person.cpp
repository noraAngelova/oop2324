#define _CRT_SECURE_NO_WARNINGS
#include "person.hpp"
#include <iostream>
#include <cstring>

void Person::copy(char const* name) {
	firstName = new char[strlen(name) + 1];
	strcpy(firstName, name);
}

void Person::print() const {
	std::cout << firstName << " " << age;
}

Person::Person(char const * name, unsigned const& ageData) {
	age = ageData;
	copy(name);
}

Person::~Person() {
	delete[] firstName;
}

Person::Person(Person const& other) { 
	age = other.age;
	copy(other.firstName);
}

Person::Person(Person && other) {
	age = other.age;
	firstName = other.firstName;
	
	other.firstName = nullptr;
	other.age = 0;
}

Person& Person::operator=(Person const& other) {
	if (this != &other) {
		age = other.age;
		other.age = 0;

		delete[] firstName;
		copy(other.firstName);
	}

	return *this;
}

Person& Person::operator=(Person && other) {
	if (this != &other) {
		age = other.age;

		delete[] firstName;
		firstName = other.firstName;

		other.firstName = nullptr;
		other.age = 0;
	}

	return *this;
}

// Предефиниране на оператори
bool Person::operator<(Person const& other) const {
	return age < other.age;
}

bool Person::operator==(Person const& other) const {
	return (age == other.age) && strcmp(firstName, other.firstName) == 0;
}

/// <summary>
/// Example input: 
/// 30 Nora Angelova
/// 34 
/// </summary>
std::istream& operator>>(std::istream& is, Person& p) {
	unsigned capacity = 1;
	is >> capacity;
	
	delete[] p.firstName;
	p.firstName = new char[capacity];
	is.getline(p.firstName, capacity);
	
	is >> p.age;

	return is;
}

std::ostream& operator<<(std::ostream& os, Person& p) {
	os << p.firstName << " " << p.age;
	return os;
}
