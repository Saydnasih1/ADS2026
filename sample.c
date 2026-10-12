#include <stdio.h>
void main()
{
int a;
printf("enter a number");
scanf("%d",&a);
printf("%d",a);
if(a==0){
printf("a number is zero");
}
else if(a>0){
printf("a is positive");
}
else{
printf("a is negative");
}
}

