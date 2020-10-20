//
//  main.cpp
//  07_15_introduction_to_lambdas_anonymous_functions
//
//  Created by txc-ios on 2020/10/20.
//

//#include <iostream>
//#include <array>
//#include <iterator>
//#include <string_view>
//#include <algorithm>
//
//static bool containNut(std::string_view str) {
//    return (str.find("nuta") != std::string_view::npos);
//}
//
//int main(int argc, const char * argv[]) {
//
//    constexpr std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };
//
//    const auto found{ std::find_if(arr.begin(), arr.end(), containNut) };
//
//    if (found == arr.end()) {
//        std::cout << "No nuts\n";
//    } else {
//        std::cout << "Found " << *found << '\n';
//    }
//
//    return 0;
//}

#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

//static bool containsNut(std::string_view str) // static means internal linkage in this context
//{
//    // std::string_view::find returns std::string_view::npos if it doesn't find
//    // the substring. Otherwise it returns the index where the substring occurs
//    // in str.
//    return (str.find("nut") != std::string_view::npos);
//}

void repeat(int repetitions, const std::function<void(int)>& fn) {
    for (int i{ 0 }; i < repetitions; ++i) {
        fn(i);
    }
}

int main()
{
    constexpr std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };
    
    const auto found{
        std::find_if(arr.begin(), arr.end(), [](std::string_view str){
            return (str.find("nut") != std::string_view::npos);
        })
    };
    
    if (found == arr.end())
    {
        std::cout << "No nuts\n";
    }
    else
    {
        std::cout << "Found " << *found << '\n';
    }
    
    repeat(3, [](int i) {
        std::cout << i << ' ';
    });
    std::cout << '\n';
    
    return 0;
}
