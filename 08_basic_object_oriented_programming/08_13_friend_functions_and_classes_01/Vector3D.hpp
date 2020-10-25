//
//  Vector3D.hpp
//  08_13_friend_functions_and_classes_01
//
//  Created by nie yu on 2020/10/26.
//

#ifndef Vector3D_hpp
#define Vector3D_hpp

#include <stdio.h>
#include <iostream>
#include "Point3D.hpp"

class Vector3D {
private:
    double m_x{};
    double m_y{};
    double m_z{};
public:
    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
    : m_x{ x }, m_y { y }, m_z{ z } {
        
    }
    void print() const {
        std::cout << "Vector(" << m_x << ", " << m_y << ", " << m_z << ")\n";
    }
    friend void Point3D::moveByVector(const Vector3D& vector);
};

#endif /* Vector3D_hpp */
