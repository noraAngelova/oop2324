#define _CRT_SECURE_NO_WARNINGS
#include "person.hpp"
#include <iostream>
#include <cstring>

// Вътрешен метод за копиране. Вика се само от определени места и не може да доведе до проблем, защото това се гарантира от разработчика.
// За името НЕ трябва да има вече заделена памет.
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
