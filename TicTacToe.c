#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void show();
void gameName();
void inputSymbol();
void start();
void play();
void check(int p, char s);
int end();


int main()
{
    system("cls");
    gameName();
    show();
    inputSymbol();
    start();
    //getch();
    play();
    system("cls");
    show();
    play();
    
}





void show()
{
    printf("\n\n\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n", a[0], a[1], a[2]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n", a[3], a[4], a[5]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n", a[6], a[7], a[8]);
    printf("\t\t\t---|---|---\n");
    

}

void gameName()
{
    printf("\n\t\t\tTic Tac Toe Game : \n");
}


void inputSymbol()
{
    printf("\nplayer 1 symbol :x:");
    printf("\nplayer 2 symbol :0:\n");
}


void start()
{
    char pa;
    printf("\nenter who will start the game : player 1 or player 2\n");
    scanf("%c", &pa);
}

void play()
{
    char s;
    int p;
    printf("\nenter position and symbol for the player:\n");
    fflush(stdin);
    scanf("%d", &p);
    fflush(stdin);
    scanf("%c", &s);
    check(p,s);
}


void check(int p, char s)
{
    a[p-1] = s;

}

int end()
{
    if((a[0]=='x' && a[1] =='x' && a[2]=='x'))
}



/*
char a, b;
    clrscr();
    printf("enter two characters : \n");
    scanf("%c", &a);
    fflush(stdin);
    scanf("%c", &b);
    printf("a = %c b = %c\n", a, b);
    getch();
*/