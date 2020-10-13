//
//  main.cpp
//  06_06_c-style_string
//
//  Created by txc-ios on 2020/10/13.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, world!\n";
    
    std::string myName{ "Nieyu" };
    std::cout << myName << '\n';
    myName = "chenxinyu";
    std::cout << myName << '\n';
    
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin, name);
    
    std::cout << "Enter your age: ";
    std::string age{};
    std::getline(std::cin, age);
    
    std::cout << "Your name is " << name << ", and your age is " << age << '\n';
    
    return 0;
}
