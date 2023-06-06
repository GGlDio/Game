#include <GL/glut.h>
#include "draw.h"
#include <iostream>


void collisionBump(Figure f){

    //Точка, до которой нужно долететь для победы
    if(((SpaceCraft_info.pos.x > 1.59) && (SpaceCraft_info.pos.x < 1.61)) && ((SpaceCraft_info.pos.y > 0.79) && (SpaceCraft_info.pos.y < 0.81))){
        drawGameWin();
    };

    //Столкновение с космической станцией
    if(((SpaceCraft_info.pos.x>1.24)&&(SpaceCraft_info.pos.y>0.46))&&((SpaceCraft_info.pos.y<0.76)&&(SpaceCraft_info.pos.x<2))){
        SpaceCraft_info.health-=20;
    }
    if(((SpaceCraft_info.pos.x>1.48)&&(SpaceCraft_info.pos.y>0.28))&&((SpaceCraft_info.pos.y<0.78)&&(SpaceCraft_info.pos.x<1.76))){
        SpaceCraft_info.health-=20;
    }

    //Столкновение с Метеоритом1
    if(((SpaceCraft_info.pos.x>0.5)&&(SpaceCraft_info.pos.y>0.26))&&((SpaceCraft_info.pos.y<0.54)&&(SpaceCraft_info.pos.x<0.72))){
        SpaceCraft_info.health-=20;
    }

    //Столкновение с Метеоритом2
    if(((SpaceCraft_info.pos.x>0.86)&&(SpaceCraft_info.pos.y>0.84))&&((SpaceCraft_info.pos.y<1.16)&&(SpaceCraft_info.pos.x<1.14))){
        SpaceCraft_info.health-=20;
    }

    //Поражение в игре, в случае, если кончились жизни (hp)
    if(SpaceCraft_info.health<=0){
        drawGameOver();
    }
}

void spacecraftHP(){
    if(SpaceCraft_info.health==100){

        drawHPgreen();
    }
    if(SpaceCraft_info.health==80){
        drawHPred();


    }
}
