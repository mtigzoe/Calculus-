#include <stdio.h>

int main(void){

int derivatives;
int repeat = 1;

while ( repeat == 1 ){

printf("Find one of the derivatives\n");
printf("1 = d/dx(sin(x))\n2 = d/dx(cos(x)) \n3 = d/dx(tan(x))\n");
printf("4 = d/dx(csc(x))\n5 = d/dx(sec(x)) \n6 = d/dx(cot(x))\n");
scanf("%i", &derivatives);

switch (derivatives){
   case 1:
   printf("\ncos(x)\n"); 
   break;
   case 2: 
   printf("\n-sin(x)\n");
   break;
   case 3:
   printf("\nsec^2(x)\n");
   break;   
   case 4:
   printf("\n-csc(x)cot(x)\n");   
   break;
   case 5:
   printf("\nsec(x)tan(x)\n");
   break;   
   case 6:
   printf("\n-csc^2(x)\n");
   break;   
   default:
   printf("\nThere are only six derivatives at that time\n");
   break;
}

//printf("\n", derivatives); 
printf("\nWould you like to find another derivative? (1 for yes or 0 for no)\n");
scanf("%i", &repeat);
}
return 0;
}
