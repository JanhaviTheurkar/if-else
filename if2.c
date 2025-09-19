#include<stdio.h>
int main(){

int age;

printf("Enter age:");
scanf("%d",&age);

if (age>=18)
{
    printf("You can Vote \n");
}

else if(age>=13 && age<18){
    printf("You are Teenager \n");
}

else{
    printf("Not adult \n");
}
return 0;

}