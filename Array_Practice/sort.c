#include <stdio.h>

void Bubblesort(int arr[], int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

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

int main(){
    int val[] = {7,1,4,6,8,3,5};
    int l = sizeof(val)/4;
    Insersionsort(val,l);
    for(int i=0;i<l;i++){
        printf("%d , ",val[i]);
    }
    return 0;
}