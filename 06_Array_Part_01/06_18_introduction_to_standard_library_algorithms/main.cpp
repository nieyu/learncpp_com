//
//  main.cpp
//  06_18_introduction_to_standard_library_algorithms
//
//  Created by nie yu on 2020/10/18.
//

#include <iostream>
#include <array>

int main(int argc, const char * argv[]) {
    
    
    std::array arr{ 13, 90, 88, 5, 88, 80 };
    
    std::cout << "Please enter a value to search and replace for: ";
    
    int search{};
    int replace{};
    
    std::cin >> search >> replace;
    
    int *found{ std::find(arr.begin(), arr.end(), search) };
    std::cout << found << *found << '\n';
    
    if (found) {
        
        *found = replace;
        
    } else {
        
        std::cout << "Not found with the value\n";
        
    }
    
    for (int element : arr) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
    
    return 0;
}
