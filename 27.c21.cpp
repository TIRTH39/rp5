#include<stdio.h>

int main()
{
  int r,c,n=1;
  for(r=1;r<=5;r++)
  {
    for(c=5;c>=1;c--)
    {
      if(c>r)
        printf("");
      else
        printf("%d",n++);
    }
    printf("\n");
  }
}
