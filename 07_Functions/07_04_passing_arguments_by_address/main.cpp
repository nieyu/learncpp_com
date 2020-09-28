//
//  main.cpp
//  07_04_passing_arguments_by_address
//
//  Created by txc-ios on 2020/9/28.
//

#include <iostream>

void foo(int *ptr) {
    *ptr = 6;
}

void printArray(const int *array, int length) {
    std::cout << '\n';
    if (!array) {
        std::cout << "array 不能为空" << '\n';
        return;
    }
    for (int index{ 0 }; index < length; ++index) {
        std::cout << array[index] << ' ';
    }
    std::cout << '\n';
}

void setToNull(int *tempPtr) {
    tempPtr = nullptr;
}

void setToSix(int *tempPtr) {
    *tempPtr = 6;
}

void setToNullReference(int *&tempPtr) {
    tempPtr = nullptr;
}

int main(int argc, const char * argv[]) {
    
    int i{ 5 };
    std::cout << "i = " << i << '\n';
    foo(&i);
    std::cout << "i = " << i << '\n';
    
    // point vs reference
    // point can be null, but reference cannot be null.
    // reference should be define while creating.
    // reference couldn't be changed while created.
    int a = 1;
    int b = 2;
    int *p = NULL;
    std::cout << "p " << (p ? "nonull" : "null") << '\n';
    std::cout << "p" << p << '\n';
    p = &a;
    std::cout << "p" << p << '\n';
    std::cout << "p " << *p << '\n';
    std::cout << "p = &a" << '\n';
    p = &b;
    std::cout << "p" << p << '\n';
    std::cout << "p " << *p << '\n';
    std::cout << "p = &b" << '\n';
    
    int &reference_a = a;
    int &reference_b = b;
    std::cout << reference_a << ":" << &reference_a << '\n';
    std::cout << reference_b << ":" << &reference_b << '\n';
    
    int array[6]{6, 5, 4, 3, 2, 1};
    printArray(array, 6);
    
    int five{ 5 };
    int *ptr{ &five };
    
    
    std::cout << &five << " " << ptr << " " << *ptr << '\n';
    
    setToNull(ptr);
    
    if (ptr) {
        std::cout << *ptr << '\n';
    } else {
        std::cout << "ptr is null\n";
    }
    
    setToSix(ptr);
    std::cout << *ptr << '\n';
    setToNull(ptr);
    std::cout << *ptr << '\n';
    
    setToNullReference(ptr);
    if (ptr) {
        std::cout << *ptr << '\n';
    } else {
        std::cout << "ptr is null\n";
    }
    
    return 0;
}
