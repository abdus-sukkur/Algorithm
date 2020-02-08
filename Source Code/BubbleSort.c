///Bubble Sort
/**
    Sort an array

    input:
        5
        8 3 1 6 2

    output:
        1 2 3 6 8
**/

#include<stdio.h>
int main(){
    int arr[5] = {8, 3, 1, 6, 2};
    int i,j,k,n,temp;
    n = 5;
    i = 0;

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(k=0; k<n; k++){
        printf("%d ",arr[k]);
    }

    return 0;
}
