#ifndef STAR_H
#define STAR_H
class Star{
    private:
    int x;
    int y;
    double brightness;
    
    public:
    
    Star(int , int , double );
    int GetX()const;
    int GetY() const;
    double GetBrightness() const;
    void DisplayStar();

};
#endif