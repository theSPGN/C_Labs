#include<stdio.h>
#include<stdlib.h>
int main(int i,char* args[]) {
//args[1]-> podana liczba do silni
int wynik=1;
for(i=1;i<=atoi(args[1]);i++) {
	wynik*=i;
}
printf("%d\n",wynik);
return 0;}
