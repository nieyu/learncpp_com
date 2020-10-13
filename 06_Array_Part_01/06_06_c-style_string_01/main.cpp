//
//  main.cpp
//  06_06_c-style_string_01
//
//  Created by txc-ios on 2020/10/13.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;
    std::cin.ignore(32767, '\n');
    
    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin, name);
    
    std::cout << "Hello, " << name << ", you've picked: " << choice << '\n';
    
    
    
    return 0;
}
