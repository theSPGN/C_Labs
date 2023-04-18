#include <stdio.h>
int silnia(int a){
    int wynik=1;
    int i=1;
    for(i;i<=a;i++){
        wynik*=i;
    }
    return wynik;
}
int main()
{
    int a;
    printf("Podaj liczbe:");

 scanf("%d",&a);

  printf("%d",silnia(a));


    return 0;
}
