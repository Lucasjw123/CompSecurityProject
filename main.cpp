// File : main.cpp
// Class: COP 3003, Fall 2022
// Devl : Lucas Wilkerson
// Desc : Final Project, Shapes Calculator
//---------------------------------------------------------


// What was changed for Computer Security:

// 1. There is no class definition for the Line, Rectangle, and Circle classes, 
// so it's impossible to determine what methods and variables they contain.

// 2. The PointMerge class has a getMerge method that attempts to concatenate an int and a string,
// which is not valid. This would result in a compilation error.

// 3. In the getMerge method, the int values X and Y are added using the + operator,
// which is not valid for concatenating ints in C++. Instead, you should convert them to strings first using std::to_string.

// 4. The do-while loop in the main function never exits unless the user selects "Exit" from the menu,
// which could lead to an infinite loop if there is a bug in the code.

// 5. The printCheckLine, printCheckRectangle, and printCheckCircle variables are declared but never used.

// 6. The Circle class constructor takes three arguments, but the input prompt only asks for two points.
// It's not clear what the second and third arguments correspond to.

// 7. There are some typos and syntax errors, such as missing semicolons at the end of lines.

// 8. The cmath library is included, but none of its functions are used in the code.

// 9. The VectorOfPoints class doesn't contain any member functions, so it's unclear what its purpose is.

// it is important to note that code quality issues can indirectly impact security. 
// Poorly written code can contain vulnerabilities that can be exploited by attackers.


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
        cout << "\nEnter an option (l for line, r for rectangle, c for circle, v for vector of points, m for merging points): ";
        cin >> input;

        switch (input) {
            case 'l': {
                int a, b, c, d;
                cout << "Enter values for line (a, b, c, d): ";
                cin >> a >> b >> c >> d;
                lineObj.LineCalculor(a, b, c, d);
                cout << "Slope: " << lineObj.LineSlopeReturn() << endl;
                cout << "Angle: " << lineObj.LineAngleReturn() << endl;
                cout << "Length: " << lineObj.LineLengthReturn() << endl;
                break;
            }
            case 'r': {
                int a, b, c, d;
                cout << "Enter values for rectangle (a, b, c, d): ";
                cin >> a >> b >> c >> d;
                recObj.RectangleCalculator(a, b, c, d);
                cout << "Width: " << recObj.RectangleWidth() << endl;
                cout << "Length: " << recObj.RectangleLength() << endl;
                cout << "Top left point: (" << recObj.RectangleCalculationPointX() << ", " << recObj.RectangleCalculationPointY() << ")" << endl;
                cout << "Bottom right point: (" << recObj.RectangleCalculationPointXPlusW() << ", " << recObj.RectangleCalculationPointYPlusL() << ")" << endl;
                break;
            }
            case 'c': {
                int a, b, c;
                cout << "Enter values for circle (a, b, c): ";
                cin >> a >> b >> c;
                circleObj.CircleCalculator(a, b, c);
                cout << "Circumference: " << circleObj.CircleCircumferenceReturn() << endl;
                cout << "Area: " << circleObj.CircleAreaReturn() << endl;
                break;
            }
            case 'v': {
                int n;
                cout << "Enter number of points to add to vector: ";
                cin >> n;
                cout << "Enter points (x, y) separated by space or newline:" << endl;
                for (int i = 0; i < n; i++) {
                    int x, y;
                    cin >> x >> y;
                    pointObj.setPoint(x, y);
                    vectorObj.myvector.push_back(pointObj.getMerge());
                }
                break;
            }
            case 'm': {
                int x, y;
                cout << "Enter two points to merge (x1, y1) (x2, y2): ";
                cin >> x >> y;
                PointMerge p1, p2;
                p1.setPoint(x, y);
                cin >> x >> y;
                p2.setPoint(x, y);
                cout << "Merged point: (" << p1.getX() + p2.getX() << ", " << p1.getY() + p2.getY() << ")" << endl;
                break;
            }
            default:
                cout << "Invalid input. Please try again." << endl;
                break;
        }
    } while (input != 'q');

    return 0;
}
    
