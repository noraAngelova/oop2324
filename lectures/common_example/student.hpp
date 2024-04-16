#ifndef _STUDENT_HPP
#define _STUDENT_HPP
#define _CRT_SECURE_NO_WARNINGS

class Student : public Person {
protected:
	char* fn;
public:
	Student();
	Student(char const* name, unsigned const& age, char const* fnStr);
	
	~Student();
	
	Student(Student const& other);
	Student& operator=(Student const& other);
	
	Student(Student && other);
	Student& operator=(Student && other);

	void print() const;
};

#endif
