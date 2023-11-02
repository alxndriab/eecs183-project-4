/**
 * Point.cpp
 *
 * EECS 183
 * Lab 7
 * Taken from Project 4: CoolPics
 *
 * Teresa Billecke
 * tbilleck
 *
 * <#Description#>
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write, checkRange.
Point::Point() {
    // TODO: Implement
    x = 0;
    y = 0;
}
    
Point::Point(int xVal, int yVal) {
    // TODO: Implement
    x = checkRange(xVal);
    y = checkRange(yVal);
}

void Point::setX(int xVal) {
    // TODO: Implement
    x = xVal;
    x = checkRange(x);
    return;
}

int Point::getX() {
    // TODO: Implement
    // FIXME: returning arbitrary value of 0 to avoid compile error
    return x;
}

void Point::setY(int yVal) {
    // TODO: Implement
    y = yVal;
    y = checkRange(y);
    return;
}
    
int Point::getY() {
    // TODO: Implement
    // FIXME: returning arbitrary value of 0 to avoid compile error
    return y;
}

void Point::read(istream& ins) {
    // TODO: Implement
    char trash;
    ins >> trash >> x >> trash >> y >> trash;
    x = checkRange(x);
    y = checkRange(y);
    return;
}

void Point::write(ostream& outs) {
    // TODO: Implement
    outs << '(' << x << ','<< y << ')';
    x = checkRange(x);
    y = checkRange(y);
    outs << endl;
    return;
}

int Point::checkRange(int val) {
    // TODO: Implement
    if ((val >= 0) && (val < DIMENSION)){
        return val;
    }
    else{
        if(val < 0){
            return 0;
        }
        else{
            return (DIMENSION-1);
        }
    }
    // FIXME: returning arbitrary value of 0 to avoid compile error
}


// Your code goes above this line!!!
// Don't change the implementations below!!!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}
