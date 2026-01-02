#include <iostream>
#include "person.hpp"

int main() {
    std::cout << "Hello World" << std::endl;

    Person avery("Avery");

    std::cout << "Person: name is " << avery.get_name() << std::endl;
    return 0;
}