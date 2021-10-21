#include <stdio.h>
#incude <stdlib.h>
int add(int,int);
int main()
{
  int x,y,result;
  printf("Enter two numbers:");
  scanf("%d %d" ,&x,&y);
  result=add(x,y);
  printf("Sum of two numbers are:%d\n",result);
  getch();
  return0;
}
int add(int x,int y)
{
  if(y==0)
    else
      return(1+add(x,y-1));
}

  
  
