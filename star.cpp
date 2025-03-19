#include "star.hpp"
#include <stdexcept>
#include <iostream>

Star :: Star(int X , int Y , double b , Color c) : x(X) ,y(Y) , brightness(b) , color(c)
{
    if(X < 0 || X > 800 || Y < 0 || Y > 600 || brightness <=0)
    {
        throw std :: invalid_argument("out of the bound of the sky point or invalid brightness");
    }

}
int    Star ::GetX()const {return x;}
int    Star :: GetY() const {return y;}
double Star ::GetBrightness() const {return brightness;}
Color Star :: GetColor() const {return color;}

void Star :: DisplayStar ()
{
    std :: cout << "Star at ("<<x <<','<<y<<") with brightness : "<<brightness<<'\n';

}