// CIS 279 Point ADT using a class Example
// Client File:  Point.cpp
// Date:  9/5/16

#include <iostream>
using namespace std;
#include "point.h"

int main()
{
    Point p1;
    
    p1.set( 3, 4 );
    cout << "Point p1             = ";
    p1.display( );
    cout << endl;
    cout << "The magnitude of p1  = "
         << p1.getMagnitude( ) << endl;
    
    return 0;
}

/*-----------OUTPUT -------------
Point p1             = (3,4)
The magnitude of p1  = 5
Press any key to continue . . .
--------------------------------*/