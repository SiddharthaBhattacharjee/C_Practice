#include <stdio.h>

void Insersionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int serch(int arr[],int l,int a){
    Insersionsort(arr,l);
    int F = 0 , L = l-1;
    while(L>=F){
        int m = (F+L)/2;
        if(arr[m]==a){
            return m;
        }
        else if(arr[m]>a){
            L = m-1;
        }
        else{
            F = m+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,4,2,66,43,23,17,69,44,24,52};
    int l = sizeof(arr)/4;
    int v,p;
    while(1){
        printf("Enter integer to be searched in arr : ");
        scanf("%d",&v);
        p = serch(arr,l,v);
        printf("Element %d found at index : %d\n",v,p);
    }
    return 0;
}