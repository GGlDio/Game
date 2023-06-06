#include <GL/glut.h>
#include "draw.h"

Figure SpaceCraft_info={{0,0},100};

void backgroundStars(){
    glBegin(GL_POINTS);
    glColor3ub(255,255,255);
    glVertex2f(-0.225,-0.2);
    glVertex2f(0.2,0.625);
    glVertex2f(0.5,0.65);
    glVertex2f(0.325,0.15);
    glVertex2f(0.85,-0.65);
    glVertex2f(0.425,0.1);
    glVertex2f(0.675,0.15);
    glVertex2f(-0.525,-0.375);
    glVertex2f(-0.6,-1.025);
    glVertex2f(-0.425,0.15);
    glVertex2f(0.925,-0.25);
    glVertex2f(-0.575,-0.1);
    glVertex2f(-0.5,0.8);
    glVertex2f(0,-0.9);
    glVertex2f(-0.95,-0.85);
    glVertex2f(-0.2,-0.075);
    glVertex2f(-0.425,-0.65);
    glVertex2f(0.025,-1);
    glVertex2f(0.125,0.825);
    glVertex2f(-0.275,0.775);
    glVertex2f(0.3,-1.025);
    glVertex2f(-0.775,0.375);
    glVertex2f(0.625,-0.15);
    glVertex2f(-0.975,0.1);
    glVertex2f(0.95,-0.55);
    glVertex2f(0.6,-1.175);
    glVertex2f(0.8,-0.25);
    glVertex2f(0.925,0.025);
    glVertex2f(1.025,-0.55);
    glVertex2f(-0.975,-0.025);
    glVertex2f(-1.15,0.7);
    glVertex2f(0.85,-0.225);
    glVertex2f(0.075,0.375);
    glVertex2f(0.825,0.075);
    glVertex2f(-1.05,0.975);
    glVertex2f(-0.975,-1.225);
    glVertex2f(1.075,-1.125);
    glVertex2f(0.75,-0.575);
    glVertex2f(-1.125,1.125);
    glVertex2f(0.175,-0.95);
    glVertex2f(0.9,0.825);
    glVertex2f(-1.075,-0.425);
    glVertex2f(0.475,-0.35);
    glVertex2f(0.325,-0.6);
    glVertex2f(-1.05,-0.3);
    glVertex2f(0.35,0.825);
    glVertex2f(-0.05,-0.3);
    glVertex2f(0.6,0.2);
    glVertex2f(0.775,0.4);
    glVertex2f(0.15,0.425);
    glVertex2f(-1.125,1.2);
    glVertex2f(-0.05,-0.05);
    glVertex2f(0.75,-0.55);
    glVertex2f(-0.925,-0.825);
    glVertex2f(-1.175,-0.625);
    glVertex2f(0.35,-0.625);
    glVertex2f(-0.65,-1.225);
    glVertex2f(1.05,0.4);
    glVertex2f(0.85,1.025);
    glVertex2f(0.75,-1.225);
    glVertex2f(-0.9,-0.075);
    glVertex2f(1.175,-0.85);
    glVertex2f(-0.225,-1.1);
    glVertex2f(-1.225,-0.275);
    glVertex2f(-1.025,-1);
    glVertex2f(1,-0.55);
    glVertex2f(-1.1,-1.175);
    glVertex2f(1.15,-0.2);
    glVertex2f(-0.85,-0.275);
    glVertex2f(0.425,-0.7);
    glVertex2f(1.1,0.5);
    glVertex2f(-0.975,0.075);
    glVertex2f(-0.675,0.925);
    glVertex2f(0.575,0.525);
    glVertex2f(0.65,-0.725);
    glVertex2f(-0.125,-0.875);
    glVertex2f(0.125,-0.975);
    glVertex2f(-0.775,1.175);
    glVertex2f(-0.525,0.675);
    glVertex2f(-0.45,0.525);
    glVertex2f(-0.8,-0.525);
    glVertex2f(0.025,-0.45);
    glVertex2f(0.95,-1.075);
    glVertex2f(0.175,0.85);
    glVertex2f(0.55,-0.025);
    glVertex2f(-0.35,0.9);
    glVertex2f(0.75,0.025);
    glVertex2f(0.2,-0.95);
    glVertex2f(0,-0.35);
    glVertex2f(-0.975,-0.375);
    glVertex2f(-0.975,0.125);
    glVertex2f(0.8,1.175);
    glVertex2f(-0.425,-0.375);
    glVertex2f(0.85,0.175);
    glVertex2f(-1,0.25);
    glVertex2f(1.025,0.2);
    glVertex2f(-0.375,-1.075);
    glVertex2f(-0.625,0.15);
    glVertex2f(-0.2,-0.4);
    glVertex2f(-0.075,0.175);

    glEnd();
    glPopMatrix();
}

