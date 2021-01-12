// CIS 279 Point ADT using a class Example
// Implementation File:  Point.cpp
// Date:  9/5/16

#include <iostream>
#include <cmath>
using namespace std;
#include "Point.h"

// Assign a new value to a Point
void Point::set( float newX, float newY )
{
    x = newX;
    y = newY;
}

// Display a Point
void Point::display( ) const
{
    cout << '(' << x
         << ',' << y
         << ')';
}

// Get the magnitude of a Point (distance from point (0,0))
float Point::getMagnitude( ) const
{
    float result = sqrt( pow(x,2) + pow(y,2) );
    return result;
}

