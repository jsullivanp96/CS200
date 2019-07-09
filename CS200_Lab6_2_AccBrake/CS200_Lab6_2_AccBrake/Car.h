//
//  Car.h
//  CS200_Lab6_2_AccBrake
//
//  Created by Jessie Sully on 7/6/19.
//  Copyright © 2019 Jessie Sully. All rights reserved.
//

#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

/*
 -----------------------
 Car
 -----------------------
 - mMake: string
 - mYear : unsigned int
 - mSpeed : unsigned int
 -----------------------
 + Car()
 + setMake(m : string) : void
 + getMake() : string
 + setYear(y : unsigned int) : void
 + getYear() : unsigned int
 + setSpeed(s : unsigned int) : void
 + getSpeed() : unsigned int
 + accelerate() : void
 + writeStatus(ss : stringstream) : void
 ----------------------
 */

class Car {
  
private:
  string mMake;
  unsigned int mYear = 0;
  double mSpeed = 0;
  
public:
  Car(string m, unsigned int y);
  
  void setMake (string make)       { mMake = make; }
  void setYear (unsigned int year) { mYear = year; }
  void setSpeed(unsigned int speed) { mSpeed = speed; }
  
  string getMake() const        { return mMake; }
  unsigned int getYear() const  { return mYear; }
  unsigned int getSpeed() const { return mSpeed; }
  
  void accelerate()             { mSpeed += 5; }
  void brake()                  { mSpeed = mSpeed - 5 >= 0 ? mSpeed - 5 : 0; }
  
  void writeStatus(stringstream &output);
  
};

#endif /* CAR_H */

