// File : Line.h
// Class: COP 3003, Fall 2022
// Devl : Lucas Wilkerson
// Desc : Final Project, Shapes Calculator, Line Header
//---------------------------------------------------------
#include <cmath>
#ifndef SHAPES_LINE_H
#define SHAPES_LINE_H

//Class that deals with all Line-related values
class Line {
private:

    float slope, angle, lineLength;
public:
    Line() {slope = 0; angle = 0; lineLength = 0;} //Declaring default values

    int a, b, c, d;

    //Setter
    void LineCalculor(int x1Line, int y1Line, int x2Line, int y2Line)
    {
        slope = ((y2Line - y1Line)/(x2Line - x1Line));
        angle = (atan(((y2Line - y1Line)/(x2Line - x1Line)))) * (180/M_PI);
        lineLength = sqrt(pow((x2Line - x1Line),2) + pow((y2Line - y1Line),2));
    }
    //Getter
    float LineSlopeReturn(void)
    {
        return slope;
    }
    //Setter
    void LineAngle(int x1Line, int y1Line, int x2Line, int y2Line)
    {
        angle = atan(((y2Line - y1Line)/(x2Line - x1Line)));
    }
    //Getter
    float LineAngleReturn(void)
    {
        return angle;
    }
    //Setter
    float LineLength(int x1Line, int y1Line, int x2Line, int y2Line)
    {
        lineLength = sqrt(pow((x2Line - x1Line),2) + pow((y2Line - y1Line),2));
    }
    //Getter
    float LineLengthReturn(void)
    {
        return lineLength;
    }

};


#endif //SHAPES_LINE_H
