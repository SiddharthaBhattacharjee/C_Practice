#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,b;
    printf("Enter number of elements of array : ");
    scanf("%d",&n);
    int * arr1 = (int *) calloc(n,sizeof(int));
    int * arr2 = (int *) calloc(n,sizeof(int));
    int arr3[100][2];
    for(int i=0;i<n;i++){
        printf("Enter %d element of array : ",i);
        scanf("%d",&b);
        arr1[i]=b;
        arr2[i]=b;
    }
    printf("RESULT :::: \n");
    for(int x=0;x<n;x++){
        int ctr = 1;
        for(int y=0;y<n;y++){
            if(arr1[x]==arr2[y] && x!=y){
                ctr++;
            }
        }
        arr3[x][0]=arr1[x];
        arr3[x][1]=ctr;    
    }
    for(int i=0;i<n;i++){
        int r=1;
        for(int j=0;j<i;j++){
            if(arr3[i][0]==arr3[j][0] && i!=j){
                r=0;
            }
        }
        if(r){
            printf("Number : %d :: Occurance : %d\n",arr3[i][0],arr3[i][1]);            
        }

    }
    return 0;
}