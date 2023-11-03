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
    
     Point pt1;
    pt1.setX(15);
    cout << "Expected: (15,0), actual : (" << pt1.getX() << "," << pt1.getY() << ")" << endl;
    
    Point pt2;
    pt2.setY(87);
    cout << "Expected: (0,87), actual : (" << pt2.getX() << "," << pt2.getY() << ")" << endl;
    
    Point pt5;
    pt5.setX(-20);
    pt5.setY(187);
    cout << "Expected: (0,99), actual : (" << pt5.getX() << "," << pt5.getY() << ")" << endl;
    
    Point pt6;
    pt6.setX(20);
    pt6.setY(18);
    cout << "Expected: (20,18), actual : (" << pt6.getX() << "," << pt6.getY() << ")" << endl;
    
    Point pt7;
    cout << "Expected: (0,0), actual : (" << pt7.getX() << "," << pt7.getY() << ")" << endl;
        
    ifstream input_file;
    input_file.open("data1.txt");
    Point pt3;
    Point pt4;
    Point pt8;
    pt3.read(input_file);
    cout << "Expected: (42,7), actual : " << pt3;
    pt4.read(input_file);
    cout << "Expected: (50,0), actual : " << pt4;
    pt8.read(input_file);
    cout << "Expected: (99,0), actual : " << pt8;
    
    ofstream output_file;
    output_file.open("data2.txt");
    Point pt9;
    pt9.setX(23);
    pt9.setY(74);
    pt9.write(output_file);
    cout << "Expected: (23,74), actual : " << pt9;
    Point pt10;
    pt10.setX(-23);
    pt10.setY(734);
    pt10.write(output_file);
    cout << "Expected: (0,99), actual : " << pt10;
    
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
    
    cout << "Expected: (100 000 200), Actual: " << color3.getRed() << " " 
         << color3.getGreen() << " " << color3.getBlue() << endl;

    Color color4(254, 1, 000);
    cout << "Expected: 254 1 0, Actual: " << color4 << endl;

    Color color5(10000, -1243, 254);
    cout << "Expected: 255 0 254, Actual: " << color5 << endl;

    Color color6(50000, -100, 0);
    cout << "Expected: 255 150 000, Actual: " << color6 << endl;

}

void test_Line(){
    cout << endl << "Now testing Line" << endl;
    Point pt1;
    Point pt2;
    Color color1;
    Line newLine;(pt1, pt2, color1);
    cout << "Expected (0,0) (0,0) 0 0 0, Actual: " << newLine << endl;
    
    Point pt3(999, 56);
    Point pt4(93, -37);
    Color color2(155, 150, 100);
    Line newLine2(pt3, pt4, color2);
    cout << "Expected (99, 56) (93, 0) 155 150 100, Actual: " << newLine2 << endl;

    Point pt7(130, -56);
    Point pt8(93, 37);
    Color color5(-23, 150, 1000);
    Line line2(pt7, pt8, color5);
    cout << "Expected (99,0) (93,37) 0 150 255, Actual: " << line2 << endl;
    
    Point pt10(83, 14);
    Point pt11(90, 67);
    Color color4(0, 150, 255);
    Line line1(pt10, pt11, color4);
    cout << "Expected L (83,14) (90,67) 0 150 255, Actual: " << line1 << endl;
    
    Line line;
    Point pt5;
    pt5.setX(45);
    pt5.setY(56);
    line.setStart(pt5);
    Point pt6;
    pt6.setX(23);
    pt6.setY(87);
    line.setEnd(pt6);
    Color color3 (255, 150, 0);
    line.setColor(color3);
    cout << "Expected (45, 56) (23, 87) 255 150 100, Actual: " << pt5 << " " 
         << pt6 << " " << color3 << endl;

    Line line3;
    Point pt12(45, 56);
    line.setStart(pt12);
    Point pt13(23, 87);
    line.setEnd(pt13);
    Color color6 (255, 150, 100);
    line.setColor(color6);
    cout << "Expected (45,56) (23,87) 255 150 100, Actual: " << line3.getStart() <<
    " " << line3.getEnd() << " " << line3.getColor() << endl << endl;
}

void test_Circle(){
    cout << endl << "Now testing Circle" << endl;
    
    Point pt;
    int r;
    Color c;
    cout << "Expected (0,0)  0   0 0 0, Actual: " << pt << "  " << r << "  " 
         << c << endl;
    
    Point pt1(24, 87);
    int r1 = 12;
    Color c1(125, 400, 150);
    cout << "Expected (24,87)  12   125 255 150, Actual: " << pt1 << "  " 
         << r1 << "  " << c1 << endl;

    Point pt3(-123, 874);
    int r3 = -15;
    Color c4(125, 400, 150);
    Circle circle1(pt3, r3, c4);
    cout << "Expected (0,99)  15   125 255 150, Actual: " << circle1 << endl;
    
    Point pt2;
    Circle circle;
    circle.setCenter(pt2);
    pt2.setX(45);
    pt2.setY(32);
    int r2 = 17;
    circle.setRadius(r2);
    Color c3(0, 125, 444);
    circle.setColor(c3);
    cout << "Expected (45,32)  17   0 125 255, Actual: " << pt2 << "  " 
         << r2 << "  " << c3 << endl << endl;

     Point pt4(1000, -5);
    int r4 = -23;
    Color c5(125, 400, -150);
    circle.setCenter(pt4);
    circle.setRadius(r4);
    circle.setColor(c5);
    cout << "Expected (99,0)  23   125 255 0, Actual: " << pt4
    << "  " << r4 << "  " << c5 << endl << endl;
}

