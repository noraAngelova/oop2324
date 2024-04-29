#include "person.hpp"
#include "student.hpp"
#include "teacher.hpp"

int main() {
    // Създава обект с конструктор по подразбиране
    Person p; 
    std::cout << "Default Person object: ";
    p.print();
    std::cout << std::endl;

    // Създава обект с конструктор за копиране
    Person p2 = p;
    std::cout << "Person object (copy constructor): ";
    p2.print();
    std::cout << std::endl;

    // Създава обект с конструктор с два параметъра
    Person p3("Ivan", 23);

    // Извършва присвояване между два създадени обекта чрез оператора за присвояване
    p2 = p3;
    std::cout << "Person object (operator=): ";
    p2.print();
    std::cout << std::endl;

    // Сравнява два обекта
    if (p == p2) {
        std::cout << "It is the same person" << std::endl;
    }

    // Сравнява два обекта по възраст
    if (p < p2) {
        std::cout << "p is younger than p2" << std::endl;
    }
    
    // Въвежда и извежда информация за потребител от поток
    /*Person streamPerson;
    std::cout << "\n Enter a user data - capacity, name and age:" << std::endl;
    std::cin >> streamPerson;
    std::cout << streamPerson << std::endl;*/

    // Създава обект с конструктор с параметри
    Student st("Georgi Ivanov", 19, "0MI00013422");
    std::cout << "Student object: ";
    st.print();

    std::cout << std::endl;

    // Създава обект с конструктор за копиране
    std::cout << "Student object (copy constructor): ";
    Student st2 = st;
    st2.print();

    std::cout << std::endl;

    // Извършва присвояване между два създадени обекта чрез оператора за присвояване
    Student st3;
    st3 = st;
    std::cout << "Student object (operator=): ";
    st3.print();

    std::cout << std::endl;

    // Създава обект с конструктор без параметри
    Teacher t1;
    t1.print();
    std::cout << std::endl;

    // Създава обект с конструктор за копиране
    Teacher t2 = t1;
    t2.print();
    std::cout << std::endl;

    // Извършва присвояване между два създадени обекта чрез оператора за присвояване
    Teacher t3;
    t3 = t1;
    t3.print();
    std::cout << std::endl;

    Person** arr = new Person * [10];
    arr[1] = &t2; // може да бъде и към динамично заделен обект (new Teacher), трябва динамичната памет да се освободи

    delete[10] arr;

    return 0;
}
