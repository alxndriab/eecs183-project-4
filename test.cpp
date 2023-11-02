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
    test_Circle();
    test_Triangle();
    test_Rectangle();
    
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

void test_Circle(){
    cout << "Now testing Circle" << endl;
    
    Point pt;
    int r = 0;
    Color c;
    cout << "Expected (0,0)  0  0 0 0, Actual: " << pt << "  " << r << "  " << c << endl;
    
    Point pt1(24, 87);
    int r1 = 12;
    Color c1(125, 400, 150);
    cout << "Expected (24,87)  12   125 255 150, Actual: " << pt1 << "  " << r1 << "  " << c1 << endl;
    
    Point pt2;
    Circle circle;
    circle.setCenter(pt2);
    pt2.setX(45);
    pt2.setY(32);
    int r2 = 17;
    circle.setRadius(r2);
    Color c3(0, 125, 444);
    circle.setColor(c3);
    cout << "Expected (45,32)  17   0 125 255, Actual: " << pt2 << "  " << r2 << "  " << c3 << endl << endl;
}

void test_Rectangle(){
    cout << "Now testing Rectangle" << endl;
    
    Point pt1;
    Point pt2;
    Color color;
    cout << "Expected (0,0) (0,0)  0 0 0, Actual: " << pt1 << "  " << pt2 << "  " << color << endl;
    
    Point pt3(12, 3);
    Point pt4(45, 67);
    Color color1(125, 0, 255);
    cout << "Expected (12,3) (45,67)  125 0 255, Actual: " << pt3 << "  " << pt4 << "  " << color1 << endl;
    
    Point pt5;
    Point pt6;
    Rectangle rectangle;
    Color color2(234, 999, -123);
    pt5.setX(54);
    pt5.setY(13);
    rectangle.setStart(pt5);
    pt6.setX(56);
    pt6.setY(34);
    rectangle.setEnd(pt6);
    rectangle.setColor(color2);
    cout << "Expected (54,13) (56,34)  234 255 0, Actual: " << pt5 << "  " << pt6 << "  " << color2 << endl;
    
    Point pt7(1, 3);
    Point pt8(45, 17);
    Color color3(204, 0, 102);
    Color color4(0, 123, 25);
    Color color5(105, 10, 235);
    Color color6(266, 90, 35);
    cout << "Expected (1,3) (45,17)  204 0 102  0 123 25  105 10 235  266 90 35, Actual: " << pt7 << "  " << pt8 << "  " << color3 << "  " << color4 << "  " << color5 << "  " << color6 << endl;
    
    cout << endl;
}

void test_Triangle(){
    cout << "Now testing Triangle";
    Point pt1;
    Point pt2;
    Point pt3;
    Color color1;
    cout << "Expected (0,0) (0,0) (0,0)  0 0 0, Actual: " << pt1 << "  " << pt2 << "  " << pt3 << "  " << color1 << endl;
    
    Point pt4(12, 43);
    Point pt5(9, 32);
    Point pt6(-12, 799);
    Color color2(125, 0, 125);
    cout << "Expected (12,43) (9,32) (0,99)  125 0 125, Actual: " << pt4 << "  " << pt5 << "  " << pt6 << "  " << color2 << endl;
    
    Point pt7;
    Point pt8;
    Point pt9;
    Color color3(120, 50, 255);
    Triangle t;
    pt7.setX(3);
    pt7.setY(4);
    pt8.setX(23);
    pt8.setY(45);
    pt9.setX(44);
    pt9.setY(67);
    t.setVertexOne(pt7);
    t.setVertexTwo(pt8);
    t.setVertexThree(pt9);
    t.setColor(color3);
    cout << "Expected (12,43) (9,32) (0,99)  125 0 125, Actual: " << pt4 << "  " << pt5 << "  " << pt6 << "  " << color2 << endl;
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
