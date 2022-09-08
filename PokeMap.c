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
void place_mountain(char map [80][21],int i, int j){
 map[i][j] = '%';
}
void place_trees(char map [80][21],int i ,int j){
 map[i][j] = '^';
}
//END OF PLACING FUNCTIONS
//GENERATE FUNCTIONS
int generate_seedx(){
 int seedx = rand()% 78 +1;
 return seedx;
}
int generate_seedy(){
 int seedy = rand()%19+1;
 return seedy;
}
//END OF GENERATE FUNCTIONS
void fill_in_rest(char map [80][21],int i, int j){
 int k = rand()%2; //values of 0-1
 if(k==0){
 for(j=1;j<20;j++){
 for(i=1;i<79;i++){
 if(isspace(map[i][j])){
 map[i][j]= '^';
 }
 }
 }
 }
 if(k==1){
 for(j=1;j<19;j++){
 for(i=1;i<79;i++){
 if(isspace(map[i][j])){
 map[i][j]= '^';
 }
 }
 }
 }
}
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
 void grow_trees(char map[80][21],int i, int j){
 //CODE USED IN LAST ASSIGNMENT
 if(isspace(map[i-1][j-1])){
 //places . at [-i][-j]
 map[i-1][j-1] = '^';
 }
 if(isspace(map[i][j-1])){
 //places . at [i][-j]
 map[i][j-1] = '^';
 }
 if(isspace(map[i+1][j-1])){
 //places . at [+i][-j]
 map[i+1][j-1] = '^';
 }
 if(isspace(map[i-1][j])){
 //places . at [-i][j]
 map[i-1][j] = '^';
 }
 if(isspace(map[i+1][j])){
 //places . at [+i][j]
 map[i+1][j] = '^';
 }
 if(isspace(map[i-1][j+1])){
 //places . at [-i][+j]
 map[i-1][j+1] = '^';
 }
 if(isspace(map[i][j+1])){
 //places . at [i][+j]
 map[i][j+1] = '^';
 }
 if(isspace(map[i+1][j+1])){
 //places . at [+i][+j]
 map[i+1][j+1] = '^';
 }
 }
