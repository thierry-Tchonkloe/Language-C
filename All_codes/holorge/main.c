#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <conio.h>
int main()
{
    int sec=0,min=0,heur=0;
    for(sec=0;sec<=60;sec++)
    {
    if(sec==60)
    {
       sec=0;
       min=min+1;
    }
    if(min==60)
    {
        min=0;
        heur=heur+1;
    }
    if(heur==24)
    {
        heur=0;
    }
    //system("cls");
    printf(" =>  %d h:%d min:%d sec \r",heur,min,sec);

    sleep(1);

    //sec=sec++;
    }
    return 0;
}
