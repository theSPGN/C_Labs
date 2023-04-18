#include<stdio.h>
#include<stdlib.h>
#define ROW1 3
#define COL1 2
#define ROW2 COL1
#define COL2 2
void matrix(int tab1[][COL1],int tab2[][COL2]){
	int tab[ROW1][COL2]={0};
	int w=0;
	int i=0;
	for(i;i<ROW1;i++){
		int j=0;
		for(j;j<COL2;j++){
			int l=0;
		for(l;l<ROW2;l++){
			w=w +tab1[i][l]*tab2[l][j];
		}		
		tab[i][j]=w;	
		}
	}
	int a=0;
	for(a;a<ROW1;a++){
		int j=0;
		for(j;j<COL2;j++){
			printf("%i ",tab[a][j]);
		}
	}
}


int main(){
	int tab1[ROW1][COL1]={{1,2},{3,4},{5,6}};
	int tab2[ROW2][COL2]={{2,2},{3,3}};
 	matrix(tab1,tab2);
	 return 0;
	
}
