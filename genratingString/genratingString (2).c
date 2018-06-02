#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc,char *argv[])
{

char randChar="";
int i=0,num,randNum=0;

printf("enter the number of string :- ");
scanf("%d",&num);

     srand(time(NULL));
         for(i=0;i<num;++i)
         {
          randNum=26*(rand()/(RAND_MAX + 1.0));
          randNum=randNum + 97;
          randChar=(char)randNum;
          printf("%c",randChar);
         }

}     