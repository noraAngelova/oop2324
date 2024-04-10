#include "person.hpp"

int main() {
    // Създава обект с конструктоп по подразбиране
    Person p; 
    p.print();
    std::cout << std::endl;

    // Създава обект с конструктор за копиране
    Person p2 = p;
    p2.print();
    std::cout << std::endl;

    // Създава обект с конструктор с два параметъра
    Person p3("Ivan", 23);

    // Извършва присвояване между два създадени обекта чрез оператора за присвояване
    p2 = p3;
    p2.print();


    // Сравнява два обекта
    if (p == p2) {
        std::cout << "It is the same person" << std::endl;
    }

    // Сравнява два обекта по възраст
    if (p < p2) {
        std::cout << "\n p is younger than p2";
    }
    
    // Въвежда и извежда информация за потребител от поток
    Person streamPerson;
    std::cout << "\n Enter a user data - capacity, name and age:" << std::endl;
    std::cin >> streamPerson;
    std::cout << streamPerson << std::endl;

    return 0;
}
