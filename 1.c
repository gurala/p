#include <stdio.h>
void printodd(int a)
{
 int i;
 for(i=1;i<=2*a;i++)
{
 if(i%2!=0)
 {
     if(i!=5)
    {
      printf("%d",i);
      printf(" ");
     }
   }
  }
 }
int main(){
int a;
printf("enter a value:");
scanf("%d",&a);
printodd(a);
}
