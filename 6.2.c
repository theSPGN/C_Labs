#include <stdio.h>
#include<math.h>

float suma(float x[],int y){
    float sumy=0.0;
    int i=0;
    for(i;i<y;i++) sumy+=x[i];

    return sumy;
}

float srednia_arytmetyczna(float x[],int y){
     float sumy=0;
       int i=0;
    for(i;i<y;i++) sumy+=x[i];

    return (sumy/y);
}

float srednia_geometryczna(float x[],int y){
     float sumy=1;
       int i=0;
    for(i;i<y;i++) sumy*=x[i];

    return pow(sumy,1.0/y);
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
    printf("suma:%f sr aryt:%f ar geo:%f",suma(tab,liczbazmiennych),srednia_arytmetyczna(tab,liczbazmiennych),srednia_geometryczna(tab,liczbazmiennych));

    fclose(f);
    return 0;
}
