//
//  main.cpp
//  06_x_chapter_p.6_comprehensive_quiz_01
//
//  Created by txc-ios on 2020/10/19.
//

#include <iostream>

enum Point {
    healthPotion,
    torche,
    arrow,
    max_item
};

//struct Player {
//
//};


void swap(int& x, int& y) {
//    x = x + y;
//    y = x - y;
//    x = x - y;
    
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}


int main(int argc, const char * argv[]) {
    
    int x{ 3 };
    int y{ 4 };
    swap(x, y);
    
    std::cout << "x = " << x << " y = " << y << '\n';
    
    char chs[]{ "Hello, world!" };
    const char *c { chs };
    for (; *c != '\0'; ++c) {
        std::cout << *c;
    }
    
    std::cout << '\n';
    
    int arr[]{ 0, 1, 2, 3, 4 };
    for (std::size_t count{ 0 }; count < std::size(arr); ++count) {
        std::cout << arr[count];
    }
    
    std::cout << '\n';
    
    return 0;
}
