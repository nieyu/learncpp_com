//
//  Cent.hpp
//  09_02_overloading_the_arithmetic_operators_using_friend_functions
//
//  Created by txc-ios on 2020/11/4.
//

#ifndef Cent_hpp
#define Cent_hpp

#include <stdio.h>

class Cent {
private:
    int m_cents;
public:
    Cent(int cents): m_cents{ cents } {}
    int genCents() const { return m_cents; }
    friend Cent operator+(const Cent& c1, const Cent& c2);
    
    friend Cent operator+(const Cent& c, int i);
    friend Cent operator+(int i, const Cent& c);
    
    friend Cent operator-(const Cent& c1, const Cent& c2);
};

#endif /* Cent_hpp */
