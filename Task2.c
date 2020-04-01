#include<stdio.h>
int main()
{
 int i, n;
 do
 {
 printf("\n Input N: ");
 scanf("%d", &n);
   if(n <= 0)
    {
  printf("\nN must > 0");
    }
 }while(n <= 0);
    i = 1;
 while(i <= n)
 {
  if(n % i == 0)
   printf("%4d", i);
   i++;
 }
 return 0;
}