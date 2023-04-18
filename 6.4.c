#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
	int przedzial,liczba;
	int min=0;
	int max=2000;
	srand(time(0));
	liczba=rand()%(max-min)+1;
	printf("wylosowana liczba:%d",liczba);
	przedzial=(max+min)/2;
	printf("\npierwszy podzia³: %d",przedzial);
	do{
		if(przedzial>liczba) max=przedzial;
		else min=przedzial;
		przedzial=(max+min)/2;
		printf("\nCzy to jest %d", przedzial);
		if(przedzial==liczba)printf("TAK");
		else printf("NIE");
		
		
	}while(przedzial!=liczba);
	return 0;
}
