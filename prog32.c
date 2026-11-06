#include<stdio.h>
int num(int x);{
 if (x>0);
 printf("positive");
 else if (x<0);
 printf ("negative");
 else
    printf("zero");
    }
 int main()
{
 int a;
 scanf("%d",&a);
 num(a);
 return 0;
}
