#include<stdio.h>
void arr(int a[],int size){  //function for array input and display

int i;

for(i=0;i<size;i++){//taking and input
printf("enter the value:");
scanf("%d",&a[i]);
}

printf("\nthe required values are:");
for(i=0;i<size;i++){//displaying the array
    printf("%d",a[i]);
}
printf("\n");

}

int main(){
    int a[6];

arr( a, 6);
return 0;

}
