#include<stdio.h>
#include<math.h>


float pole_prostokata(float a,float b){
	float wynik=0;
	wynik=a*b;
	return wynik;
}

float pole_trojkata(float a, float b, float c){
	float wynik=0;
	float p=(a+b+c)/2.0;
	wynik=sqrt(p*(p-a)*(p-b)*(p-c));
	return wynik;
	
}

float pole_kola(float r){
float wynik=0;
wynik=M_PI*pow(r,2);
return wynik;

}





int main(){
	
	float a,b,c,r,wynik;
	int odp;
	
	do{
	printf("\n1.pole prostokata\n2.pole trojkata\n3.pole_kola\n4.wyjdz\n");
	scanf("%d",&odp);
	switch(odp){
		case 1:
			printf("Podaj boki prostokata");
			scanf("%f%f",&a,&b);
			printf("Pole:%f",pole_prostokata(a,b));
		break;
			case 2:
			printf("Podaj boki trojkata");
			scanf("%f%f%f",&a,&b,&c);
			printf("Pole:%f",pole_trojkata(a,b,c));
		break;
			case 3:
			printf("Podaj promien kola");
			scanf("%f",&r);
			printf("Pole:%f",pole_kola(r));
		break;
		
	}
	
	
	
		
	}while(odp!=4);
	
	return 0;
}
