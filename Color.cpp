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


int Color::checkRange(int val){
    if ((val >= 0) && (val < COLOR_MAX)){
        return val;
    }
    else{
        if(val < 0){
            return 0;
        }
        else {
            return COLOR_MAX - 1;
        }
    }
}

Color::Color(){
    red = 0;
    green = 0;
    blue = 0;
}

Color::Color(int redVal, int greenVal, int blueVal){
    red = checkRange(redVal);
    green = checkRange(greenVal);
    blue = checkRange(blueVal);
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
    int myRed;
    int myGreen;
    int myBlue;
    ins >>  myRed >> myGreen >> myBlue;
    
    setRed(myRed);
    setGreen(myGreen);
    setBlue(myBlue);
}

void Color::write(ostream& outs){
    outs << red << "  " << green << "  " << blue;
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
