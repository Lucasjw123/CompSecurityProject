// File : Rectangle.h
// Class: COP 3003, Fall 2022
// Devl : Lucas Wilkerson
// Desc : Final Project, Shapes Calculator, Rectangle Header
//---------------------------------------------------------
#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H

//Class that deals with all Rectangle-related values
class Rectangle {
private:
   int Area, Perimeter, x1PlusWidth, y1PlusLength, x1Rectangle, y1Rectangle, length, width;

public:
    Rectangle() {Area = 0; Perimeter = 0; x1PlusWidth = 0; y1PlusLength = 0;}

    int a, b, c, d;
    //Setter
    void RectangleCalculator(int x1Rect, int y1Rect, int functionlength, int functionwidth)
    {
        x1Rectangle = x1Rect;
        y1Rectangle = y1Rect;
        x1PlusWidth = (x1Rect + functionwidth);
        y1PlusLength = (y1Rect + functionlength);
        Area = functionlength * functionwidth;
        Perimeter = (2 * functionlength) + (2 * functionwidth);
        width = functionwidth;
        length = functionlength;
    }
    //Getter
    float RectangleCalculationPointXPlusW(void)
    {
        return x1PlusWidth;

    }
    //Getter
    float RectangleCalculationPointX(void)
    {
        return x1Rectangle;
    }
    //Getter
    float RectangleCalculationPointY(void)
    {
        return y1Rectangle;
    }
    //Getter
    float RectangleCalculationPointYPlusL(void)
    {
        return y1PlusLength;
    }
    //Getter
    float RectangleArea(void)
    {
        return Area;
    }
    //Getter
    float RectanglePerimeter(void)
    {
        return Perimeter;
    }
    //Getter
    float RectangleLength(void)
    {
        return length;
    }
    //Getter
    float RectangleWidth(void)
    {
        return width;
    }

};


#endif //SHAPES_RECTANGLE_H
