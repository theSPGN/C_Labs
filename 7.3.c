#include<stdio.h>
#include<math.h>
struct Punkt{
	int x;
	int y;
};

float odleglosc(int x1,int y1,int x2,int y2){
	float wynik;
	wynik=sqrt(pow((x1-x2),2)+pow((y1-y2),2) );
	
	return wynik;
	
	
}

int main(){
 struct Punkt p1;
 struct Punkt p2;
printf("Podaj x1 "); 	scanf("%d",&p1.x);
printf("Podaj y1 "); 	scanf("%d",&p1.y);
printf("Podaj x2 "); 	scanf("%d",&p2.x);
printf("Podaj y2 "); 	scanf("%d",&p2.y);
 	
 	printf("Odleglosc: %f",odleglosc(p1.x,p1.y,p2.x,p2.y));
	return 0;
}
