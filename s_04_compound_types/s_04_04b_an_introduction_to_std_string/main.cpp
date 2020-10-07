//
//  main.cpp
//  s_04_04b_an_introduction_to_std_string
//
//  Created by txc-ios on 2020/10/7.
//

#include <iostream>
#include <string>
#include <limits>


int main(int argc, const char * argv[]) {
    std::cout << std::numeric_limits<std::streamsize>::max() << '\n';
    std::cout << "Please enter your full name: ";
    std::string name{};
    std::cin >> name;
    std::cin.ignore(32767, '\n');
//    std::getline(std::cin, name);
    
    std::cout << "Enter your age: ";
    std::string age {};
//    std::cin >> age;
    std::getline(std::cin, age);
    
    std::cout << "Your name is " << name << " and your age is " << age << '\n';
    
    return 0;
}
