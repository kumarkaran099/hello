//keep taking numbers as inputfrom the user until user enters a number which is multiple of 7.

#include<stdio.h>
int main(){
    int n;
    do{      
        printf("enter number : ");
        scanf("%d",&n);
        printf("loda mera \n");
            if(n%7==0){
                break;
            }
    }while(1);
printf("khatam tata bye bye");
return 0;
}