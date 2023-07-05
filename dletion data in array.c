
#include<stdio.h>

void del(int A[],int size,int pos){//deletinf function
int i;
if(pos<=0||pos>size){
    printf("invalid");
}else{

for(i=pos-1;i<size-1;i++){//shifting the array
    A[i]=A[i+1];


}
size--;
printf("after deletion\n");
for(i=0;i<size;i++){//displaying the deleted array

printf("%d",A[i]);

}

printf("\n");
}


}

int main(){
int A[50],size,temp,i,pos;

printf("enter the size of array:");
scanf("%d",&size);
printf("enter the pos:");
scanf("%d",&pos);

printf("before deletion:\n");

for(i=0;i<size;i++){//taking the input elements for aaray

    printf("enter the elements:");
    scanf("%d",&A[i]);

}
printf("after deletion:\n");

del(A,size,pos);



return 0;

}
