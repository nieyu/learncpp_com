//
//  main.cpp
//  07_15_introduction_to_lambdas_anonymous_functions_01
//
//  Created by txc-ios on 2020/10/20.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <string_view>

int main(int argc, const char * argv[]) {
    
    auto print{
        
        [](auto value) {
            static int callCount = 0;
            std::cout << callCount++ << " : " << value << '\n';
        }
        
    };
    
    print("Hello");
    print("world!");
    
    print(12.0);
    print(14.3);
    
    print("nieyu");
    
    print(11);
    
    std::array arr{ 13, 90, 99, 5, 40 };
    std::sort(arr.begin(), arr.end(), [](int lrh, int rrh) -> bool {
        return lrh > rrh;
    });
    
    for (int i : arr) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    
    return 0;
}
