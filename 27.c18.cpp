#include<stdio.h>
main()
{
	int r,c;
  for(r=5;r>=1;r--)
  {
    for(c=1;c<=5;c++)
    {
      if(c<=r)
        printf("%d",c);
      else
        printf(" ");
    }
     for(r=5;r>=1;r--)
   { 
    for(c=1;c<=5;c++)
    {
      if(c<=r)
        printf("%d",c);
      else
        printf(" ");
    } 
    printf("\n");
   }
  }
}
