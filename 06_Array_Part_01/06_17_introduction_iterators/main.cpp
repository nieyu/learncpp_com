//
//  main.cpp
//  06_17_introduction_iterators
//
//  Created by nie yu on 2020/10/17.
//

#include <iostream>
#include <cstddef>
#include <array>

int main(int argc, const char * argv[]) {
    
    std::array data{ 0, 1, 2, 3, 4, 5, 6 };
    std::size_t length{ std::size(data) };
    
    std::size_t index{ 0 };
    while (index != length) {
        std::cout << data.at(index) << ' ';
        index++;
    }
    
    std::cout << '\n';
    
    for (int* element{ &data[0] }; element != (&data[0] + length); element++) {
        std::cout << *element << ' ';
    }
    std::cout << '\n';
    
    for (int index{ 0 }; index < length; ++index) {
        std::cout << data.at(index) << ' ';
    }
    std::cout << '\n';
    
    for (int element : data) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
    
    int *begin{ &data[0] };
    int *end{ &data[0] + length };
    for (int *ptr{ begin }; ptr < end; ptr++) {
        std::cout << *ptr << ' ';
    }
    std::cout << '\n';
    
    return 0;
}
