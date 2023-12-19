#include<stdio.h>
int main (){
    int a,i,j;
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int found=1;
    for (j=0;j<a;j++){
        if (j%2==0){
            if (arr[j]%2!=0){
                found=0;
                break;
            }
        }
    }
    if (found)
    printf("True");
    else 
    printf("False");
    
}