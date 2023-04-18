 #include<stdio.h>
#include<math.h>

int main(){
float a,b,c,x1,x2,delta;
printf("Wspolczynniki w programie:\n");
printf("a=");scanf("%f",&a);
printf("\nb=");scanf("%f",&b);
printf("\nc=");scanf("%f",&c);

delta=(b*b-4*(a*c));
if(delta>0) {
x1=(-b+sqrt(delta))/2	;
x2=(-b-sqrt(delta))/2	;
printf("\n x1=%f x2=%f\n",x1,x2 );
	}
	else if(delta==0) {
x1=(-b)/(2*a);
printf("x1=%f",x1);
		}
	else {printf("nie ma pierwiastkow rzeczywistych");}
	printf("\n");
return 0;} 

