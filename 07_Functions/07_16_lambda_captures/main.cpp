//
//  main.cpp
//  07_16_lambda_captures
//
//  Created by nie yu on 2020/10/20.
//

#include <iostream>
#include <algorithm>
#include <array>
#include <string_view>
#include <string>
#include <functional>

void invoke(const std::function<void(void)> &fn) {
    fn();
}

int main(int argc, const char * argv[]) {
    
    std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };
    
    std::cout << "Search for: ";
    
    std::string search{};
    std::cin >> search;
    
    auto found{ std::find_if(arr.begin(), arr.end(), [search](std::string_view str){
        return (str.find(search) != std::string_view::npos);
    }) };
    
    if (found == arr.end()) {
        std::cout << "No nuts \n";
    } else {
        std::cout << "Found " << *found << '\n';
    }
    
    int i{ 0 };
    
    auto count{ [i]() mutable {
        
        std::cout << ++i << '\n';
        
    } };
    
    invoke(std::ref(count));
    invoke(std::ref(count));
    invoke(std::ref(count));
    
    return 0;
}
