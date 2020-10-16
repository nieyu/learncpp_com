//
//  main.cpp
//  06_14_pointers_to_pointers_and_dynamic_multidimensional_arrays
//
//  Created by txc-ios on 2020/10/16.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int value = 5;
    int *ptr = &value;
//    int& ref{ value };
//    std::cout << ref << '\n';
    
    int **ptrptr = &ptr;
    std::cout << ptr << '\n';
    std::cout << *ptr << '\n';
    std::cout << *ptrptr << '\n';
    std::cout << **ptrptr << '\n';
    
//    int **arr = new int[5][10];
    int (*arr)[5] = new int[10][5];
    
    
    int **array = new int*[10];
    for (int count{ 0 }; count < 10; ++count) {
        array[count] = new int[count + 1];
    }
    
    for (int count{ 0 }; count < 10; ++count) {
        delete[] array[count];
    }
    delete[] array;
    
    return 0;
}
