//
//  main.cpp
//  s_04_05a_enum_classes
//
//  Created by txc-ios on 2020/10/8.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    enum Color {
        color_red,
        color_blue
    };
    
    enum Fruit {
        fruit_banana,
        fruit_apple
    };
    
    enum class Color_c {
        red,
        blue
    };
    
    Color_c color{ Color_c::blue };
    
    if (color == Color_c::red) {
        std::cout << "color is red\n";
    } else {
        std::cout << "color is blue\n";
    }
    std::cout << static_cast<int>(color) << '\n';
    
    return 0;
}
