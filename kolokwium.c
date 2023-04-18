#include<stdio.h>
#include<math.h>
#include<time.h>

float oblicz(float x, float y){
	return 3*x+sqrt(y);
}
float losowex(){
	
	float x=rand()%100+1;
	return x;
}
float losowey(){
	float y=rand()%100+1;
	return y;
}


int main(){
		FILE *f;
		float x,y=1;
	printf("Program rozwiazuje nastepujace rownanie: 3*x+sqrt(y) \n");
	int wybor;
	srand(time(0));
	
	printf(" 1.podaj wlasne\n 2.wygeneruj\n 3.wyjdz\n");
	scanf("%d",&wybor);
	
	switch(wybor){
		case 1:
				printf("Podaj x\n"); scanf("%f",&x);
				printf("Podaj y\n"); scanf("%f",&y);
				while(y<0){
				printf("blad y musi byc wiekszy od zera! Podaj y:\n"); scanf("%f",&y);}
				printf("Wynik: %f",oblicz(x,y));
				int wybor2;
				printf("\n1.Zapisz do pliku wynik.txt \n2.Zamknij program\n");
				scanf("%d",&wybor2);
				switch(wybor2){
					case 1:
					
						f=fopen("wynik.txt","w");
						fprintf(f,"%f",oblicz(x,y));
						fclose(f);
				break;
					case 2: return 0;
				break;
				};
	break;
		case 2:	printf("\n Losowe liczby: %.0f, %.0f\n wynik:%f",losowex(),losowey(), oblicz(losowex(),losowey()));
	break;
		case 3: return 0;
	};
	

	return 0;
	
}
