#include <stdio.h>

int count(char str[],char a){
    int x = 0,count = 0;
    while(str[x]){
        if(str[x]==a){
            count++;
        }
        x++;
    }
    return count;
}

int main(){
    char name[] = "Siddhartha Bhattacharjee";
    int c = count(name,'a');
    printf("%d\n",c);
    return 0;
}