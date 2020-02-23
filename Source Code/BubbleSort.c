/**
    Bubble Sort Algorithm.
    Implemented by Abdus Sukkur.
    Facebook: facebook.com/abdussukkur85
**/
#include<stdio.h>

void bubble_sort(int A[], int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(){
    int n, i;
    printf("Enter Number of Elements: \n");
    scanf("%d",&n);

    int arr[n-1];

    printf("Enter some unsorted number: \n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Sorter Output is: ");
    bubble_sort(arr,n);
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
