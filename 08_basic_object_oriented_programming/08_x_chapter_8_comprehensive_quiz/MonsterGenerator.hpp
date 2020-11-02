//
//  MonsterGenerator.hpp
//  08_x_chapter_8_comprehensive_quiz
//
//  Created by nie yu on 2020/11/2.
//

#ifndef MonsterGenerator_hpp
#define MonsterGenerator_hpp

#include <stdio.h>
#include "Monster.hpp"

class Monster;

class MonsterGenerator {
private:
public:
    static Monster generateMonster();
};

#endif /* MonsterGenerator_hpp */
