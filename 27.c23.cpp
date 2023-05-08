#include<stdio.h>
/*
1
10
101
1010
10101
*/
int main()
{
  int r,c;
  for(r=1;r<=5;r++)
  {
    for(c=1;c<=r;c++)
    {
      printf("%d",c%2);
    }
    printf("\n");
  }
}
