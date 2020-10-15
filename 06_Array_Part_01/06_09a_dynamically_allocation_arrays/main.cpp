//
//  main.cpp
//  06_09a_dynamically_allocation_arrays
//
//  Created by txc-ios on 2020/10/15.
//

#include <iostream>
#include <cstddef>

int main(int argc, const char * argv[]) {
    
    std::cout << "Enter a positive integer: ";
    std::size_t length{};
    std::cin >> length;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
    }
    std::cout << length << '\n';
    
    int *array{ new int[length]{} };
    std::cout << "I've just allocated an array of integers of lenght: " << length << '\n';
    std::cout << array[0] << '\n';
    array[0] = 5;
    delete[] array;
    std::cout << array[0] << '\n';
    
    int length01{ 5 };
    int *array01{ new int[static_cast<std::size_t>(length01)] };
    
    
    return 0;
}
