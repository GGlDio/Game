#ifndef DRAW_H
#define DRAW_H

#include <GL/glut.h>

struct Position{
    GLfloat x,y;
};

struct Figure{
    Position pos;
    GLfloat health;
};

extern Figure SpaceCraft_info;

void backgroundStars();
void spaceCraft(Figure f);
void meteor1();
void meteor2();
void spaceStation();
void drawGameWin();
void drawGameOver();
void collisionBump(Figure f);
void drawHealthBar();

#endif // DRAW_H
