// File : Circle.h
// Class: COP 3003, Fall 2022
// Devl : Lucas Wilkerson
// Desc : Final Project, Shapes Calculator, Circle Header
//---------------------------------------------------------
#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H

#include <cmath>

//Class that deals with all Circle-related values
class Circle {
private:
    int radius, diameter, circum, area, centerx, centery;
public:
    Circle() {radius = 0, diameter = 0, circum = 0, area = 0, centerx = 0, centery = 0; }

    int a, b, c;

    //Setter
    void CircleCalculator(int functionRadius, int circlex, int circley)
    {
        radius = functionRadius;
        centerx = circlex;
        centery = circley;
        diameter = (2 * functionRadius);
        circum = (M_PI * 2 * functionRadius);
        area = M_PI * pow(functionRadius, 2);

    }
    //Getter
    float CircleCalculationDiameter(void)
    {
        return diameter;
    }
    //Getter
    float CircleCalculationCircum(void)
    {
        return circum;
    }
    //Getter
    float CircleCalculationArea(void)
    {
        return area;
    }

};


#endif //SHAPES_CIRCLE_H
