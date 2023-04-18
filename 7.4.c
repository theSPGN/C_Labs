#include<stdio.h>
#include<math.h>
struct Punkt{
	int x;int y;
};
struct Okrag{
	int x;
	int y;
	int r;
};

void sprawdzczy(int xp,int yp,int xo,int yo,int ro){
	int wynik=0;
	wynik= pow((xp-xo),2)+pow((yp-yo),2);
	int promien=pow(ro,2);
	if(wynik<promien) printf("Punkt lezy wewnatrz okregu");
	else if(wynik>promien) printf("Punkt lezy poza okregiem");
	else if(wynik==promien) printf("Punkt lezy na okregu");
	
	}




int main(){
	struct Okrag okrag;
	struct Punkt punkt;
	printf("Podaj dane okregu: \n");
	printf("promien: "); scanf("%d",&okrag.r);
	printf("wspolrzedna x: "); scanf("%d",&okrag.x);
	printf("wspolrzedna y: "); scanf("%d",&okrag.y);
	printf("Podaj dane punktu: \n");
	printf("wspolrzedna x: "); scanf("%d",&punkt.x);
	printf("wspolrzedna y: "); scanf("%d",&punkt.y);
	sprawdzczy(punkt.x,punkt.y,okrag.x,okrag.y,okrag.r);
}
