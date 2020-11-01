//
//  main.cpp
//  08_x_chapter_8_comprehensive_quiz
//
//  Created by nie yu on 2020/11/1.
//

#include <iostream>
#include "Point2d.hpp"
#include "HelloWorld.hpp"

int main(int argc, const char * argv[]) {
    
    Point2d first{};
    Point2d second{ 3.0, 4.0 };
    first.print();
    second.print();
    std::cout << "first point distance to second is " << first.distanceTo(second) << '\n';
    
    std::cout << "first point distance to second is " << distanceFrom(first, second) << '\n';
    
    HelloWorld hello{};
    hello.print();
    
    return 0;
}
