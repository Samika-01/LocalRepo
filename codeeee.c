#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
     char str[]="ENGINEER";
     int i,j,len;
     len=strlen(str);
     for (i=len;i>=0;i--)
     {
         for(j=0;j<i;j++)
         {
                            printf("%c",str[j]);
                            }
                            printf("\n");
                            }
                            getch();
                            }
                            
