#include<stdio.h>
int main (){

    int mode;

    printf("Select Robot Mode: \n");
    printf("1.Idle \n2.Active \n3.Error\n");
    printf("Enter mode number:");
    scanf("%d",&mode);

    switch (mode)
    {
    case 1: printf("Robot is in IDLE mode. \n");
        break;
    
    case 2:  printf("Robot is in ACTIVE mode. \n");
        break;

    case 3:  printf("Robot is in ACTIVE mode. \n");
        break;
    
    default: printf("Invalid Mode selected \n");
        break;
    }

    return 0;
}



