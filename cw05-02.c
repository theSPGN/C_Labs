#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
FILE *wejscie;
wejscie=fopen("plik.txt","r");
float a,b,c,x1,x2,delta;

while(!feof(wejscie) ){
printf("\nWspolczynniki w programie:\n");
fscanf(wejscie,"%f%f%f",&a,&b,&c);

delta=(b*b-4*(a*c));
printf("delta=%f\n---------------\n",delta);
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
}
return 0;
} 
