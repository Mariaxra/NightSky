#ifndef SKY_H
#define SKY_H
#include <raylib.h>
#include "vector"
#include "star.hpp"

class Sky{
    private :
    std :: vector <Star> stars;

    public:
    void printStars();
    void AddStar(const Star &s);
    void render() const;


};
#endif