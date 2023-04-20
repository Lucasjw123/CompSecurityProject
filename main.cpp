// File : main.cpp
// Class: COP 3003, Fall 2022
// Devl : Lucas Wilkerson
// Desc : Final Project, Shapes Calculator
//---------------------------------------------------------


// What was changed for Computer Security
// There is no class definition for the Line, Rectangle, and Circle classes, 
// so it's impossible to determine what methods and variables they contain.

// 1. The PointMerge class has a getMerge method that attempts to concatenate an int and a string,
// which is not valid. This would result in a compilation error.

// 2. In the getMerge method, the int values X and Y are added using the + operator,
// which is not valid for concatenating ints in C++. Instead, you should convert them to strings first using std::to_string.

// 3. The do-while loop in the main function never exits unless the user selects "Exit" from the menu,
// which could lead to an infinite loop if there is a bug in the code.

// 4. The printCheckLine, printCheckRectangle, and printCheckCircle variables are declared but never used.

// 5. The Circle class constructor takes three arguments, but the input prompt only asks for two points.
// It's not clear what the second and third arguments correspond to.

// 6. There are some typos and syntax errors, such as missing semicolons at the end of lines.

// 7. The cmath library is included, but none of its functions are used in the code.

// 8. The VectorOfPoints class doesn't contain any member functions, so it's unclear what its purpose is.


//Includes and Defines
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Line {
public:
    int a, b, c, d;
    Line() {}
    void LineCalculor(int a, int b, int c, int d) {}
    double LineSlopeReturn() { return 0; }
    double LineAngleReturn() { return 0; }
    double LineLengthReturn() { return 0; }
};

class Rectangle {
public:
    int a, b, c, d;
    Rectangle() {}
    void RectangleCalculator(int a, int b, int c, int d) {}
    double RectangleWidth() { return 0; }
    double RectangleLength() { return 0; }
    double RectangleCalculationPointX() { return 0; }
    double RectangleCalculationPointY() { return 0; }
    double RectangleCalculationPointXPlusW() { return 0; }
    double RectangleCalculationPointYPlusL() { return 0; }
};

class Circle {
public:
    int a, b, c;
    Circle() {}
    void CircleCalculator(int a, int b, int c) {}
    double CircleCircumferenceReturn() { return 0; }
    double CircleAreaReturn() { return 0; }
};

class VectorOfPoints {
public:
    vector<string> myvector;
};

class PointMerge {
private:
    int X, Y;

public:
    PointMerge() : X(0), Y(0) {}
    void setPoint(int a, int b) {
        X = a;
        Y = b;
    }
    int getX() { return X; }
    int getY() { return Y; }
    string getMerge() {
        ostringstream oss;
        oss << X << "," << Y;
        return oss.str();
    }
};

int main()
{
    Line lineObj;
    Rectangle recObj;
    Circle circleObj;
    VectorOfPoints vectorObj;
    PointMerge pointObj;
    char input;

    do {
        cout << "\nEnter
