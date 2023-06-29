#include<stdio.h>
 int main(){

 int a[50],size,pos,num;
int i;
 printf("enter the size :");
 scanf("%d",&size);

 printf("%d is size\n",size);


 for(i=0;i<size;i++)//taking input for array postion\}|
    scanf("%d",&a[i]);

 printf("enter the position :");
 scanf("%d",&pos);
 printf("enter the num:");
 scanf("%d",&num);

 for(i=size-1;i>=pos-1;i--)

    a[i+1]=a[i];

    a[pos-1]=num;



    printf("the values are:");
    for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }




 return 0;
 }