void spaceCraft(Figure f){
    glPushMatrix();
    glTranslated(-0.8,-0.8,0);
    glTranslated(f.pos.x,f.pos.y,0);
    glScalef(0.1,0.1,0);
    //ЛЕВАЯ СТОРОНА (ЧТО-ТО ВРОДЕ КРЫЛЬЕВ)
    glBegin(GL_TRIANGLES);
    glColor3ub(220,220,220);
    glVertex2f(0,0.88);
    glVertex2f(-0.2,0.8);
    glVertex2f(0,0.8);

    glColor3ub(220,220,220);
    glVertex2f(-0.2,0.8);
    glVertex2f(-0.2,0.4);
    glVertex2f(-0.4,0.4);

    glColor3ub(220,220,220);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.6,-0.6);

    glColor3ub(220,220,220);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.6,-0.6);
    glVertex2f(-0.6,-0.9);

    glColor3ub(220,220,220);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.6,-0.9);
    glVertex2f(-0.4,-0.9);

    //ПРАВАЯ СТОРОНА (ЧТО-ТО ВРОДЕ КРЫЛЬЕВ)
    glColor3ub(220,220,220);
    glVertex2f(0,0.88);
    glVertex2f(0.2,0.8);
    glVertex2f(0,0.8);

    glColor3ub(220,220,220);
    glVertex2f(0.2,0.8);
    glVertex2f(0.2,0.4);
    glVertex2f(0.4,0.4);

    glColor3ub(220,220,220);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.4,-0.6);
    glVertex2f(0.6,-0.6);

    glColor3ub(220,220,220);
    glVertex2f(0.4,-0.6);
    glVertex2f(0.6,-0.6);
    glVertex2f(0.6,-0.9);

    glColor3ub(220,220,220);
    glVertex2f(0.4,-0.6);
    glVertex2f(0.6,-0.9);
    glVertex2f(0.4,-0.9);

    //ВЕРХНЯЯ ЧАСТЬ КОРПУСА
    glColor3ub(211,211,211);
    glVertex2f(-0.2,0.8);
    glVertex2f(0.2,0.8);
    glVertex2f(0.2,0.4);

    glColor3ub(211,211,211);
    glVertex2f(-0.2,0.8);
    glVertex2f(0.2,0.4);
    glVertex2f(-0.2,0.4);

    glColor3ub(211,211,211);
    glVertex2f(-0.2,0.4);
    glVertex2f(-0.15,-0.17);
    glVertex2f(0.15,-0.17);

    glColor3ub(211,211,211);
    glVertex2f(-0.2,0.4);
    glVertex2f(0.2,0.4);
    glVertex2f(0.15,-0.17);

    glColor3ub(105,105,105);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.2,0.4);
    glVertex2f(-0.14,-0.2);

    glColor3ub(105,105,105);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.14,-0.2);

    glColor3ub(105,105,105);
    glVertex2f(0.4,0.4);
    glVertex2f(0.2,0.4);
    glVertex2f(0.14,-0.2);

    glColor3ub(105,105,105);
    glVertex2f(0.4,0.4);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.14,-0.2);

    glColor3ub(105,105,105);
    glVertex2f(0.15,-0.17);
    glVertex2f(0.14,-0.2);
    glVertex2f(-0.15,-0.17);

    glColor3ub(105,105,105);
    glVertex2f(-0.14,-0.2);
    glVertex2f(-0.15,-0.17);
    glVertex2f(0.14,-0.2);

    glColor3ub(192,192,192);
    glVertex2f(-0.06,0.75);
    glVertex2f(0.06,0.75);
    glVertex2f(0.06,0.55);

    glColor3ub(192,192,192);
    glVertex2f(0.06,0.55);
    glVertex2f(-0.06,0.55);
    glVertex2f(-0.06,0.75);

    glColor3ub(211,211,211);
    glVertex2f(0.06,0.65);
    glVertex2f(0.06,0.66);
    glVertex2f(0.05,0.66);

    //НИЖНЯЯ ЧАСТЬ КОРПУСА
    glColor3ub(211,211,211);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.4,-0.8);
    glVertex2f(-0.05,-0.8);

    glColor3ub(211,211,211);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.05,-0.8);
    glVertex2f(-0.05,-0.2);

    glColor3ub(211,211,211);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.4,-0.8);
    glVertex2f(0.05,-0.8);

    glColor3ub(211,211,211);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.05,-0.8);
    glVertex2f(0.05,-0.2);

    glColor3ub(128,128,128);
    glVertex2f(-0.05,-0.2);
    glVertex2f(0.05,-0.2);
    glVertex2f(0.05,-0.8);

    glColor3ub(128,128,128);
    glVertex2f(-0.05,-0.2);
    glVertex2f(-0.05,-0.8);
    glVertex2f(0.05,-0.8);

    //СТЫКОВОЧНЫЙ МОДУЛЬ
    glColor3ub(169,169,169);
    glVertex2f(-0.17,-0.8);
    glVertex2f(-0.17,-0.85);
    glVertex2f(0.17,-0.85);

    glColor3ub(169,169,169);
    glVertex2f(0.17,-0.85);
    glVertex2f(0.17,-0.8);
    glVertex2f(-0.17,-0.8);

    glEnd();
    glPopMatrix();
}

