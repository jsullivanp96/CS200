/*
 Accelerating...
 Toyota | 1998 | 5
 Accelerating...
 Toyota | 1998 | 10
 Accelerating...
 Toyota | 1998 | 15
 Braking...
 Toyota | 1998 | 10
 Braking...
 Toyota | 1998 | 5
 Braking...
 Toyota | 1998 | 0
 Braking... Error: can't brake a car that's standing still.
 Toyota | 1998 | 0
 */
//  main.cpp
//  CS200_Lab6_2_AccBrake
//
//  Created by Jessie Sully on 7/6/19.
//  Copyright © 2019 Jessie Sully. All rights reserved.
//

#include <iostream>
#include "Car.h"

int main(int argc, const char * argv[]) {
    Car car = {"Toyota", 1998};
    stringstream output;
    
    cout << "Accelerating..." << endl;
    car.accelerate();
    car.writeStatus(output);
    cout << output.str() << endl;
    output.clear();
    output.str("");
    
    
    
    return 0;
}
 
void accelerate(Car &car) {
    stringstream output;
    
}

