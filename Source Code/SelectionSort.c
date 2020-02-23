/**
    Selection Algorithm.
    Implemented by Abdus Sukkur.
    Facebook: facebook.com/abdussukkur85
**/

#include<stdio.h>
void selection_sort(int A[], int n){
    int i, j, index_min, temp;

    for(i = 0; i < n-1; i++){
        index_min = i;
        for(j = i+1; j < n; j++){
            if(A[j] < A[index_min]){
                index_min = j;
            }
        }
        if(index_min != i){
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}

int main(){
    int n, i;
    printf("Enter Number of Elements: \n");
    scanf("%d",&n);
    int arr[n-1];

    printf("Enter a some unsorted number: \n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Sorter Output is: ");
    selection_sort(arr,n);
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
