#include <stdio.h>

void reverse(int arr[],int l){
    for(int i=0;i<=l/2-1;i++){
        int temp = arr[i];
        arr[i] = arr[l-i-1];
        arr[l-i-1] = temp;
    }
}

int main(){
    int vals[] = {1,2,3,4,5,6,7,8,9};
    int l = sizeof(vals)/4;
    reverse(vals,l);
    for(int i=0;i<l;i++){
        printf("%d\n",vals[i]);
    }
    return 0;
}