void test_Rectangle(){
    cout << endl << "Now testing Rectangle" << endl;
    
    Point pt1;
    Point pt2;
    Color color;
    cout << "Expected (0,0) (0,0)  0 0 0, Actual: " << pt1 << "  " << pt2 
         << "  " << color << endl;
    
    Point pt3(12, 3);
    Point pt4(45, 67);
    Color color1(125, 0, 255);
    cout << "Expected (12,3) (45,67)  125 0 255, Actual: " << pt3 << "  " 
         << pt4 << "  " << color1 << endl;

    Point pt9(12, 3);
    Point pt10(45, 67);
    Color color7(125, 0, 255);
    Rectangle rectangle1(pt9, pt10, color7);
    cout << "Expected (12,3) (45,67)  125 0 255, Actual: " << rectangle1 << endl;
    
    Point pt11(12, 3);
    Point pt12(45, 67);
    Color colorTL(125, 0, 255);
    Color colorTR(234, 999, -123);
    Color colorBL(204, -78, 102);
    Color colorBR(266, 90, 35);
    Rectangle rectangle2(pt11, pt12, colorTL, colorTR, colorBL, colorBR);
    cout << "Expected (12,3) (45,67)  125 0 255  234 255 0   204 0 102   255 90 35, Actual: " << rectangle2 << endl;
    
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
    cout << "Expected (54,13) (56,34)  234 255 0, Actual: " << pt5 << "  " 
         << pt6 << "  " << color2 << endl;
    
    Point pt7(1, 3);
    Point pt8(45, 17);
    Color color3(204, -100, 102);
    Color color4(0, 123, 25);
    Color color5(105, 10, 235);
    Color color6(266, 90, 35);
    cout << "Expected (1,3) (45,17)  204 0 102  0 123 25  105 10 235  "
         << "255 90 35, Actual: " << pt7 << "  " << pt8 << "  " << color3 
         << "  " << color4 << "  " << color5 << "  " << color6 << endl;
        
    Point pt14(1, 3);
    Point pt15(45, 17);
    Color color11(204, -78, 102);
    Color color8(0, 123, 25);
    Color color9(105, 10, 235);
    Color color10(266, 90, 35);
    Rectangle r2(pt14, pt15, color11, color8, color9, color10);
    r2.setStart(pt14);
    r2.setEnd(pt15);
    r2.setColorTopLeft(color11);
    r2.setColorTopRight(color8);
    r2.setColorBottomRight(color9);
    r2.setColorBottomLeft(color10);
    cout << "Expected (1,3) (45,17)  204 0 102  0 123 25  105 10 235  255"
    "90 35, Actual: " << r2.getStart() << " " << r2.getEnd() << "  " << r2.getColorTopLeft() << "   " <<
    r2.getColorTopRight() << "   " << r2.getColorBottomRight() << "   " << r2.getColorTopRight() << endl;
    
    cout << endl;
}

void test_Triangle(){
    cout << endl << "Now testing Triangle" << endl;
    Point pt1;
    Point pt2;
    Point pt3;
    Color color1;
    cout << "Expected (0,0) (0,0) (0,0)  0 0 0, Actual: " << pt1 << "  " 
         << pt2 << "  " << pt3 << "  " << color1 << endl;
    
    Point pt4(12, 43);
    Point pt5(9, 32);
    Point pt6(-12, 799);
    Color color2(125, 0, 125);
    cout << "Expected (12,43) (9,32) (0,99)  125 0 125, Actual: " << pt4 
         << "  " << pt5 << "  " << pt6 << "  " << color2 << endl;

    
    // reading triangles from file
    ifstream ins;
    ins.open("sample.txt");
    Line junkLine;
    Triangle t1;
    Triangle t2;
    junkLine.read(ins);
    t1.read(ins);
    t2.read(ins);
    cout << t1 << endl << t2 << endl;
    ins.close();
    
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
    cout << "Expected (12,43) (9,32) (0,99)  125 0 125, Actual: " << pt4 
         << "  " << pt5 << "  " << pt6 << "  " << color2 << endl << endl;

     Point pt7;
    Point pt8;
    Point pt9;
    Color color3(120, 50, 255);
    Color color9(120, 50, 255);
    Color color8(120, 50, 255);
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
    t.setVertexOneColor(color3);
    t.setVertexTwoColor(color9);
    t.setVertexThreeColor(color8);
    cout << "Expected (3,4)   120 50 255  (23,45)   120 50 255  (44,67)   120 50 255, Actual: " << t.getVertexOne() << "   " <<  t.getVertexOneColor() << "  " << t.getVertexTwo() << "   " << t.getVertexTwoColor() << "  " << t.getVertexThree() << endl << endl;
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
