#include<stdio.h>
#include<math.h>

int main(){
float a=2,b=17,c=2,x1,x2,delta;
printf("Wspolczynniki w programie:a=%f b=%f c=%f\n",a,b,c);
delta=(b*b-4*(a*c));
if(delta>0) {
x1=(-b+sqrt(delta))/2	;
x2=(-b-sqrt(delta))/2	;
printf("x1=%f x2=%f\n",x1,x2 );
	}
	else if(delta==0) {
x1=(-b)/(2*a);
printf("x1=%f",x1);
		}
	else {printf("nie ma pierwiastkow rzeczywistych");}
return 0;} 
