#include <stdio.h>
int main() 
{
long long n,wynik=1;
scanf("%lld",&n);	
	for(int i=1;i<=n;i++){
	wynik*=i;
	
	}
	
	printf("%lld",wynik);
	
	return 0;}