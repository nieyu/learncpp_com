//
//  Cent.cpp
//  09_02_overloading_the_arithmetic_operators_using_friend_functions
//
//  Created by txc-ios on 2020/11/4.
//

#include "Cent.hpp"

Cent operator+(const Cent& c1, const Cent& c2) {
    return Cent(c1.m_cents + c2.m_cents);
}

Cent operator+(const Cent& c, int i) {
    return Cent(c.m_cents + i);
}

Cent operator+(int i, const Cent& c) {
    return Cent(i + c.m_cents);
}

Cent operator-(const Cent& c1, const Cent& c2) {
    return Cent(c1.m_cents - c2.m_cents);
}
