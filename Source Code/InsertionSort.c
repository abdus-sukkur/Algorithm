/**
    Insertion Sort Algorithm.
    Implemented by Abdus Sukkur.
    Facebook: facebook.com/abdussukkur85
**/
#include<stdio.h>

void insertion_sort(int A[], int n){
    int i, j, item;

    for(i = 1; i < n; i++){
        item = A[i];
        j = i - 1;
        while(j>=0 && A[j]>item){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = item;
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
    insertion_sort(arr,n);
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
