#include "sky.hpp"
void Sky ::AddStar(const Star & s)
{
    stars.push_back(s);
}

void Sky ::render() const
{
const int screenWidth = 800;
const int screenHeight = 600;
InitWindow(screenWidth, screenHeight, "Star Chart");
SetTargetFPS(60);
while (!WindowShouldClose())
{
BeginDrawing();
ClearBackground(BLACK);
// each star is a dot
for (const auto &star : stars)
{
DrawCircle(star.GetX(), star.GetY(), star.GetBrightness(), star.GetColor());
}
EndDrawing();
}
CloseWindow();
}

void Sky ::printStars()
{
    for(auto &c : stars)
    {
        c.DisplayStar();
    }
}