void spaceStation(){
    glPushMatrix();
    glTranslated(0.8,-0.2,0);
    glScaled(0.3,0.3,0);
    //СЕРДЦЕВИНА СТАНЦИИ

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.15,0.4);
    glVertex2f(0.15,0.4);
    glVertex2f(0.15,-0.2);
    glVertex2f(-0.15,-0.2);

    glColor3ub(255,255,255);
    glVertex2f(-0.15,-0.2);
    glVertex2f(-0.06,-0.5);
    glVertex2f(0.06,-0.5);
    glVertex2f(0.15,-0.2);

    glColor3ub(255,255,255);
    glVertex2f(0.06,-0.5);
    glVertex2f(-0.06,-0.5);
    glVertex2f(-0.3,-0.7);
    glVertex2f(0.3,-0.7);

    glColor3ub(255,255,255);
    glVertex2f(0.06,-0.7);
    glVertex2f(-0.06,-0.7);
    glVertex2f(-0.01,-0.8);
    glVertex2f(0.01,-0.8);

    glColor3ub(169,169,169);
    glVertex2f(-0.3,-0.7);
    glVertex2f(-0.3,-0.72);
    glVertex2f(0.3,-0.72);
    glVertex2f(0.3,-0.7);

    glColor3ub(169,169,169);
    glVertex2f(0.06,-0.49);
    glVertex2f(0.06,-0.51);
    glVertex2f(-0.06,-0.51);
    glVertex2f(-0.06,-0.49);

    glColor3ub(169,169,169);
    glVertex2f(0.06,-0.5);
    glVertex2f(0.04,-0.5);
    glVertex2f(0.28,-0.7);
    glVertex2f(0.3,-0.7);

    glColor3ub(169,169,169);
    glVertex2f(0.04,-0.5);
    glVertex2f(0.02,-0.5);
    glVertex2f(0.2,-0.7);
    glVertex2f(0.18,-0.7);

    glColor3ub(169,169,169);
    glVertex2f(0.02,-0.5);
    glVertex2f(0,-0.5);
    glVertex2f(0.1,-0.7);
    glVertex2f(0.08,-0.7);

    glColor3ub(169,169,169);
    glVertex2f(0.008,-0.5);
    glVertex2f(-0.008,-0.5);
    glVertex2f(-0.008,-0.7);
    glVertex2f(0.008,-0.7);

    glColor3ub(169,169,169);
    glVertex2f(-0.06,-0.5);
    glVertex2f(-0.04,-0.5);
    glVertex2f(-0.28,-0.7);
    glVertex2f(-0.3,-0.7);

    glColor3ub(169,169,169);
    glVertex2f(-0.04,-0.5);
    glVertex2f(-0.02,-0.5);
    glVertex2f(-0.2,-0.7);
    glVertex2f(-0.18,-0.7);

    glColor3ub(169,169,169);
    glVertex2f(-0.02,-0.5);
    glVertex2f(-0,-0.5);
    glVertex2f(-0.1,-0.7);
    glVertex2f(-0.08,-0.7);

    glColor3ub(255, 222, 173);
    glVertex2f(-0.1,0.4);
    glVertex2f(0.1,0.4);
    glVertex2f(0.1,0.43);
    glVertex2f(-0.1,0.43);

    glColor3ub(169,169,169);
    glVertex2f(-0.05,0.3);
    glVertex2f(0.05,0.3);
    glVertex2f(0.05,0.1);
    glVertex2f(-0.05,0.1);

    glColor3ub(169,169,169);
    glVertex2f(-0.15,-0.2);
    glVertex2f(-0.15,-0.18);
    glVertex2f(0.15,-0.18);
    glVertex2f(0.15,-0.2);

    glColor3ub(169,169,169);
    glVertex2f(0.15,0.4);
    glVertex2f(0.13,0.4);
    glVertex2f(0.13,-0.2);
    glVertex2f(0.15,-0.2);

    glColor3ub(169,169,169);
    glVertex2f(-0.15,0.4);
    glVertex2f(-0.13,0.4);
    glVertex2f(-0.13,-0.2);
    glVertex2f(-0.15,-0.2);

    glColor3ub(169,169,169);
    glVertex2f(-0.15,0.4);
    glVertex2f(-0.15,0.38);
    glVertex2f(0.15,0.38);
    glVertex2f(0.15,0.4);

    glColor3ub(169,169,169);
    glVertex2f(0.15,-0.2);
    glVertex2f(0.13,-0.2);
    glVertex2f(0.06,-0.5);
    glVertex2f(0.04,-0.5);

    glColor3ub(169,169,169);
    glVertex2f(-0.15,-0.2);
    glVertex2f(-0.13,-0.2);
    glVertex2f(-0.06,-0.5);
    glVertex2f(-0.04,-0.5);

    //СОЛНЕЧНЫЕ ПАНЕЛИ

    //ПРАВАЯ ПАНЕЛЬ
    glColor3ub(255, 255, 255);
    glVertex2f(0.15,-0.06);
    glVertex2f(0.15,0.06);
    glVertex2f(0.25,0.06);
    glVertex2f(0.25,-0.06);

    glColor3ub(127, 255, 212);
    glVertex2f(0.25,0.18);
    glVertex2f(0.25,-0.18);
    glVertex2f(1,-0.18);
    glVertex2f(1,0.18);

    glColor3ub(211, 211, 211);
    glVertex2f(0.25,-0.18);
    glVertex2f(0.25,-0.14);
    glVertex2f(1,-0.14);
    glVertex2f(1,-0.18);

    glColor3ub(211,211,211);
    glVertex2f(0.25,0.18);
    glVertex2f(0.25,0.14);
    glVertex2f(1,0.14);
    glVertex2f(1,0.18);

    glColor3ub(211,211,211);
    glVertex2f(0.25,0.18);
    glVertex2f(0.25,-0.18);
    glVertex2f(0.29,-0.18);
    glVertex2f(0.29,0.18);

    glColor3ub(211,211,211);
    glVertex2f(1,0.18);
    glVertex2f(1,-0.18);
    glVertex2f(0.96,-0.18);
    glVertex2f(0.96,0.18);

    glColor3ub(211,211,211);
    glVertex2f(0.76,0.18);
    glVertex2f(0.72,0.18);
    glVertex2f(0.72,-0.18);
    glVertex2f(0.76,-0.18);

    glColor3ub(211,211,211);
    glVertex2f(0.48,0.18);
    glVertex2f(0.52,0.18);
    glVertex2f(0.52,-0.18);
    glVertex2f(0.48,-0.18);

    glColor3ub(211,211,211);
    glVertex2f(0.25,0.02);
    glVertex2f(1,0.02);
    glVertex2f(1,-0.02);
    glVertex2f(0.25,-0.02);

    //ЛЕВАЯ ПАНЕЛЬ

    glColor3ub(255, 255, 255);
    glVertex2f(-0.15,-0.06);
    glVertex2f(-0.15,0.06);
    glVertex2f(-0.25,0.06);
    glVertex2f(-0.25,-0.06);

    glColor3ub(127, 255, 212);
    glVertex2f(-0.25,0.18);
    glVertex2f(-0.25,-0.18);
    glVertex2f(-1,-0.18);
    glVertex2f(-1,0.18);

    glColor3ub(211, 211, 211);
    glVertex2f(-0.25,-0.18);
    glVertex2f(-0.25,-0.14);
    glVertex2f(-1,-0.14);
    glVertex2f(-1,-0.18);

    glColor3ub(211,211,211);
    glVertex2f(-0.25,0.18);
    glVertex2f(-0.25,0.14);
    glVertex2f(-1,0.14);
    glVertex2f(-1,0.18);

    glColor3ub(211,211,211);
    glVertex2f(-0.25,0.18);
    glVertex2f(-0.25,-0.18);
    glVertex2f(-0.29,-0.18);
    glVertex2f(-0.29,0.18);

    glColor3ub(211,211,211);
    glVertex2f(-1,0.18);
    glVertex2f(-1,-0.18);
    glVertex2f(-0.96,-0.18);
    glVertex2f(-0.96,0.18);

    glColor3ub(211,211,211);
    glVertex2f(-0.76,0.18);
    glVertex2f(-0.72,0.18);
    glVertex2f(-0.72,-0.18);
    glVertex2f(-0.76,-0.18);

    glColor3ub(211,211,211);
    glVertex2f(-0.48,0.18);
    glVertex2f(-0.52,0.18);
    glVertex2f(-0.52,-0.18);
    glVertex2f(-0.48,-0.18);

    glColor3ub(211,211,211);
    glVertex2f(-0.25,0.02);
    glVertex2f(-1,0.02);
    glVertex2f(-1,-0.02);
    glVertex2f(-0.25,-0.02);

    glEnd();
    glPopMatrix();
}

