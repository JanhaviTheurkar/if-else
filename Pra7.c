

    #include<stdio.h>
    #include<string.h>

    int main (){
       char command[20];

       printf("Enter command (START/STOP):");
       scanf("%s",&command);

       if(strcmp(command, "START")== 0){
         printf("Machine Started. \n");
       }

       else if (strcmp(command, "STOP")==0)
       {
         printf("Machine stopped. \n");
       }

       else{
         printf("Invaild Commmand");
       }
     
       return 0;
    }






    