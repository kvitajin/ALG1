#include <iostream>

int bludiste[10][10]=
        {{0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,1,0,0,0,0},
         {0,0,0,0,0,1,1,1,0,0},
         {0,0,0,0,0,1,0,1,1,1},
         {0,0,1,1,1,1,0,1,0,0},
         {0,0,1,0,0,0,0,1,0,0},
         {0,1,1,1,1,0,0,1,0,0},
         {0,0,0,0,1,0,0,1,1,1},
         {0,0,0,0,1,0,0,0,0,0},
         {0,0,0,0,1,0,0,0,0,0}
        };
char vysledek[10][10];
int x=4, y=9;

int kudyKamDPC(int x, int y){

    /*kudyKamDPC(bludiste[][10])*/

}
int stepByStepDPC(int x, int y){
    if (bludiste[x][y+1]==1 && y+1<10){
        bludiste[x][y+1]='+';
        stepByStepDPC(x, y+1);
    }else{
        bludiste[x][y+1]='#';
    }
    if (bludiste[x-1][y]==1 && x-1>=0){
        bludiste[x-1][y]='+';
        stepByStepDPC(x-1, y);
    } else{
        bludiste[x-1][y]='#';
    }
    if (bludiste[x][y-1]==1 && y-1>=0){
        bludiste[x][y-1]='+';
        stepByStepDPC(x, y-1);
    } else{
        bludiste[x][y-1]='#';
    }
    if (bludiste[x+1][y]==1 && x+1<10){
        bludiste[x+1][y]='+';
        stepByStepDPC(x+1, y);
    } else{
        bludiste[x+1][y]='#';
    }

    if (bludiste[x][y+1]==1 && y+1==10){
        //todo cil
    }
    if (bludiste[x-1][y]==1 && x-1==0){
        //todo cil
    }
    if (bludiste[x][y-1]==1 && y-1==0){
        //todo cil
    }
    if (bludiste[x+1][y]==1 && x+1==10){
        //todo cil
    }


}

int main() {

    kudyKamDPC(x, y);
    stepByStepDPC(x,y);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}