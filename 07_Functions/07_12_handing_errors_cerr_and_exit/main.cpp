//
//  main.cpp
//  07_12_handing_errors_cerr_and_exit
//
//  Created by txc-ios on 2020/10/19.
//

#include <iostream>

void printString(const char* cstr) {
    if (cstr) {
        std::cout << cstr << '\n';
    } else {
        std::cout << "It's a null str\n";
    }
}

int main(int argc, const char * argv[]) {
    
    printString(nullptr);
    
    printString("Hello world!");
    
    std::string hello{ "Hello world!" };
    
//    std::cout << "Please enter a char: ";
//    char ch;
//    std::cin >> ch;
//
//    int index { static_cast<int>(hello.find(ch)) };
//    if (index != -1) {
//        std::cout << ch << " was found at index " << index << '\n';
//    } else {
//        std::cout << ch << " wasn't found! \n";
//    }
    
//    int index;
//
//    do {
//        std::cout << "Please enter an index: ";
//        std::cin >> index;
//
//        if (std::cin.fail()) {
//            std::cin.clear();
//            std::cin.ignore(32767, '\n');
//            index = -1;
//            continue;
//        }
//    } while (index < 0 || (index > static_cast<int>(hello.size())));
//
//    std::cout << "Letter #" << index << " is " << hello[index] << '\n';
    
    
    int index;
    
    do {
        std::cout << "Enter an index: ";
        std::cin >> index;
        
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            index = -1;
            continue;
        }
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
    } while (index == -1 || (index > static_cast<int>(hello.size())));
    
    std::cout << "Lettel # " << index << " is " << hello[index] << '\n';
    
    return 0;
}
