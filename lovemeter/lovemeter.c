#include<stdio.h>
#include<string.h>
#include<ctype.h>
  
int sumofdigit(int num)
{
  int sum=0;
  while(num>0)
   { 
     sum+=(num%10);
     num/=10;
   }
   return sum;
}

int main()
{
    char bname[50],gname[50];
    int sum,sum1,i,choice;
    float perc=0;

    do
    {
       printf("enter your name: ");
       fflush(stdin);
       gets(bname);

       printf("enter your patner name: ");
       fflush(stdin);
       gets(gname);

       sum=0;
       for(i=0;i<(strlen(bname));i++)
          {
            sum+=tolower(bname[i]);
          }
       
       sum1=0;
       for(i=0;i<(strlen(gname));i++)
          {
             sum+=tolower(gname[i]);
          }
       perc=(sumofdigit(sum)+sumofdigit(sum1))+40;
       if(perc>100) perc=100;

       printf("your love percentage is : %.02f\n\n",perc);
       
       printf("wnat to calculate with someone else (0 to exit, 1 to continue ) ???:");
       scanf("%d",&choice);
    }while(choice!=0);
   
    return 0;
}
       