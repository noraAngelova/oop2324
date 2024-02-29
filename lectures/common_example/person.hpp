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
	
	void print() const;
  // TODO: да се добавят останалите компоненти от каноничното представяне. Те са задължителен елемент заради динамичното заделяне на памет
};

#endif
