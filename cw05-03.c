 #include<stdio.h>
 #include<stdlib.h>
int main(){
FILE *f;
f=fopen("dane.txt","r");
int d[100];
int n=0;
while(!feof(f)) {
fscanf(f,"%d",&d[n]);
n++;
}
int tmp=d[0];
for(int i=1;i<=n;i++){
if(d[i-1]>tmp) tmp=d[i-1];
}
printf("%d\n",tmp);
for(int i=1;i<=n;i++){
if(d[i-1]<tmp) tmp=d[i-1];
}
printf("%d\n",tmp);

fclose(f);
return 0;}