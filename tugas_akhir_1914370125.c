#include<stdio.h>
void main()
{
     int x, c, i, j;
     x = 20;
     i = 2;
     while (i <= x){
          c = 0;
          for (j = 2; j < i; j++){
              if(i%j == 0)
                 c = 1;
          }
           if (c == 0)
               printf("[%i]", i);
          i++;
    }
 }

