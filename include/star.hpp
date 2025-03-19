#ifndef STAR_H
#define STAR_H
#include <raylib.h>
class Star{
    private:
    int x;
    int y;
    double brightness;
    Color color;


    public:
    
    Star(int , int , double, Color color = WHITE );
    int GetX()const;
    int GetY() const;
    double GetBrightness() const;
    Color   GetColor() const; 
    void DisplayStar();

};
#endif