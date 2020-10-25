//
//  Point3D.hpp
//  08_13_friend_functions_and_classes_01
//
//  Created by nie yu on 2020/10/26.
//

#ifndef Point3D_hpp
#define Point3D_hpp
#include <stdio.h>

class Vector3D;

class Point3D {
private:
    double m_x{};
    double m_y{};
    double m_z{};
public:
    Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
    : m_x{ x }, m_y { y }, m_z{ z } {}
    void print() const;
    void moveByVector(const Vector3D &v);
};


#endif /* Point3D_hpp */
