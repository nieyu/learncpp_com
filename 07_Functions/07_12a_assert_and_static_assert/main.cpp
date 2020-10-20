//
//  main.cpp
//  07_12a_assert_and_static_assert
//
//  Created by txc-ios on 2020/10/20.
//

#include <iostream>
#include <cassert>
#include <cmath>

double calculateTimeUnitlObjectHitGround(double initialHeight, double gravity) {
    
    assert(gravity > 0 );
    if (initialHeight <= 0.0) {
        return 0.0;
    }
    return std::sqrt((2.0 * initialHeight) / gravity);
}

int main(int argc, const char * argv[]) {
    
//    std::cout << "Took " << calculateTimeUnitlObjectHitGround(100.0, -9.8) << " seccond\n";
//    bool found = false;
//    assert(found && "Car could not be found in database");
    
    return 0;
}
