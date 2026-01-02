#include <string>

class Person {
    public:
    Person(std::string name);

    std::string get_name();

    private:
    std::string name_;
};