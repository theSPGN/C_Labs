#include<stdio.h>
#include <ctype.h>

int main(){
	int odp=0;
	float dane=0,wynik=0;
	printf("Wynik:%f\n",wynik);
	do{
	printf("\n0.wyczysc\n1.+\n2.-\n3.x\n4./\n5.exit\n");
	scanf("%d",&odp);
	switch(odp){
		case 0:
		wynik=0;
		printf("\nWynik:%f\n",wynik);
		break;
		case 1:
			printf("Podaj liczbe:");
			scanf("%f",&dane);
			wynik=wynik+dane;
			printf("\nWynik:%f\n",wynik);
		break;
		case 2:
				printf("Podaj liczbe:");
				scanf("%f",&dane);
			wynik=wynik-dane;
			printf("\nWynik:%f\n",wynik);
		break;
		case 3:
				printf("Podaj liczbe:");
				scanf("%f",&dane);
			wynik=wynik*dane;
			printf("\nWynik:%f\n",wynik);
		break;
		case 4:
				printf("Podaj liczbe:");
				scanf("%f",&dane);
			wynik=wynik/dane;
			printf("\nWynik:%f\n",wynik);
		break;
	}
	if(!isdigit(odp)) {
	return 0;
	}
	
	}while(odp!=5);
	
	
	
	
	return 0;
}
