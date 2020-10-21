//
//  main.cpp
//  07_16_lambda_captures_01
//
//  Created by txc-ios on 2020/10/21.
//

#include <iostream>

int i{};
static int j{};

int getValue() {
    return 0;
}

int main(int argc, const char * argv[]) {
    
    int a{};
    constexpr int b{};
    static int c {};
    static constexpr int d{};
    const int e{};
    const int f{ getValue() };
    static const int g{};
    static const int h{ getValue() };
    
    [a, b, e, f]() {
        a;
        b;
        c;
        d;
        e;
        f;
        g;
        h;
        i;
        j;
    }();
    
    return 0;
}
