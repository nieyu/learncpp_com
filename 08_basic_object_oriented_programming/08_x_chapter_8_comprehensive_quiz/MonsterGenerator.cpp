//
//  MonsterGenerator.cpp
//  08_x_chapter_8_comprehensive_quiz
//
//  Created by nie yu on 2020/11/2.
//

#include "MonsterGenerator.hpp"

Monster MonsterGenerator::generateMonster() {
    return { Monster::Type::Dragon, "xiaohe", "*gulugulu*", 8 };
}

int getRandomNumber(int min, int max)
{
    static constexpr double fraction{ 1.0 / (static_cast<double>(RAND_MAX) + 1.0) };  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return static_cast<int>(std::rand() * fraction * (max - min + 1) + min);
}

