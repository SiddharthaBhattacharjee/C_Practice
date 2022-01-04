#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num,v,count,x=1;
    srand(time(0));

    while(x){
        count = 0;
        num = rand()%100+1;
        while(1){
            printf("Enter a number between 1-100: ");
            scanf("%d",&v);
            if(v == num){
                printf("You guessed Right , the number is %d\n",num);
                count++;
                printf("You took %d turns \n",count);
                break;
            }
            else if(v >= num){
                printf("The entered number %d is bigger than Required Number\n",v);
                count++;
                continue;
            }
            else if(v <= num){
                printf("The entered number %d is smaller than Required Number\n",v);
                count++;
            }

        }
        printf("Enter 0 to close or 1 to play again : ");
        scanf("%d",&x);
    }
    
    return 0;
}