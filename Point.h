// CIS 279 Point ADT using a class Example
// Point ADT to represent a point in the x-y plane
// Implemented using a C++ class (object-oriented implementation)
// Header File:  Point.h
// Date:  9/5/16

class Point
{
    
   public:
      // operations
      
      // Assign new value to a Point
      void set( float newX, float newY );

      // Display a Point
      void display( ) const;

      // Get the magnitude of a Point (distance from point (0,0))
      float getMagnitude( ) const;

   private:
      //data 
      float x;
      float y;
};

