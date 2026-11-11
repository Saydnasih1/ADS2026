#include <stdio.h>
int main()
{
 int value[5];
 printf("Enter the 5 integers: ");
   for(int i=0;i<5;++i)
    scanf("%d",&value[i]);
  printf("Displaying integers: ");
   for(int i=0;i<5;++i)
    
     printf("%d\n",value[i]);
    
  return 0;
}
