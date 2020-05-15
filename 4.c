#include<stdio.h>
int main(){
int a[]={2,7,5,64,14};
int ele,i,evenc,oddc;
ele=sizeof(a)/sizeof(a[0]);
for(i=0,evenc=0,oddc=0;i<ele;i++)
{
if(a[i]%2==0)
evenc++;
else
oddc++;
}
printf("even count in list=%d\n",evenc);
printf("odd count in list=%d\n",oddc);
}
