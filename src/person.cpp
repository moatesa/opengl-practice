#include "person.hpp"

Person::Person(std::string name) {
    name_ = name;
}

std::string Person::get_name() {
    return name_;
}