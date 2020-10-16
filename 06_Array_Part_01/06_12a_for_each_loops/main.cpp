//
//  main.cpp
//  06_12a_for_each_loops
//
//  Created by txc-ios on 2020/10/16.
//

#include <iostream>
#include <iterator>
#include <string>

int main(int argc, const char * argv[]) {
    
    constexpr int scores[]{ 84, 92, 76, 81, 56 };
    constexpr int numberOfStudents{ static_cast<int>(std::size(scores)) };
    
    int maxScore{ 0 };
    for (int student{ 0 }; student < numberOfStudents; ++student) {
        if (scores[student] > maxScore) {
            maxScore = scores[student];
        }
    }
    
    std::cout << "The max score is " << maxScore << '\n';
    
    constexpr int fibonacci[]{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    for (int num : fibonacci) {
        std::cout << num << ' ';
    }
    std::cout << '\n';
    
    for (const int &element : fibonacci) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
    
    constexpr std::string_view names[]{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
    
    std::cout << "Enter a name: ";
    std::string name;
    std::cin >> name;
    
    bool found{ false };
    for (auto element : names) {
        if (element == name) {
            found = true;
        }
    }
    if (found) {
        std::cout << name << " was found!\n";
    } else {
        std::cout << name << " was not found!\n";
    }
    
    return 0;
}
