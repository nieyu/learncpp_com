//
//  main.cpp
//  06_08_pointers_and_array
//
//  Created by txc-ios on 2020/10/14.
//

#include <iostream>

void changeArray(int *ptr) {
    *ptr = 12;
}

int main(int argc, const char * argv[]) {
    
    int array[5]{ 9, 7, 5, 3, 1 };
    std::cout << "Element 0 has address: " << &array[0] << '\n';
    std::cout << "Element 0 has address: " << &array[1] << '\n';
    
    std::cout << "The array decays to a pinter holding address: " << array << '\n';
    int *ptr{ array };
    std::cout << *ptr << '\n';
    changeArray(ptr);
    ptr += 1;
    std::cout << *ptr << '\n';
    std::cout << array[0] << '\n';
    
    char name[]{ "Nieyu" };
    std::cout << *name << '\n';
    
    
    
    return 0;
}
