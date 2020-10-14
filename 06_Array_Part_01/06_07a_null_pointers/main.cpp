//
//  main.cpp
//  06_07a_null_pointers
//
//  Created by txc-ios on 2020/10/14.
//

#include <iostream>
#include <cstddef>

int main(int argc, const char * argv[]) {
    
    float f = 3;
    float *ptr{ 0 }; // null pointer
    float *ptr2; // uninitialized pointer
    ptr2 = &f;
    if (ptr2) {
        std::cout << "ptr2 is point to a float value\n";
    } else {
        std::cout << "ptr2 is a null pointer\n";
    }
    
    ptr2 = 0; // ptr2 is now a null pointer
    
    if (ptr2) {
        std::cout << "ptr2 is point to a float value\n";
    } else {
        std::cout << "ptr2 is a null pointer\n";
    }
    
    double *dPtr { NULL };
    
    
    return 0;
}
