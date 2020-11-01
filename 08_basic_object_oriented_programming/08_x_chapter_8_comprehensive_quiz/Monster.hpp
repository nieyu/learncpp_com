//
//  Monster.hpp
//  08_x_chapter_8_comprehensive_quiz
//
//  Created by nie yu on 2020/11/1.
//

#ifndef Monster_hpp
#define Monster_hpp

#include <stdio.h>
#include <string>
#include "MonsterType.hpp"

class Monster {
    
public:
    enum class Type {
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        max_monster_types
    };
    
private:
    Type m_type{};
    std::string m_name{};
    std::string m_roar{};
    int m_hitPoints{};
    std::string_view getTypeString() const;
public:
    Monster(Type type, std::string& name, std::string& roar, int hit_points)
    : m_type{ type }, m_name{ name }, m_roar{ roar }, m_hitPoints{ hit_points }
    {
        
    }
    
    void print() const;
    
};

#endif /* Monster_hpp */
