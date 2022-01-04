#include <stdio.h>

int isin(char a,char str[]){
    int x=0;
    while(str[x]){
        if(str[x]==a){
            return 1;
        }
        x++;
    }
    return 0;
}

int main(){
    char st[] = "Siddhartha Bhattacharjee";
    char a;
    while(1){
        printf("Enter a character : ");
        scanf("%c",&a);
        fflush(stdin);
        if(isin(a,st)){
            printf("Char %c is in Name\n",a);
        }
        else{
            printf("Char %c is not in Name\n",a);
        }
    }
    return 0;
}