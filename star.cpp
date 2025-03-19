#include "star.hpp"
#include <stdexcept>
#include <iostream>

Star :: Star(int X , int Y , double b)
{
    if(X < 0 || X > 800 || Y < 0 || Y > 600 || brightness <=0)
    {
        throw std :: invalid_argument("out of the bound of the sky point or invalid brightness");
    }
    this->x = X;
    this->y = Y;
    this->brightness = b;

}

int    Star ::GetX()const {return x;}
int    Star :: GetY() const {return y;}
double Star ::GetBrightness() const {return brightness;}

void Star :: DisplayStar (int x , int y , int b)
{
    std :: cout << "Star at ("<<x <<','<<y<<") with brightness : "<<b<<'\n';

}