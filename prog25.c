#include<stdio.h>
int main()
{
   int n1,n2,n3;
   scanf("%d%d%d",&n1,&n2,&n3);
   if(n1>n2&&n1>n3)
   printf("n1 is greataet amoung 3 integer");
   else if(n2>n1&& n2>n3)
printf("n2 is greataest amoung 3 integer");
   else
   printf("n3 is greataest amoung 3 integer");
   return 0;
}
