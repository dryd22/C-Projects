//Aidan Gull
//Assignment 1 327
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//PLACING FUNCTIONS
void place_grass(char map [80][21],int i, int j ){
    map[i][j]= ':';
}

void place_clearing(char map [80][21],int i, int j){
    map[i][j] = '.';
}
//END OF PLACING FUNCTIONS
//GENERATE FUNCTIONS
int generate_seedx(){
    int seedx = rand()% 77+1;
    return seedx;
}

int generate_seedy(){
    int seedy = rand()%18+1;
    return seedy;
}
//END OF GENERATE FUNCTIONS
//GROWING FUNCTIONS
void grow_clearing(char map[80][21],int i, int j){
    //CODE USED IN LAST ASSIGNMENT
    if(isspace(map[i-1][j-1])){
    //places . at [-i][-j]
    map[i-1][j-1] = '.';
    }
    if(isspace(map[i][j-1])){
    //places . at [i][-j]
    map[i][j-1] = '.';
    }
    if(isspace(map[i+1][j-1])){
    //places . at [+i][-j]
    map[i+1][j-1] = '.';
    }
    if(isspace(map[i-1][j])){
    //places . at [-i][j]
    map[i-1][j] = '.';
    }
    if(isspace(map[i+1][j])){
    //places . at [+i][j]
    map[i+1][j] = '.';
    }
    if(isspace(map[i-1][j+1])){
    //places . at [-i][+j]
    map[i-1][j+1] = '.';
    }
    if(isspace(map[i][j+1])){
    //places . at [i][+j]
    map[i][j+1] = '.';
    }
    if(isspace(map[i+1][j+1])){
    //places . at [+i][+j]
    map[i+1][j+1] = '.';
    }
}

void grow_grass(char map[80][21],int i, int j){
    //CODE USED IN LAST ASSIGNMENT
    if(isspace(map[i-1][j-1])){
    //places . at [-i][-j]
    map[i-1][j-1] = ':';
    }
    if(isspace(map[i][j-1])){
    //places . at [i][-j]
    map[i][j-1] = ':';
    }
    if(isspace(map[i+1][j-1])){
    //places . at [+i][-j]
    map[i+1][j-1] = ':';
    }
    if(isspace(map[i-1][j])){
    //places . at [-i][j]
    map[i-1][j] = ':';
    }
    if(isspace(map[i+1][j])){
    //places . at [+i][j]
    map[i+1][j] = ':';
    }
    if(isspace(map[i-1][j+1])){
    //places . at [-i][+j]
    map[i-1][j+1] = ':';
    }
    if(isspace(map[i][j+1])){
    //places . at [i][+j]
    map[i][j+1] = ':';
    }
    if(isspace(map[i+1][j+1])){
    //places . at [+i][+j]
    map[i+1][j+1] = ':';
    }
}
//Places % values around map to act as a border and fills other spots with spaces
void make_border(char border[80][21]){
    int i,j;

    for(j=0;j<21;j++){
        for(i=0;i<80;i++){
            if(j==0||i==0||j==20||i==79){
                border[i][j] = '%';
            }else{
                border[i][j] = ' ';
            }
        }
    }
}

//Prints map
void print_map(char map [80][21]){
    int i, j;
    for(j=0;j<21;j++){
        for(i=0;i<80;i++){
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
}


int main (int argc, char *argv[]){

    srand(time(NULL));
    //cs = clearing seed gs = grass seed ms = mountain seed ts = tree seed
    int cs1x,cs1y,cs2x,cs2y,gs1x,gs1y,gs2x,gs2y,msx,msy,tsx,tsy,i,j,count,spaces;
    //gf = growth factor 5 is just a base right now
    int gf = rand()%10+1;
    //char array for game map
    char map [80][21];
    //getting random numbers for seed placement
    //claearings
    cs1x = generate_seedx();
    cs1y = generate_seedy();
    printf("cl %d x %d y\n",cs1x,cs1y);
    cs2x = generate_seedx();
    cs2y = generate_seedy();
    printf("cl %d x %d y\n",cs2x,cs2y);
    //tall grass
    gs1x = generate_seedx();
    gs1y = generate_seedy();
    printf("gr %d x %d y\n",gs1x,gs1y);
    gs2x = generate_seedx();
    gs2y = generate_seedy();
    printf("gr %d x %d y\n",gs2x,gs2y);
    make_border(map);
    //PLACING INTIAL SEEDS
    //Clearings
    place_clearing(map,cs1x,cs1y);
    place_clearing(map,cs2x,cs2y);
    //Grass
    place_grass(map,gs1x,gs1y);
    place_grass(map,gs2x,gs2y);

    //GROWING SEEDS
    //currently has a wrap around problem but it might not ruin everything???
            for(j=0;j<gf;j++){
                for(i=0;i<gf;i++){
                        //growing direction is towards the the bottom right need to fix
                    grow_clearing(map,cs1x+i,cs1y+j);
                    grow_grass(map,gs1x+i,gs1y+j);
                    grow_clearing(map,cs2x+i,cs2y+j);
                    grow_grass(map,gs2x+i,gs2y+j);
                    count++;
                }
            }
      /*      spaces = 1492-count;
       for(spaces>0;spaces--){
        for j=0
                for(i=0;i<gf;i++){
                        //growing direction is towards the the bottom right need to fix
                    grow_clearing(map,cs1x+i,cs1y+j);
                    grow_grass(map,gs1x+i,gs1y+j);
                    grow_clearing(map,cs2x+i,cs2y+j);
                    grow_grass(map,gs2x+i,gs2y+j);
                }
            }
            */
    print_map(map);

    return 0;
}
