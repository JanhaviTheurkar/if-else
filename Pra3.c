

   #include<stdio.h>
   int main(){
   int temp;

   printf("Enter your temperature : ", temp);
   scanf("%d", &temp);

   if(temp<= 75){
    printf("Patient Status: Normal");
   }
   else if (temp<= 100)
   {
    printf("Patient Status: Warning");
   }
   else{
    printf("Patient Status: Critical");
   }
   return 0;
   }