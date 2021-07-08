#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, num, total = 0;
   
   //名前を聞くパート
   char str[8];
   printf("What is your name?\n");
   scanf("%s", str);
   printf("Hello, %s\n", str);

   //サイコロのパート   
   printf("Rolling the dice...\n");

   for(i = 0; i < 2; i++){
     num = rand() % 6 + 1;
     printf("Die %d: %d\n", i+1 ,num);
     total = num + total;
   }

   printf("Total value: %d\n", total);
   
   //勝敗を決めるパート
   if(total > 7){
     printf("you won!\n");
   }else{
     printf("you lost!\n");
   }
   
   return 0;

}
