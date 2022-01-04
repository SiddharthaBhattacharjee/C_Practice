#include <stdio.h>
#include <conio.h>  
#include <stdlib.h>

int rps(char x,int * sp);

//Logic :
// 1=rock , 2=paper , 3=seasor
// p = c : tie ; p=c+1 : p win ; c=p+1 : c wins; p3&c1 : c wins ; p1&c3 : p wins 

int main(){
    int score=0;
    int a = 0;
    while(1){
        char i;
        fflush(stdin);
        printf("Choose R , P or S :: ");
        scanf("%c",&i);
        if(i=='R' || i=='r'){
            a=1;
        }
        else if(i=='P' || i=='p'){
            a=2;
        }
        else if(i=='S' || i=='s'){
            a=3;
        }
        else{
            printf("Invalid Input Please Try Again ! \n");
            continue;
        }
        rps(a,&score);
    }
    return 0;
}

int rps(char x,int * sp){
    int p = x;
    int c;
    char vals[] = {'i','R','P','S'};
    c = rand()%3+1;
    if(p==c){
        printf("Player : %c , Computer : %c :: GAME TIED\n",vals[p],vals[c]);
        printf("SCORE :: %d\n",*sp);
    }
    else if(p==c+1){
        printf("Player : %c , Computer : %c :: YOU WON THE ROUND\n",vals[p],vals[c]);
        *sp = *sp+1;
        printf("SCORE :: %d\n",*sp);
    }
    else if(c==p+1){
        printf("Player : %c , Computer : %c :: YOU LOST THE ROUND\n",vals[p],vals[c]);
        *sp = *sp-1;
        printf("SCORE :: %d\n",*sp);
    }
    else if(p==3 && c==1){
        printf("Player : %c , Computer : %c :: YOU LOST THE ROUND\n",vals[p],vals[c]);
        *sp = *sp-1;
        printf("SCORE :: %d\n",*sp);
    }
    else if(p==1 && c==3){
        printf("Player : %c , Computer : %c :: YOU WON THE ROUND\n",vals[p],vals[c]);
        *sp = *sp+1;
        printf("SCORE :: %d\n",*sp);
    }
}