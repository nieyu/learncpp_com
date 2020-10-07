//
//  main.cpp
//  s_04_05_enumerated_types
//
//  Created by txc-ios on 2020/10/7.
//

#include <iostream>

enum Color {
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_WHITE,
    COLOR_CYAN,
    COLOR_YELLOW,
    COLOR_MAGENTA,
};



int main(int argc, const char * argv[]) {
    
    Color paint = COLOR_RED;
    Color house(COLOR_BLUE);
    Color apple { COLOR_MAGENTA };
    
    std::cout << paint << '\n';
    std::cout << house << '\n';
    std::cout << apple << '\n';
    
    return 0;
}