void grow_mountian(char map[80][21],int i, int j){
 //CODE USED IN LAST ASSIGNMENT
 if(isspace(map[i-1][j-1])){
 //places . at [-i][-j]
 map[i-1][j-1] = '%';
 }
 if(isspace(map[i][j-1])){
 //places . at [i][-j]
 map[i][j-1] = '%';
 }
 if(isspace(map[i+1][j-1])){
 //places . at [+i][-j]
 map[i+1][j-1] = '%';
 }
 if(isspace(map[i-1][j])){
 //places . at [-i][j]
 map[i-1][j] = '%';
 }
 if(isspace(map[i+1][j])){
 //places . at [+i][j]
 map[i+1][j] = '%';
 }
 if(isspace(map[i-1][j+1])){
 //places . at [-i][+j]
 map[i-1][j+1] = '%';
 }
 if(isspace(map[i][j+1])){
 //places . at [i][+j]
 map[i][j+1] = '%';
 }
 if(isspace(map[i+1][j+1])){
 //places . at [+i][+j]
 map[i+1][j+1] = '%';
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
//builds road from one side of the map to the other
void build_roadEW(char map [80][21],int i, int j){
int red;
red = rand()%100; // value of 0-99
 if(i==80){
 }else{
 //road that builds east to west
 //If the road is near the bottom of the map then do not deviate down
 if(j==19){
 //path does not deviate
 if(red<90){
 map[i][j] = '#';
 map[i+1][j] = '#';
 build_roadEW(map,i+1,j);
 }
 //path deviates up
 if(red>=90){
 map[i][j-1] = '#';
 map[i+1][j-1] = '#';
 build_roadEW(map,i+1,j-1);
 }
 }
 //if road is at the top then do not deviate up
 if(j==1){
 if(red<10){
 map[i][j+1]= '#';
 map[i+1][j+1] = '#';
 build_roadEW(map,i+1,j+1);
 }
 //path does not deviate
 if(red>=10&&red<=99){
 map[i][j] = '#';
 map[i+1][j] = '#';
 build_roadEW(map,i+1,j);
 }
 //path deviates up
 }
 if(j>1&&j<19){
 //if red is less than 33 then path goes down
 if(red<10){
 map[i][j+1]= '#';
 map[i+1][j+1] = '#';
 build_roadEW(map,i+1,j+1);
 }
 //path does not deviate
 if(red>=10&&red<=90){
 map[i][j] = '#';
 map[i+1][j] = '#';
 build_roadEW(map,i+1,j);
 }
 //path deviates up
 if(red>90){
 map[i][j-1] = '#';
 map[i+1][j-1] = '#';
 build_roadEW(map,i+1,j-1);
 }
 }
 }
}
void build_roadNS(char map [80][21],int i, int j){
int rnd;
rnd = rand()%100; //value of 0-99
 if(j==20){
 }else{
//road that builds north to south
if(i==79){
 //path does not deviate
 if(rnd<70){
 map[i][j] = '#';
 map[i][j+1] = '#';
 build_roadNS(map,i,j+1);
 }
 //path deviates left
 if(rnd>=70){
 map[i-1][j] = '#';
 map[i-1][j+1] = '#';
 build_roadNS(map,i-1,j+1);
 }
 }
 //if road is at the left wall then do not deviate left
 if(i==1){
 //deviates to the right
 if(rnd<30){
 map[i+i][j]= '#';
 map[i+1][j+1] = '#';
 build_roadNS(map,i+1,j+1);
 }
 //path does not deviate
 if(rnd>=30&&rnd<=99){
 map[i][j] = '#';
 map[i][j+1] = '#';
 build_roadNS(map,i,j+1);
 }
 }
 if(i>1&&i<79){
 //if red is less than 33 then path goes right
 if(rnd<20){
 map[i+1][j]= '#';
 map[i+1][j+1] = '#';
 build_roadNS(map,i+1,j+1);
 }
 //path does not deviate
 if(rnd>=20&&rnd<=80){
 map[i][j] = '#';
 map[i][j+1] = '#';
 build_roadNS(map,i,j+1);
 }
 //path deviates left
 if(rnd>80){
 map[i-1][j] = '#';
 map[i-1][j+1] = '#';
 build_roadNS(map,i-1,j+1);
 }
 }
 }
}
//makes Poke Center
void build_poke_center(char map [80][21],int i , int j){
 //sees if poke center wants to be on east west road or north south
 int k = rand() % 2;
 //sees if poke center will be "above" or below the road.
 int l = rand() % 2;
 //if # is found on a east west road
 if(k==1){
 if(map[i+1][j]=='#'&& map[i-1][j]=='#'){
 //up to the left
 if(l==1){
 if((map[i][j-1]!='%' && map[i][j-1] != '#'&& map[i][j-1]!='M')&&(map[i-1][j-1] !='#'&& map[i-1][j-1]!=
'%'&& map[i-1][j-1]!='M')&&(map[i-1][j-2]!='#'&& map[i-1][j-2]!='%'&& map[i-1][j-2]!='M')&&(map[i][j-2]!='#'&&
map[i][j-2]!='%'&& map[i][j-2]!='M')){
 map[i][j-1] = 'C';
 map[i-1][j-1] = 'C';
 map[i-1][j-2] = 'C';
 map[i][j-2] = 'C';
 } else {
 i = generate_seedx();
 j = generate_seedy();
 find_roadpc(map,i,j);
 }
 }
 if(l==0){
 if((map[i][j+1]!='%' && map[i][j+1] != '#'&& map[i][j+1]!='M')&&(map[i+1][j+1] !='#'&& map[i+1][j+1]!=
'%'&& map[i+1][j+1]!='M')&&(map[i+1][j+2]!='#'&& map[i+1][j+2]!='%'&& map[i+1][j+2]!='M')&&(map[i][j+2]!='#'&&
map[i][j+2]!='%'&& map[i][j+2]!='M')){
 map[i][j+1] = 'C';
 map[i+1][j+1] = 'C';
 map[i+1][j+2] = 'C';
 map[i][j+2] = 'C';
 } else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpc(map,i,j);
 }
 }
 }else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpc(map,i,j);
 }
 }
 if(k==0){
 //if suitable # is found on north south road
 if(map[i][j+1]=='#' && map[i][j-1]=='#'){
 if(l==1){
 if((map[i-1][j]!='%' && map[i-1][j] != '#'&& map[i-1][j]!='M')&&(map[i-1][j-1] !='#'&& map[i-1][j-1]!=
'%'&& map[i-1][j]!='M')&&(map[i-2][j-1]!='#'&& map[i-2][j-1]!='%'&& map[i-21][j-1]!='M')&& (map[i-2][j]!='#'&&
map[i-2][j]!='%'&& map[i-2][j]!='M')){
 map[i-1][j-1] = 'C';
 map[i-2][j-1] = 'C';
 map[i-1][j] = 'C';
 map[i-2][j] = 'C';
 }else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpc(map,i,j);
 }
 }
 if(l==0){
 if((map[i+1][j]!='%' && map[i+1][j] != '#'&& map[i+1][j]!='M')&&(map[i+1][j+1] !='#'&& map[i+1][j+1]!=
'%'&& map[i+1][j+1]!='M')&&(map[i+2][j+1]!='#'&& map[i+2][j+1]!='%'&& map[i+2][j+1]!='M')&& (map[i+2][j]!='#'&&
map[i+2][j]!='%'&& map[i+2][j]!='M')){
 map[i+1][j+1] = 'C';
 map[i+2][j+1] = 'C';
 map[i+1][j] = 'C';
 map[i+2][j] = 'C';
 } else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpc(map,i,j);
 }
 }
 }
 else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpc(map,i,j);
 }
 }
}
void build_poke_mart(char map [80][21],int i , int j){
 //sees if poke center wants to be on east west road or north south
 int k = rand() % 2;
 //sees if poke center will be "above" or below the road.
 int l = rand() % 2;
 //if # is found on a east west road
 if(k==1){
 if(map[i+1][j]=='#'&& map[i-1][j]=='#'){
 //up to the left
 if(l==1){
 if((map[i][j-1]!='%' && map[i][j-1] != '#'&& map[i][j-1]!='C')&&(map[i-1][j-1] !='#'&& map[i-1][j-1]!=
'%'&& map[i-1][j-1]!='C')&&(map[i-1][j-2]!='#'&& map[i-1][j-2]!='%'&& map[i-1][j-2]!='C')&&(map[i][j-2]!='#'&&
map[i][j-2]!='%'&& map[i][j-2]!='C')){
 map[i][j-1] = 'M';
 map[i-1][j-1] = 'M';
 map[i-1][j-2] = 'M';
 map[i][j-2] = 'M';
 } else {
 i = generate_seedx();
 j = generate_seedy();
 find_roadpm(map,i,j);
 }
 }
 if(l==0){
 if((map[i][j+1]!='%' && map[i][j+1] != '#'&& map[i][j+1]!='C')&&(map[i+1][j+1] !='#'&& map[i+1][j+1]!=
'%'&& map[i+1][j+1]!='C')&&(map[i+1][j+2]!='#'&& map[i+1][j+2]!='%'&& map[i+1][j+2]!='C')&&(map[i][j+2]!='#'&&
map[i][j+2]!='%'&& map[i][j+2]!='C')){
 map[i][j+1] = 'M';
 map[i+1][j+1] = 'M';
 map[i+1][j+2] = 'M';
 map[i][j+2] = 'M';
 } else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpm(map,i,j);
 }
 }
 }else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpm(map,i,j);
 }
 }
 if(k==0){
 //if suitable # is found on north south road
 if(map[i][j+1]=='#' && map[i][j-1]=='#'){
 if(l==1){
 if((map[i-1][j]!='%' && map[i-1][j] != '#'&& map[i-1][j]!='C')&&(map[i-1][j-1] !='#'&& map[i-1][j-1]!=
'%'&& map[i-1][j-1]!='C')&&(map[i-2][j-1]!='#'&& map[i-2][j-1]&& map[i-2][j-1]!='C')&& (map[i-2][j]!='#'&& map[i
-2][j]!='%'&& map[i-2][j]!='C')){
 map[i-1][j-1] = 'M';
 map[i-2][j-1] = 'M';
 map[i-1][j] = 'M';
 map[i-2][j] = 'M';
 }else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpm(map,i,j);
 }
 }
 if(l==0){
 if((map[i+1][j]!='%' && map[i+1][j] != '#'&& map[i+1][j]!='C')&&(map[i+1][j+1] !='#'&& map[i+1][j+1]!=
'%'&& map[i+1][j+1]!='C')&&(map[i+2][j+1]!='#'&& map[i+2][j+1]&& map[i+2][j+1]!='C')&& (map[i+2][j]!='#'&& map[i
+2][j]!='%'&& map[i+2][j]!='C')){
 map[i+1][j+1] = 'M';
 map[i+2][j+1] = 'M';
 map[i+1][j] = 'M';
 map[i+2][j] = 'M';
 } else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpm(map,i,j);
 }
 }
 }
 else{
 i = generate_seedx();
 j = generate_seedy();
 find_roadpm(map,i,j);
 }
 }
}
void find_roadpc(char map [80][21],int i , int j){
 //finds a road
 if(map[i][j]=='#'){
 build_poke_center(map,i,j);
 } else {
 i = generate_seedx();
 j = generate_seedy();
 find_roadpc(map,i,j);
 }
}
void find_roadpm(char map [80][21],int i , int j){
 //finds a road
 if(map[i][j]=='#'){
 build_poke_mart(map,i,j);
 } else {
 i = generate_seedx();
 j = generate_seedy();
 find_roadpm(map,i,j);
 }
}
//Prints map
void print_map(char map [80][21]){
 int i, j;
 printf("\n");
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
 int cs1x,cs1y,cs2x,cs2y,cs3x,cs3y,gs1x,gs1y,gs2x,gs2y,mx,my,tx,ty,i,j,re,rn,pcx,pcy,pmx,pmy;
 //gf = growth factor 5 is just a base right now
 int gf = 1;
 //char array for game map
 char map [80][21];
 //getting random numbers for seed placement
 //claearings
 cs1x = generate_seedx();
 cs1y = generate_seedy();
 cs2x = generate_seedx();
 cs2y = generate_seedy();
 cs3x = generate_seedx();
 cs3y = generate_seedy();
 //tall grass
 gs1x = generate_seedx();
 gs1y = generate_seedy();
 gs2x = generate_seedx();
 gs2y = generate_seedy();
 //roads
 re = generate_seedy();
 rn = generate_seedx();
 //mountains
 mx = generate_seedx();
 my = generate_seedy();
 //trees
 tx = generate_seedx();
 ty = generate_seedy();
 make_border(map);
 //PLACING INTIAL SEEDS
 //Clearings
 place_clearing(map,cs1x,cs1y);
 place_clearing(map,cs2x,cs2y);
 place_clearing(map,cs3x,cs3y);
 //Grass
 place_grass(map,gs1x,gs1y);
 place_grass(map,gs2x,gs2y);
 //Mountains
 place_mountain(map,mx,my);
 //Trees
 place_trees(map,tx,ty);
 //GROWING SEEDS
 for(j=0;j<20;j++){
 for(i=0;i<79;i++){
 if(cs1x+i>80|| gs1x+i>80 || cs1y+j>19 || gs1y+j>19){
 }else{
 //growing direction is towards the the bottom right need to fix
 grow_grass(map,gs1x+i,gs1y+j);
 grow_clearing(map,cs1x+i,cs1y+j);
 grow_mountian(map,mx+i,my+j);
 grow_clearing(map,cs3x+i,cs3y+j);
 grow_trees(map,tx+i,my+j);
 }
 }
 for(j=0;j<20;j++){
 for(i=0;i<79;i++){
 if(cs1x-i<1|| gs1x-i<1 || cs1y-j<1 || gs1y-j<1){
 }else{
 //growing direction is towards the the bottom right need to fix
 grow_grass(map,gs1x-i,gs1y-j);
 grow_clearing(map,cs1x-i,cs1y-j);
 grow_clearing(map,cs3x-i,cs3y-j);
 grow_mountian(map,mx-i,my-j);
 grow_trees(map,tx-i,ty-j);
 }
 }
 }
 for(j=0;j<20;j++){
 for(i=0;i<79;i++){
 if(cs2x+i>80 || gs2x+i>80 || cs2y+j>19 || gs2y+j>19){
 }else{
 grow_clearing(map,cs2x+i,cs2y+j);
 grow_grass(map,gs2x+i,gs2y+j);
 grow_mountian(map,mx+i,my+j);
 }
 }
 }
 for(j=0;j<20;j++){
 for(i=0;i<79;i++){
 if(cs2x-i<1|| gs2x-i<1 || cs2y-j<1 || gs2y-j<1){
 }else{
 grow_clearing(map,cs2x-i,cs2y-j);
 grow_grass(map,gs2x-i,gs2y-j);
 grow_mountian(map,mx+i,my+j);
 }
 }
 }
 //ROAD STUFF
 //Building roads
 //builds east road
 build_roadEW(map,0,re);
 //builds north south road
 build_roadNS(map,rn,0);
 //poke center and mart
 pmx = generate_seedx();
 pmy = generate_seedy();
 pcx = generate_seedx();
 pcy = generate_seedy();
 build_poke_mart(map,pmx,pmy);
 build_poke_center(map,pcx,pcy);
 fill_in_rest(map,1,1);
 print_map(map);
 return 0;
}}
