#include<stdio.h>

int main(){
    int age;

    printf("Enter Age:");
    scanf("%d",&age);

    age>=18 ? printf("adult") : printf("Not adult");

    return 0;
}