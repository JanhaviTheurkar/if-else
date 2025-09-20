#include<stdio.h>
int main(){

    int n;

    printf("Enter number:");
    scanf("%d",&n);

    if(n>=0){
        printf("Positive Number \n");

    if(n%2==0){
        printf("Number is Even \n ");
    }
    else 
    {
      printf("Number is Odd \n");
    }
    }

    else{
        printf("Negetive Number \n");
    }

    return 0;
}