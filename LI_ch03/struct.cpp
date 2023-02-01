#include <iostream>
#include <string>

enum cow_purpose {dairy,meat,hide,pet};

struct cow
{
    std::string name;
    int age;
    unsigned char purpose;  //0 is for diary, 1 is for meat, etc
};


int main()
{
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Daisy";
    my_cow.purpose = dairy;
    std::cout << my_cow.name << "is a type-" << (int)my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << "is " << (int)my_cow.age << "years old" << std::endl;

    return(0);
}
