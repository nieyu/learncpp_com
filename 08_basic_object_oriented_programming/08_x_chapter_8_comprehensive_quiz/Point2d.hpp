//
//  Point2d.hpp
//  08_x_chapter_8_comprehensive_quiz
//
//  Created by nie yu on 2020/11/1.
//

#ifndef Point2d_hpp
#define Point2d_hpp

#include <stdio.h>

class Point2d {
private:
    double m_x { 0.0 };
    double m_y { 0.0 };
public:
    Point2d(double x = 0.0, double y = 0.0): m_x{ x }, m_y{ y } {}
    void print() const;
    double distanceTo(const Point2d& point) const;
    friend double distanceFrom(const Point2d& point1, const Point2d point2);
};

double distanceFrom(const Point2d& point1, const Point2d point2);

#endif /* Point2d_hpp */
