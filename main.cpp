// File : main.cpp
// Class: COP 3003, Fall 2022
// Devl : Lucas Wilkerson
// Desc : Final Project, Shapes Calculator
//---------------------------------------------------------

//Includes and Defines
#include <iostream>
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include <vector>
#include <cmath>
#define _USE_MATH_DEFINES
#include <string>
//----------------------------------------------------------

//Class that merges and stores values in a vector
class VectorOfPoints{ 
protected:

public:

    std::vector<std::string> myvector;

};

class PointMerge{
private:
    int X, Y;

public:
    //defualt constructor
    PointMerge() {X=0; Y=0;}

    //setter function
    void setPoint(int a, int b)
    {
        X = a;
        Y = b;
    }
    //getter functions
    int getX(void)
    {
        return X;
    }
    int getY(void)
    {
        return Y;
    }

    std::string getMerge(void)
    {
        std::string c;
        c = X + Y;
        return c;
    }
};
//----------------------------------------------------------


int main()
{

    
//Constructors
    Line lineObj;
    Rectangle recObj;
    Circle circleObj;
    VectorOfPoints vectorObj;
    PointMerge pointObj;
//----------------------------------------------------------   
//Variables
char input;
bool printCheckLine, printCheckRectangle, printCheckCircle;
//----------------------------------------------------------

//do loop repeats unless user selects exit on the menu
    do{ 
        std::cout << " " << std::endl;
        std::cout << "Enter 1st Character: \n Line"
        "\n Rectangle \n Circle \n Print"
        "\n Exit \n" << std::endl;
        std::cin >> input;

        switch(input){ //Big switch for different shapes
            case 'l':
            //Line Inputs
                std::cout << "Please enter your first point: " << std::endl;
                std::cin >> lineObj.a >> lineObj.b;
                std::cout << "Please enter your second point: " << std::endl;
                std::cin >> lineObj.c >> lineObj.d;
                lineObj.LineCalculor(lineObj.a, lineObj.b, lineObj.c, lineObj.d);
            //Line Outputs
                std::cout << "Slope: " << lineObj.LineSlopeReturn() << std::endl;
                std::cout << "Angle: " << lineObj.LineAngleReturn() << std::endl;
                std::cout << "Length: " << lineObj.LineLengthReturn() << " Degrees" << std::endl;

                pointObj.setPoint(lineObj.a, lineObj.b);
                //Puts the x and y value into a function that merges the values
                vectorObj.myvector.push_back(pointObj.getMerge());
                //Takes the merged value and stores it in an infinite array
                pointObj.setPoint(lineObj.c, lineObj.d);
                vectorObj.myvector.push_back((pointObj.getMerge()));
                //Do the same thing for the second set of points
                
                printCheckLine = true; //If this case is selected it will print
                
                





                break;

            case 'r': 
            //Rectangle Inputs
                std::cout << "Please enter the bottom left point: " << std::endl;
                std::cin >> recObj.a >> recObj.b;
                std::cout << "Please enter the width and lenght: " << std::endl;
                std::cin >> recObj.c >> recObj.d;
                recObj.RectangleCalculator(recObj.a, recObj.b, recObj.c, recObj.d);
            //Rectangle Outputs
                std::cout << "Width: " << recObj.RectangleWidth() << std::endl;
                std::cout << "Length: " << recObj.RectangleLength() << std::endl;
                std::cout << "Points: " << "{ (" << recObj.RectangleCalculationPointX() <<
                ", " << recObj.RectangleCalculationPointY() << ") (" << recObj.RectangleCalculationPointXPlusW()
                << ", " << recObj.RectangleCalculationPointY() << ") (" << recObj.RectangleCalculationPointX()
                << ", " << recObj.RectangleCalculationPointYPlusL() << ") (" << recObj.RectangleCalculationPointXPlusW()
                << ", " << recObj.RectangleCalculationPointYPlusL() << ") }" << std::endl;

                pointObj.setPoint(recObj.RectangleCalculationPointX(), recObj.RectangleCalculationPointY());
                vectorObj.myvector.push_back(pointObj.getMerge()); //Pushes Back First Point

                pointObj.setPoint(recObj.RectangleCalculationPointXPlusW(), recObj.RectangleCalculationPointY());
                vectorObj.myvector.push_back(pointObj.getMerge()); //Pushes Back Second Point

                pointObj.setPoint(recObj.RectangleCalculationPointX(),recObj.RectangleCalculationPointYPlusL());
                vectorObj.myvector.push_back(pointObj.getMerge()); //Pushes Back Third Point

                pointObj.setPoint(recObj.RectangleCalculationPointXPlusW(), recObj.RectangleCalculationPointYPlusL());
                vectorObj.myvector.push_back((pointObj.getMerge())); //Pushes Back Fourth Point

                printCheckRectangle = true; //If this case is selected it will print



                break;

            case 'c':
            //Circle Inputs
                std::cout << "Please enter the center of the circle: " << std::endl;
                std::cin >> circleObj.b >> circleObj.c;
                std::cout << "Please enter the radius of the circle: " << std::endl;
                std::cin >> circleObj.a;
                circleObj.CircleCalculator(circleObj.a, circleObj.b, circleObj.c);
            //Circle Outputs
                std::cout << "Diameter: " << circleObj.CircleCalculationDiameter() << std::endl;
                std::cout << "Circumference: " << circleObj.CircleCalculationCircum() << std::endl;
                std::cout << "Area: " << circleObj.CircleCalculationArea() << std::endl;

                pointObj.setPoint(circleObj.b, circleObj.c);
                vectorObj.myvector.push_back(pointObj.getMerge()); //Pushes center point into vector


                printCheckCircle = true; //If this case is selected it will print




                break;

            case 'p':
            //Print out all infromation, if it was enabled by bool value
                if(printCheckLine){
                    std::cout << " " << std::endl;
                std::cout << "LINE OUTPUT: " << std::endl;
                std::cout << " " << std::endl;
                std::cout << "Slope: " << lineObj.LineSlopeReturn() << std::endl;
                std::cout << "Angle: " << lineObj.LineAngleReturn() << std::endl;
                std::cout << "Length: " << lineObj.LineLengthReturn() << std::endl;
                
                }
                else{
                    
                }
                
                if(printCheckRectangle){
                    std::cout << " " << std::endl;
                std::cout << "RECTANGLE OUTPUT: " << std::endl;
                std::cout << " " << std::endl;
                std::cout << "Width: " << recObj.RectangleWidth() << std::endl;
                std::cout << "Length: " << recObj.RectangleLength() << std::endl;
                std::cout << "Points: " << "{ (" << recObj.RectangleCalculationPointX() <<
                          ", " << recObj.RectangleCalculationPointY() << ") (" << recObj.RectangleCalculationPointXPlusW()
                          << ", " << recObj.RectangleCalculationPointY() << ") (" << recObj.RectangleCalculationPointX()
                          << ", " << recObj.RectangleCalculationPointYPlusL() << ") (" << recObj.RectangleCalculationPointXPlusW()
                          << ", " << recObj.RectangleCalculationPointYPlusL() << ") }" << std::endl;
                }
                else{
                    
                }
                
                if(printCheckCircle){
                    std::cout << " " << std::endl;
                std::cout << "CIRCLE OUTPUT: " << std::endl;
                std::cout << " " << std::endl;
                std::cout << "Diameter: " << circleObj.CircleCalculationDiameter() << std::endl;
                std::cout << "Circumference: " << circleObj.CircleCalculationCircum() << std::endl;
                std::cout << "Area: " << circleObj.CircleCalculationArea() << std::endl;
                }
                else{
                    
                }
                //Print out the number of points collected
                std::cout << " " << std::endl;
                std::cout << "NUMBER OF POINTS IN VECOTR: " << vectorObj.myvector.size();
                std::cout << " " << std::endl;

                break;

            case 'e':

                break;
        }

    }while(input != 'e');


}