//
//  main.cpp
//  06_06a_an_introduction_to_std_string_view
//
//  Created by txc-ios on 2020/10/13.
//

#include <iostream>
#include <string_view>
#include <string>

std::string_view askForName() {
    std::cout << "What's your name?\n";
    std::string str{};
    std::cin >> str;
    
    std::string_view view{ str };
    std::cout << "Hello " << view << '\n';
    return view;
}


int main(int argc, const char * argv[]) {
    
    char text[]{ "Hello" };
    std::string str{ text };
    std::string more{ str };
    
    std::cout << text << " " << str << " " << more << '\n';
    
//    std::string_view rice{ "The rice is white!" };
//    std::cout << rice.length() << '\n';
//    std::cout << rice.substr(0, str.find(' ')) << '\n';
    
    std::string_view rice{ "Trains are fast!" };
    
    std::cout << rice.length() << '\n'; // 16
    std::cout << rice.substr(0, rice.find(' ')) << '\n'; // Trains
    std::cout << (rice == "Trains are fast!") << '\n'; // 1
    
//    std::cout << rice.starts_with("Boats") << '\n'; // 0
//    std::cout << rice.ends_with("fast!") << '\n'; // 1
    
    std::cout << rice << '\n'; // Trains are fast!
    
    rice.remove_prefix(2);
    std::cout << rice << '\n';
    rice.remove_suffix(2);
    std::cout << rice << '\n';
    
    std::string_view view { askForName() };
    std::cout << "Your name is " << view << '\n';
    
    std::cout << std::strlen(rice.data()) << '\n';
    
    return 0;
}
