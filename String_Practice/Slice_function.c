#include <stdio.h>

void slice(char str[],int x,int y);

int main(){
    char st[] = "Siddhartha Bhattacharjee";
    slice(st,3,12);
    printf("%s\n",st);
    return 0;
}

void slice(char str[],int x,int y){
    int a=0;
    for(int i = x;i<y;i++){
        str[a] = str[i];
        a++;
    }
    str[a] = '\0';
}