void meteor1(){
    glPushMatrix();

    glTranslated(-0.2,-0.4,0);
    glScalef(0.2,0.2,0);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(205,133,63);
    glVertex2f(0,0.2);
    glVertex2f(0.24,0.08);
    glVertex2f(0.35,-0.12);
    glVertex2f(0.15,-0.3);
    glVertex2f(-0.2,-0.05);
    glVertex2f(-0.18,0.16);

    glEnd();
    glPopMatrix();
}

void meteor2(){
    glPushMatrix();

    glTranslated(0.2,0.2,0);
    glScalef(0.3,0.3,0.3);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(205,133,63);
    glVertex2f(-0.32,0.12);
    glVertex2f(-0.17,0.21);
    glVertex2f(0.15,0.21);
    glVertex2f(0.28,-0.08);
    glVertex2f(0.18,-0.23);
    glVertex2f(-0.16,-0.16);

    glEnd();
    glPopMatrix();
}

void drawGameWin(){
    glPushMatrix();

    glBegin(GL_LINES);
    glColor3ub(0, 255, 0);

    //Y
    glVertex2f(-0.6,0.8);
    glVertex2f(-0.5,0.5);

    glVertex2f(-0.4,0.8);
    glVertex2f(-0.5,0.5);

    glVertex2f(-0.5,0.5);
    glVertex2f(-0.5,0.2);

    //O
    glVertex2f(-0.1,0.2);
    glVertex2f(-0.1,0.8);

    glVertex2f(-0.1,0.2);
    glVertex2f(0.1,0.2);

    glVertex2f(0.1,0.8);
    glVertex2f(-0.1,0.8);

    glVertex2f(0.1,0.2);
    glVertex2f(0.1,0.8);

    //U
    glVertex2f(0.4,0.8);
    glVertex2f(0.4,0.2);

    glVertex2f(0.4,0.2);
    glVertex2f(0.6,0.2);

    glVertex2f(0.6,0.2);
    glVertex2f(0.6,0.8);

    //W
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.6,-0.8);

    glVertex2f(-0.6,-0.8);
    glVertex2f(-0.5,-0.2);

    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.4,-0.8);

    glVertex2f(-0.4,-0.8);
    glVertex2f(-0.3,-0.2);

    //I
    glVertex2f(0,-0.2);
    glVertex2f(0,-0.8);

    glVertex2f(-0.05,-0.2);
    glVertex2f(0.05,-0.2);

    glVertex2f(-0.05,-0.8);
    glVertex2f(0.05,-0.8);

    //N
    glVertex2f(0.4,-0.8);
    glVertex2f(0.4,-0.2);

    glVertex2f(0.4,-0.2);
    glVertex2f(0.6,-0.8);

    glVertex2f(0.6,-0.8);
    glVertex2f(0.6,-0.2);

    glEnd();

    glPopMatrix();
}

