//array and pointers

#include<stdio.h>

int main(){
int a[5],i;
int*p=a;
printf("enter the  elemnts in array:\n");

for(i=0;i<5;i++){//taking input from user
        scanf("%d",&p[i]);

}
for (i=0;i<5;i++){
    printf("%d\n",p[i]);
    //a[i]//displaying elements in aray


    }

return 0;
}
