#include <GL/glut.h>
#include "draw.h"
#include <iostream>

void renderScene();

void processKeys(unsigned char key, int x, int y);

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Spacecraft game");
    glutDisplayFunc(renderScene);
    glutKeyboardFunc(processKeys);
    glutMainLoop();
    return 0;
}

void renderScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    Figure f={{0,0},100};
    //f.pos.x=0;
    //f.pos.y=0;
    backgroundStars();
    meteor1();
    meteor2();
    spaceStation();
    spaceCraft(SpaceCraft_info);
    collisionBump(SpaceCraft_info);
    drawHealthBar();
    glutSwapBuffers();
}

void processKeys(unsigned char key, int x, int y){
    if(SpaceCraft_info.health>0){
        if(key=='d'){
            SpaceCraft_info.pos.x+=0.02; //move left
        }
        if(key=='a'){
            SpaceCraft_info.pos.x-=0.02; //move right
        }
        if(key=='w'){
            SpaceCraft_info.pos.y+=0.02; //move up
        }
        if(key=='s'){
            SpaceCraft_info.pos.y-=0.02; //move down
        }
        if(key==27){
            exit(0);
        }
    }
    glutPostRedisplay();
}
