//
//  main.cpp
//  08_13_friend_functions_and_classes_01
//
//  Created by nie yu on 2020/10/26.
//

#include <iostream>
#include "Point3D.hpp"
#include "Vector3D.hpp"


int main(int argc, const char * argv[]) {
    
    
    Point3D p{ 1.0, 2.0, 3.0 };
    Vector3D v{ 2.0, 2.0, 2.0 };
    
    p.print();
    p.moveByVector(v);
    p.print();
    
    return 0;
}
