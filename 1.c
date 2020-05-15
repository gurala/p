#include<stdio.h>
int main(){
int i;
for(i=1500;i<=2700;i++)
{
if(i%7==0 && i%5==0)
printf("Divisibles of 7 and 5 = %d\n",i);
}
}