void drawGameOver(){
    glPushMatrix();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);

    //G
    glVertex2f(-0.5,0.7);
    glVertex2f(-0.5,0.8);

    glVertex2f(-0.5,0.8);
    glVertex2f(-0.8,0.8);

    glVertex2f(-0.8,0.8);
    glVertex2f(-0.8,0.2);

    glVertex2f(-0.8,0.2);
    glVertex2f(-0.5,0.2);

    glVertex2f(-0.5,0.2);
    glVertex2f(-0.5,0.4);

    glVertex2f(-0.5,0.4);
    glVertex2f(-0.62,0.4);

    //A
    glVertex2f(-0.3,0.2);
    glVertex2f(-0.2,0.8);

    glVertex2f(-0.2,0.8);
    glVertex2f(-0.1,0.2);

    glVertex2f(-0.26,0.4);
    glVertex2f(-0.14,0.4);

    //M
    glVertex2f(0.1,0.2);
    glVertex2f(0.2,0.8);

    glVertex2f(0.2,0.8);
    glVertex2f(0.3,0.4);

    glVertex2f(0.3,0.4);
    glVertex2f(0.4,0.8);

    glVertex2f(0.4,0.8);
    glVertex2f(0.5,0.2);

    //E
    glVertex2f(0.8,0.2);
    glVertex2f(0.6,0.2);

    glVertex2f(0.6,0.2);
    glVertex2f(0.6,0.8);

    glVertex2f(0.6,0.8);
    glVertex2f(0.8,0.8);

    glVertex2f(0.6,0.5);
    glVertex2f(0.8,0.5);

    //O
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.5,-0.2);

    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.5,-0.8);

    glVertex2f(-0.5,-0.8);
    glVertex2f(-0.7,-0.8);

    glVertex2f(-0.7,-0.8);
    glVertex2f(-0.7,-0.2);

    //V
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.2,-0.8);

    glVertex2f(-0.2,-0.8);
    glVertex2f(-0.1,-0.2);

    //E
    glVertex2f(0.3,-0.2);
    glVertex2f(0.1,-0.2);

    glVertex2f(0.1,-0.2);
    glVertex2f(0.1,-0.8);

    glVertex2f(0.1,-0.8);
    glVertex2f(0.3,-0.8);

    glVertex2f(0.1,-0.5);
    glVertex2f(0.3,-0.5);

    //R
    glVertex2f(0.5,-0.8);
    glVertex2f(0.5,-0.2);

    glVertex2f(0.5,-0.2);
    glVertex2f(0.7,-0.2);

    glVertex2f(0.7,-0.2);
    glVertex2f(0.7,-0.5);

    glVertex2f(0.7,-0.5);
    glVertex2f(0.5,-0.5);

    glVertex2f(0.5,-0.5);
    glVertex2f(0.7,-0.8);

    glEnd();

    glPopMatrix();
}

void drawHealthBar(){
    glPushMatrix();

    glTranslated(-0.884,-0.96,0);
    glTranslated(SpaceCraft_info.pos.x, SpaceCraft_info.pos.y, 0);
    glScaled(0.2,0.2,0.2);

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);

    glVertex2f(0,0.2);
    glVertex2f(0.8,0.2);
    glVertex2f(0.8,0.25);
    glVertex2f(0,0.25);

    glColor3ub(0,255,0);

    glVertex2f(0,0.2);
    glVertex2f(SpaceCraft_info.health*0.008,0.2);
    glVertex2f(SpaceCraft_info.health*0.008,0.25);
    glVertex2f(0,0.25);

    glEnd();

    glPopMatrix();
}

