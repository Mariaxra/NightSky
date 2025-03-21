#include <iostream>
#include "sky.hpp"
using namespace std;
int main()
{
    Sky night;
    night.AddStar(Star(100 , 150 , 2.5 , YELLOW));
    night.AddStar(Star(0 , 0 , 3 , WHITE));
    night.AddStar(Star(170 , 300 , 30 , YELLOW));
    night.AddStar(Star(36 , 300 , 3 , BLUE));
    night.AddStar(Star(77 , 33 , 3 , RED));
    night.AddStar(Star(770 , 62 , 3 ));
    night.AddStar(Star(80 , 12 , 3));
    night.AddStar(Star(563 , 563 , 3));
    night.AddStar(Star(7 , 4 , 3));
    night.AddStar(Star(11 , 11 , 3));
    night.AddStar(Star(9 , 590 , 32 , PURPLE));
    night.AddStar(Star(71 , 89 , 3));
    night.AddStar(Star(47 , 445 , 3));
    night.AddStar(Star(38 , 336 , 25 , ORANGE));
    night.AddStar(Star(526 , 526 , 3));
    night.AddStar(Star(799 , 30 , 3));

  

    cout << "The stars:\n";
    night.printStars();
    night.render();
}