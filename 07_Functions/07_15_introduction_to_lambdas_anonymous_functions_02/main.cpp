//
//  main.cpp
//  07_15_introduction_to_lambdas_anonymous_functions_02
//
//  Created by txc-ios on 2020/10/20.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <string>

struct Student {
    std::string name{};
    int age;
};

int main(int argc, const char * argv[]) {
    
    std::array<Student, 8> arr{
        { { "Albert", 3 },
            { "Ben", 5 },
            { "Christine", 2 },
            { "Dan", 8 }, // Dan has the most points (8).
            { "Enchilada", 4 },
            { "Francis", 1 },
            { "Greg", 3 },
            { "Hagrid", 5 } }
    };
    
    Student *stu {
        std::max_element(arr.begin(), arr.end(), [](Student lStu, Student rStu){
            return lStu.age < rStu.age;
        })
    };
    
    std::cout << stu->name << " is the best student!\n";
    
    return 0;
}
