//
//  main.cpp
//  06_09a_dynamically_allocation_arrays_01
//
//  Created by txc-ios on 2020/10/15.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "How many names would you like to enter? ";
    int count{ };
    std::cin >> count;
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    
    std::string *names { new std::string[count]{ } };
    for (int index{ 0 }; index < count; ++index) {
        std::cout << "Enter name #" << index + 1 << " ";
//        std::cin >> names[index];
        std::getline(std::cin, names[index]);
        std::cin.clear();
    }
    
    std::sort(names, names + count);
    
    std::cout << "Here is your sorted list:\n";
    for (int index{ 0 }; index < count; ++index) {
        std::cout << "Name #" << index + 1 << " " << names[index] << '\n';
    }
    
    delete [] names;
    
    return 0;
}
