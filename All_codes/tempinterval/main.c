#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char tabf[8],tabd[8];
    int a,f,d,h;
    scanf("%s %s",&tabd,&tabf);
    char hf[2],hd[2],mf[2],md[2],sf[2],sd[2];
    hf[2]={tabf[0],tabf[1]};
    hd[2]={tabd[0],tabd[1]};
    mf[2]={tabf[3],tabf[4]};
    md[2]={tabd[3],tabd[4]};
    sf[2]={tabf[6],tabf[7]};
    sd[2]={tabd[6],tabd[7]};
    if(atoi(hf)<atoi(hd))
        a=24+atoi(hf);
    else
        a=atoi(hf);
    printf("%s",hf);
    f=a*3600+atoi(mf)*60+atoi(sf);
    d=atoi(hd)*3600+atoi(md)*60+atoi(sd);
    h=f-d;
    //printf("%d %d %d\n",a,atoi(mf),h);
    if(h/3600<10&&h%3600/60<10&&h%3600%60<10)
        printf("0%d:0%d:0%d",h/3600,h%3600/60,h%3600%60);
    else if(h/3600<10&&h%3600/60>10&&h%3600%60>10)
        printf("0%d:%d:%d",h/3600,h%3600/60,h%3600%60);
    else if(h/3600<10&&h%3600/60<10&&h%3600%60>10)
        printf("0%d:0%d:%d",h/3600,h%3600/60,h%3600%60);
    else if(h/3600>10&&h%3600/60>10&&h%3600%60>10)
        printf("%d:%d:%d",h/3600,h%3600/60,h%3600%60);
    else if(h/3600>10&&h%3600/60>10&&h%3600%60<10)
        printf("%d:%d:0%d",h/3600,h%3600/60,h%3600%60);
    else if(h/3600>10&&h%3600/60<10&&h%3600%60>10)
        printf("%d:0%d:%d",h/3600,h%3600/60,h%3600%60);
    else if(h/3600>10&&h%3600/60<10&&h%3600%60<10)
        printf("%d:0%d:0%d",h/3600,h%3600/60,h%3600%60);
    else if(h/3600<10&&h%3600/60>10&&h%3600%60<10)
        printf("0%d:%d:0%d",h/3600,h%3600/60,h%3600%60);
    return 0;
}
