//
//  Monster.cpp
//  08_x_chapter_8_comprehensive_quiz
//
//  Created by nie yu on 2020/11/1.
//

#include "Monster.hpp"
#include <iostream>

std::string_view Monster::getTypeString() const {
    
    return "";
}

void Monster::print() const {
    std::cout << m_name << " the " << '\n';
}
