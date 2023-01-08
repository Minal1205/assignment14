#include<stdio.h>
//Write a program to find second largest element in an array.Take array values from the user.
int main(){
    int a[10],max1=1,max2=0;
    printf("Enter Elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];

        }
        else if (a[i]>max2)
        {
            max2=a[i];
        }
        
    }
    printf("Second largest element is %d\n",max2);
    
    return 0;
}