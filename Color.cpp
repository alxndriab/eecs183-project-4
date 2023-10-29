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
const int COLOR_MAX = 255;

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.

int Color::checkRange(int val){
    if ((val >= 0) && (val < COLOR_MAX)){
        return val;
    }
    else{
        if(val < 0){
            return 0;
        }
        else{
            return (COLOR_MAX);
        }
    }
}

Color::Color(){
    red = 0;
    green = 0;
    blue = 0;
}

Color::Color(int redVal, int greenVal, int blueVal){
    checkRange(redVal);
    checkRange(greenVal);
    checkRange(blueVal);
    //i'm not sure if this needs anything else
}

void Color::setRed(int redVal){
    red = checkRange(redVal);
}

int Color::getRed(){
    return red;
}

void Color::setGreen(int greenVal){
    green = checkRange(greenVal);
}

int Color::getGreen(){
    return green;
}

void Color::setBlue(int blueVal){
    blue = checkRange(blueVal);
}

int Color::getBlue(){
    return blue;
}

void Color::read(istream& ins){
    ins >>  red >> green >> blue;
    red = checkRange(red);
    green = checkRange(green);
    blue = checkRange(blue);
    return;
}

void Color::write(ostream& outs){
    outs << red << " " << green << " " << blue;
    red = checkRange(red);
    green = checkRange(green);
    blue = checkRange(blue);
    outs << endl;
    return;
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
