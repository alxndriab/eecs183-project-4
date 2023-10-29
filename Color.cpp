/**
 * Color.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#Description#>
 */

#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.

Color::Color() {
   // to do - implement
}

Color::Color(int redVal, int greenVal, int blueVal) {
   // to do - implement
}

void Color::setRed(int redVal) {
   red = checkRange(redVal);
}

int Color::getRed() {
   return red;
}

void Color::setGreen(int greenVal) {
   green = checkRange(greenVal);
}

int Color::getGreen() {
   return green;
}

void Color::setBlue(int blueVal) {
   blue = checkRange(blueVal);
}

int Color::getBlue() {
   return blue;
}

void Color::read(istream& ins) {
   // to do - implement
}

void Color::write(ostream& outs) {
   // to do - implement
}

int Color::checkRange(int val) {
    // to do - implement

    // to do - replace with correct return statement
    return val;
}

// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}
