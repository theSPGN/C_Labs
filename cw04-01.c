#include <stdio.h>
int main() 
{
	int i;
printf("Petla for:\n");
for(int i=1;i<=12;i++) {
	printf("%d ",i*i); 
}
i=1;
printf("\nPetla while:\n");
while(i<=12) {
printf("%d ",i*i); i++;
};
i=1;
printf("\nPetla do while:\n");
do {
printf("%d ",i*i); i++;
}while(i<=12) ;
return 0;}