//
//  main.cpp
//  06_03_arrays_and_loops
//
//  Created by txc-ios on 2020/10/13.
//

#include <iostream>
#include <iterator>


int main(int argc, const char * argv[]) {
    
    int number{};
    do {
        std::cout << "Please enter an integer between 1 and 9: ";
        std::cin >> number;
        if (std::cin.fail()) {
            std::cin.clear();
        }
        std::cin.ignore(32767, '\n');
    } while (number < 1 || number > 9);
    
    std::cout << number << '\n';
    
    
    constexpr int array[]{ 2, 4, 9, 3, 1, 5, 7, 6, 8 };
    constexpr int array_size{ static_cast<int>(sizeof(array)/sizeof(array[0])) };
    
    for (int index{ 0 }; index < array_size; ++index) {
        std::cout << array[index] << ' ';
    }
    std::cout << '\n';
    
    
    
    
    return 0;
}
