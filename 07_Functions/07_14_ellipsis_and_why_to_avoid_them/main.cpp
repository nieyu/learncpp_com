//
//  main.cpp
//  07_14_ellipsis_and_why_to_avoid_them
//
//  Created by txc-ios on 2020/10/20.
//

#include <iostream>
#include <cstdarg> // needed to use ellispsis

double findAverage(int i, ...) {
    
    double sum = 0;
    
    va_list list;
    va_start(list, i);
    
    for (int arg{ 0 }; arg < i; ++arg) {
        sum += va_arg(list, int);
    }
    
    va_end(list);
    
    return sum / i;
}

int main(int argc, const char * argv[]) {
    
    
    std::cout << findAverage(5, 9, 4, 3, 8, 6) << '\n';
    
    
    return 0;
}
