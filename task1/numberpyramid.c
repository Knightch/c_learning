#include<stdio.h>
 int main(){
        int numOfRows, numOfColumns, num;
        printf("enter a number ");
        scanf("%d", & num);
        for (numOfRows = 1; numOfRows <= num; ++numOfRows) {
           for (numOfColumns=1; numOfColumns <= numOfRows; ++numOfColumns) {
              printf("%d",numOfRows);
           }
           printf("\n");
       }   
          
     }                  