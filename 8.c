#include<stdio.h>
//Write a program to find second smallest element in an array.Take array values from the user.
int main(){
    int a[10],min1=1000,min2=900;
    printf("Enter Elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        if(a[i]<min1){
            min2=min1;
            min1=a[i];

        }
        else if (a[i]<min2)
        {
            min2=a[i];
        }
        
    }
    printf("Second smallest element is %d\n",min2);
    
    return 0;
}