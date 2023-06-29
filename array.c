#include<stdio.h>
void arr(int a[],int size){

int i;

for(i=0;i<size;i++){
printf("enter the value:");
scanf("%d",&a[i]);
}

printf("\nthe required values are:");
for(i=0;i<size;i++){
    printf("%d",a[i]);
}
printf("\n");

}

int main(){
    int a[6];

arr( a, 6);
return 0;

}
