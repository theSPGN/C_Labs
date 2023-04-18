#include<stdio.h>

void malejaca(float tab[],int y){
int zamian=1;
float pom;
while(zamian!=0){
    zamian=0;
    int i=0;
     for(i;i<y-1;i++){
        if(tab[i]<tab[i+1]){
             
            zamian++;
            pom=tab[i];
            tab[i]=tab[i+1];
            tab[i+1]=pom;
        } 
      
        }

}}
void rosnaca(float tab[], int y){
	int zamian=1;
float pom;
while(zamian!=0){
    zamian=0;
    int i=0;
     for(i;i<y-1;i++){
        if(tab[i]>tab[i+1]){
             
            zamian++;
            pom=tab[i];
            tab[i]=tab[i+1];
            tab[i+1]=pom;
        } 
      
        }

}

}


int main(){
	 float tab[50];
    FILE *f;
    int liczbazmiennych=0;
    int i=0;
    f=fopen("dane.txt","r");
    while(!feof(f)){
        fscanf(f,"%f",&tab[i]);
        i++;
        liczbazmiennych++;
    }
    
    i=0;
    for(i;i<liczbazmiennych;i++)printf("%5.0f ",tab[i]);
    printf("\n");
    malejaca(tab,liczbazmiennych);
    i=0;
   for(i;i<liczbazmiennych;i++)printf("%5.0f ",tab[i]);
    printf("\n");
    rosnaca(tab,liczbazmiennych);
    i=0;
    for(i;i<liczbazmiennych;i++)printf("%5.0f ",tab[i]);
    
	return 0;
}
