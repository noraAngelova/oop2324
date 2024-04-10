#define _CRT_SECURE_NO_WARNINGS
#ifndef _PERSON_HPP
#define _PERSON_HPP
#include <iostream>

class Person {
protected:
	// Използва се указател, тъй като името е с произволна дължина
	// Ако в условието е посочена максимална дължина (256), може да се използва следната декларация char firstName[256] и не е необходимо динамично заделяне на памет
	char* firstName;
	unsigned age;

	void copy(char const* name);
public:
	// Ако стойността по подразбиране на параметъра name е nullptr, трябва да се внимава с обработката и копирането на стойността
	Person(char const* name = "\0", unsigned const& ageData = 0);
	~Person();
	Person(Person const& other);
	Person& operator=(Person const& other);

	Person(Person && other);
	Person& operator=(Person && other);
	
	void print() const;

	// Предефиниране на оператори
	bool operator<(Person const& other) const;
	bool operator==(Person const& other) const;

	friend std::istream& operator>>(std::istream& is, Person& p);
	friend std::ostream& operator<<(std::ostream& os, Person& p);
};

#endif
