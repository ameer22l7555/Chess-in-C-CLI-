#include <iostream>
#include <ctime>
#include <time.h>
#include <chrono>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <Windows.h>
using namespace std;
int Play();
int input(int , int);
void converter(int);
int pawn(int);
int bishop(int);
int rook(int);
int queen(int);
int horse(int);
int king(int);
void check(int);
void boardload();
void loading();
int pawncheck(int , int , int , int );
int rookcheck(int , int , int , int  , int);
int queencheck(int , int , int , int );
int horsecheck(int , int , int , int);
int bishopcheck(int , int , int , int , int);
int game(int);
int menu();
ofstream fin;
ifstream fout;
int srow, scol;
int erow, ecol;
char start[10];
double p1 = 0, p2 = 0;
double elap = 0;
double elap1 = 0;
char board[8][8] = {
         'R','H','B','Q','K','B','H','R',
         'P','P','P','P','P','P','P','P',
         ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
         ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
         ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
         ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
         'p', 'p', 'p', 'p', 'p', 'p' , 'p', 'p',
         'r', 'h', 'b', 'q', 'k', 'b', 'h', 'r'
};