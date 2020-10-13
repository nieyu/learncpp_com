//
//  main.cpp
//  06_03_array_arrays_and_loops
//
//  Created by txc-ios on 2020/10/13.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    constexpr int scores[]{ 84, 92, 76, 81, 56 };
    constexpr int numStutents{ static_cast<int>(sizeof(scores) / sizeof(int)) };
    std::cout << numStutents << '\n';
    
    int maxScore{ 0 };
    for (int student{ 0 }; student < numStutents; ++student) {
        if (scores[student] > maxScore) {
            maxScore = scores[student];
        }
    }
    
    std::cout << "最高分: " << maxScore << '\n';
    
    return 0;
}
