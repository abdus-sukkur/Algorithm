///Search a number from an array using liner search

///sample input:

/**
    6
    1 5 8 9 4 3
    5

    7
    1 2 3 4 5 6 7
    10
**/

///sample output:

/**
    case 1: 2
    case 2: No
**/

#include<stdio.h>
int main(){
    int arr[100], i,cs=1,key,n;

    while(scanf("%d", &n) != EOF){
         for(i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        scanf("%d", &key);

        for(i=0; i<n; i++){
            if(arr[i] == key){
                break;
            }
        }

        printf("case %d: ",cs);
        cs++;
        if(i==n){
            printf("No\n");
        }else{
            printf("%d\n",i+1);
        }
    }



    return 0;
}
