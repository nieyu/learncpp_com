//
//  HelloWorld.hpp
//  08_x_chapter_8_comprehensive_quiz
//
//  Created by nie yu on 2020/11/1.
//

#ifndef HelloWorld_hpp
#define HelloWorld_hpp

#include <stdio.h>
#include <iostream>

class HelloWorld
{
private:
    char *m_data{};
 
public:
    HelloWorld()
    {
        m_data = new char[14];
        const char *init{ "Hello, World!" };
        for (int i = 0; i < 14; ++i)
            m_data[i] = init[i];
    }
 
    ~HelloWorld()
    {
        delete[] m_data;
        m_data = nullptr;
    }
 
    void print() const
    {
        std::cout << m_data << '\n';
    }
 
};

#endif /* HelloWorld_hpp */
