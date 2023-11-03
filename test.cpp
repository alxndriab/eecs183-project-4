/**
 * test.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * Alexandria Balde and Teresa Billecke
 * abalde and tbilleck
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
    file_check();
    
    return;
}

void test_Point() {
    cout << endl << "Now testing Point" << endl;

    // test of default constructor
    Point p1;
    cout << "Expected: (0,0), Actual: " << p1 << endl;
    
    // test of the non-default constructor
    Point p2(3,9);
    cout << "Expected: (3,9), Actual: " << p2 << endl;

    // test of member function: setX()
    p1.setX(5);
    // test of member function: setY()
    p1.setY(3);

    // test of member functions getX() and getY()
    cout << "Expected: (5,3), Actual: ";
    cout << "(" << p1.getX()
         << "," << p1.getY()
         << ")" << endl;
    
    return;
}

void test_Color(){
    cout << endl << "Now testing Color" << endl;
    Color color;
    cout << "Expected: 0 0 0, Actual: " << color << endl;
    
    Color color2(255, 150, 0);
    cout << "Expected: 255 150 0, Actual: " << color2 << endl;

    Color color3;
    color3.setRed(100);
    color3.setGreen(0);
    color3.setBlue(200);
    
    cout << "Expected: (100 0 200), Actual: " << color3.getRed() << " " 
         << color3.getGreen() << " " << color3.getBlue() << endl;

    Color color4(50000, -100, 0);
    cout << "Expected: 255 150 0, Actual: " << color4 << endl;

}

void test_Line(){
    cout << endl << "Now testing Line" << endl;
    Point pt1;
    Point pt2;
    Color color1;
    Line line1(pt1, pt2, color1);
    cout << "Expected (0,0) (0,0) 0 0 0, Actual: " << line1 << endl;
    
    Point pt3(999, 56);
    Point pt4(93, -37);
    Color color2(155, 150, 100);
    Line line2(pt3, pt4, color2);
    cout << "Expected (99,56) (93,0) 155 150 100, Actual: " << line2 << endl;

    Point pt7(130, -56);
    Point pt8(93, 37);
    Color color5(-23, 150, 1000);
    Line newLine2(pt7, pt8, color5);
    cout << "Expected (99,0) (93,37) 0 150 255, Actual: " << newLine2 << endl;
    
    Line line3;
    Point pt5(45, 56);
    line3.setStart(pt5);
    Point pt6(23, 87);
    line3.setEnd(pt6);
    Color color3 (255, 150, 0);
    line3.setColor(color3);
    cout << "Expected (45, 56) (23, 87) 255 150 100, Actual: " << line3 << endl;

    Line line4;
    Point pt12(45, 56);
    line4.setStart(pt12);
    Point pt13(23, 87);
    line4.setEnd(pt13);
    Color color6 (255, 150, 100);
    line4.setColor(color6);
    cout << "Expected (45,56) (23,87) 255 150 100, Actual: " << line4.getStart() <<
    " " << line4.getEnd() << " " << line4.getColor() << endl;

    // writing a line to a file
    ofstream output_file;
    output_file.open("data2.txt");
    Point pt10(83, 14);
    Point pt11(90, 67);
    Color color4(0, 150, 255);
    Line line5(pt10, pt11, color4);
    pt10.write(output_file);
    cout << "Expected L (83,14) (90,67) 0 150 255, Actual: " << line5.getStart() <<
    " " << line5.getEnd() << " " << line5.getColor() << endl;
    output_file.close();
}

void test_Circle(){
    cout << endl << "Now testing Circle" << endl;
    
    Point pt;
    int r;
    Color c;
    Circle circle1(pt, r, c);
    cout << "Expected (0,0)  0   0 0 0, Actual: " << circle1 << endl;
    
    Point pt1(24, 87);
    int r1 = 12;
    Color c1(125, 400, 150);
    Circle circle2(pt1, r1, c1);
    cout << "Expected (24,87)  12   125 255 150, Actual: " << circle2 << endl;

    Point pt3(-123, 874);
    int r3 = -15;
    Color c4(125, 400, 150);
    Circle circle3(pt3, r3, c4);
    cout << "Expected (0,99)  15   125 255 150, Actual: " << circle3.getCenter() 
         << " " << circle3.getRadius() << " " << circle3.getColor() << endl;
    
    Point pt4(45, 32);
    Circle circle4;
    circle4.setCenter(pt4);
    int r4 = 17;
    circle4.setRadius(r4);
    Color c5(0, 125, 444);
    circle4.setColor(c5);
    cout << "Expected (45,32)  17   0 125 255, Actual: " << circle4.getCenter() 
         << " " << circle4.getRadius() << " " << circle4.getColor() << endl;

    Point pt6(1000, -5);
    int r6 = -23;
    Color c6(125, 400, -150);
    circle4.setCenter(pt6);
    circle4.setRadius(r6);
    circle4.setColor(c6);
    cout << "Expected (99,0)  23   125 255 0, Actual: " << circle4.getCenter() 
         << " " << circle4.getRadius() << " " << circle4.getColor() << endl;
}

void test_Rectangle(){
    cout << endl << "Now testing Rectangle" << endl;
    
    Point pt1;
    Point pt2;
    Color color;
    Rectangle rect1(pt1, pt2, color);
    cout << "Expected (0,0) (0,0)  0 0 0, Actual: " << rect1 << endl;
    
    Point pt3(12, 3);
    Point pt4(-45, 1000);
    Color color1(125, 0, 255);
    rect1.setStart(pt3);
    rect1.setEnd(pt3);
    rect1.setColor(color1);
    cout << "Expected (12,3) (0,99)  125 0 255, Actual: " << rect1.getStart() 
         << " " << rect1.getEnd() << " " << rect1.getColorTopLeft() << endl;

    Point pt9(12, 3);
    Point pt10(45, 67);
    Color color7(125, 0, 255);
    Rectangle rect2(pt9, pt10, color7);
    cout << "Expected (12,3) (45,67)  125 0 255, Actual: " << rect2 << endl;
    
    Point pt11(12, 3);
    Point pt12(45, 67);
    Color colorTL(125, 0, 255);
    Color colorTR(234, 999, -123);
    Color colorBL(204, -78, 102);
    Color colorBR(266, 90, 35);
    Rectangle rect3(pt11, pt12, colorTL, colorTR, colorBL, colorBR);
    cout << "Expected (12,3) (45,67)  125 0 255  234 255 0   204 0 102   "
         << "255 90 35, Actual: " << rect3.getStart() << " " << rect3.getEnd() 
         << " " << rect3.getColorTopLeft() << "  " << rect3.getColorTopRight() 
         << "  " << rect3.getColorBottomLeft() << "  " << rect3.getColorBottomRight();
    
    Point pt5(54, 13);
    Point pt6(56, 34);
    Rectangle rect4;
    Color color2(234, 999, -123);
    rect4.setStart(pt5);
    rect4.setEnd(pt6);
    rect4.setColor(color2);
    cout << "Expected (54,13) (56,34)  234 255 0, Actual: " << rect4 << endl;
    
    Point pt7(1, 3);
    Point pt8(45, 17);
    Color color3(204, -100, 102);
    Color color4(0, 123, 25);
    Color color5(105, 10, 235);
    Color color6(266, 90, 35);
    Rectangle rect5;
    rect5.setStart(pt7);
    rect5.setEnd(pt8);
    rect5.setColorTopLeft(color3);
    rect5.setColorTopRight(color4);
    rect5.setColorBottomRight(color5);
    rect5.setColorBottomLeft(color6);
    cout << "Expected (1,3) (45,17)  204 0 102  105 10 235  0 123 25"
         << "255 90 35, Actual: " << rect5.getStart() << " " << rect5.getEnd() << "  " 
         << rect5.getColorTopLeft() << "   " << rect5.getColorTopRight() << "   " 
         << rect5.getColorBottomRight() << "   " << rect5.getColorTopRight() << endl;
        
    Point pt14(1, 3);
    Point pt15(45, 17);
    Color color11(204, -78, 102);
    Color color8(0, 123, 25);
    Color color9(105, 10, 235);
    Color color10(266, 90, 35);
    Rectangle rect6(pt14, pt15, color11, color8, color9, color10);
    rect6.setStart(pt14);
    rect6.setEnd(pt15);
    rect6.setColorTopLeft(color11);
    rect6.setColorTopRight(color8);
    rect6.setColorBottomRight(color9);
    rect6.setColorBottomLeft(color10);
    cout << "Expected (1,3) (45,17)  204 0 102  0 123 25  105 10 235  255 90 35"
         << "90 35, Actual: " << rect6.getStart() << " " << rect6.getEnd() << "  " 
         << rect6.getColorTopLeft() << "   " << rect6.getColorTopRight() << "   " 
         << rect6.getColorBottomRight() << "   " << rect6.getColorTopRight() << endl;
    
    cout << endl;
}

void test_Triangle(){
    cout << endl << "Now testing Triangle" << endl;
    Point pt1;
    Point pt2;
    Point pt3;
    Color color1;
    Triangle tri1(pt1, pt2, pt3, color1);
    cout << "Expected (0,0) (0,0) (0,0)  0 0 0, Actual: " << tri1 << endl;
    
    Point pt4(12, 43);
    Point pt5(9, 32);
    Point pt6(-12, 799);
    Color color2(125, 0, 125);
    Triangle tri2(pt4, pt5, pt6, color2);
    cout << "Expected (12,43) (9,32) (0,99)  125 0 125, Actual: " 
         << tri2.getVertexOne() << " " << tri2.getVertexTwo() 
         << " " << tri2.getVertexThree() << " " << tri2.getVertexOneColor() 
         << " " << tri2.getVertexTwoColor() << " " << tri2.getVertexThree();

    
    // writing a triangle to a file
    ofstream output_file;
    output_file.open("data3.txt");
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
    cout << "Expected (12,43) (9,32) (0,99)  125 0 125, Actual: " << t << endl;
    t.write(output_file);
    output_file.close();
     
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
