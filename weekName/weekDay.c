#include<stdio.h>
int validDate(int d,int m,int y)
{
    if(y>=1800&&y<=2999)
    {
        if(m>=1&&m<=12)
        {
            if(d>=1&&d<=31)
            {
                if((d>=1&&d<=30)&&(m==4||m==6||m==9||m==11))
                {
                    return 1;
                }else
                {
                    if((d>=1&&d<=31)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
                    {
                        return 1;
                    }
                    else
                    {
                        if((d>=1&&d<=28)&&(m==2))
                        {
                            return 1;
                        }
                        else
                        {
                            if((d==29&&m==2)&&((y%400==0)||(y%4==0&&y/4!=0)))
                            {
                                return 1;
                            }
                            else
                            {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
}
int weekDay(int year,int month,int day)
     {
       int weekDay=0;
       weekDay=(day  + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) \
        + (365 * (year + 4800 - ((14 - month) / 12)))              \
        + ((year + 4800 - ((14 - month) / 12)) / 4)                \
        - ((year + 4800 - ((14 - month) / 12)) / 100)              \
        + ((year + 4800 - ((14 - month) / 12)) / 400)              \
        - 32045                                                    \
      )%7;
       return weekDay;
     }


int main()
{
 int day,month,year;
 int weekdayNum=0;
 char dayName[][12]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};

 printf("enter date(DD-MM-YYYY):- ");
 scanf("%d-%d-%d",&day,&month,&year);

   if(validDate(day,month,year)==1)
     {
       printf("date is correct[%02d/%02d/%02d]\n",day,month,year);
       weekdayNum=weekDay(year,month,day);

       printf("weekday is :%s\n",dayName[weekdayNum]);
     }
   else
    printf("date is correct \n");
  return 0;
}

                 

   
         
         
       