//
//  main.cpp
//  06_18_introduction_to_standard_library_algorithms_01
//
//  Created by nie yu on 2020/10/18.
//

#include <iostream>
#include <array>
#include <algorithm>

bool containsNut(std::string_view str) {
    return str.find("nut") != std::string_view::npos;
}

bool greater(int a, int b) {
    return (a > b);
}

void printNumbers(std::array<int, 5> numbers) {
    for (int i : numbers) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

int main(int argc, const char * argv[]) {
    
    std::array<std::string_view, 5> arr{ "apple", "banana", "walnut", "lemon", "peanut" };
    std::string_view *found{ std::find_if(arr.begin(), arr.end(), containsNut) };
    if (found == arr.end()) {
        std::cout << "No nuts" << '\n';
    } else {
        std::cout << *found << '\n';
    }
    
    long count_found{ std::count_if(arr.begin(), arr.end(), containsNut) };
    std::cout << count_found << '\n';
    
    std::array<int, 5> numbers{ 80, 43, 95, 12, 44 };
    std::sort(numbers.begin(), numbers.end(), greater);
    
//    for (int i : numbers) {
//        std::cout << i << ' ';
//    }
//    std::cout << '\n';
    printNumbers(numbers);
    
    std::sort(numbers.begin(), numbers.end(), std::less<int>{});
    printNumbers(numbers);
    
    return 0;
}
