/**
 * test.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * Contains functions for testing classes in the project. 
 */

#include "Graphics.h"
#include "Circle.h"
#include "Color.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"

#include <iostream>
#include <fstream>

using namespace std;


void test_Circle();
void test_Color();
void test_Line();
void test_Point();
void test_Rectangle();
void test_Triangle();
void file_check();


void startTests() {
    test_Point();
    test_Color();
    test_Line();
    
    // call other test functions here
    file_check();
    
    return;
}

void test_Point() {
    // test of default constructor
    Point p1;
    cout << "Expected: (0,0), actual: " << p1 << endl;
    
    // test of the non-default constructor
    Point p2(3, 9);
    cout << "Expected: (3,9), actual: " << p2 << endl;

    // test of member function: setX()
    p1.setX(5);
    // test of member function: setY()
    p1.setY(3);

    // test of member functions getX() and getY()
    cout << "Expected: (5,3), actual: ";
    cout << "( " << p1.getX()
         << ", " << p1.getY()
         << " )" << endl;
    
    return;
}

void test_Color(){
    cout << "Now testing Color" << endl;
    Color color;
    cout << "Expected: 000 000 000, Actual: " << color << endl;
    
    Color color2(255, 150, 000);
    cout << "Expected: 255 150 000, Actual: " << color2 << endl;

    Color color3;
    color3.setRed(100);
    color3.setGreen(000);
    color3.setBlue(200);
    
    cout << "Expected: (100 000 200), Actual: " << color3.getRed() << " " << color3.getGreen() << " " << color3.getBlue() << endl;
}

void test_Line(){
    cout << "Now testing Line" << endl;
    Line pt1;
    Line pt2;
    Color color1;
    cout << "Expected (0,0) (0,0) 0 0 0, Actual: " << pt1 << " " << pt2 << " " << color1 << endl;
    
    Point pt3(13, 56);
    Point pt4(93, 37);
    Color color2(155, 150, 100);
    cout << "Expected (13, 56) (93, 37) 155 150 100, Actual: " << pt3 << " " << pt4 << " " << color2 << endl;
    
    Line line;
    Point pt5;
    line.setStart(pt5);
    pt5.setX(45);
    pt5.setY(56);
    Point pt6;
    line.setEnd(pt6);
    pt6.setX(23);
    pt6.setY(87);
    Color color3 (255, 150, 000);
    line.setColor(color3);
    cout << "Expected (45, 56) (23, 87) 255 150 100, Actual: " << pt5 << " " << pt6 << " " << color3 << endl;
}

void file_check() {

    // open one of the text files that are part of the starter code
    ifstream ins;
    ins.open("data1.txt");

    // if the file was not in the correct directory, the stream state is fail
    if (ins.fail()) {
        cout << "Could not open data1.txt" << endl;
    }
    else {
        cout << "Success! Text files are in the right directory." << endl;
    }
    ins.close();
    
    return;
}
