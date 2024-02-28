/*
10 20 30
50 60 70
90 100 110
*/
#include <stdio.h>
int main(){
    int c = 3;
    int arr[][3] = {
        {10, 20, 0},
        {50, 60, 40},
        {90, 100, 80}
    }, i, j;

    int k = sizeof(arr)/sizeof(arr[0]);

    for(i = 0; i < k; ++i){
        int sum = 0;
        for(j = 0; j < c-1; ++j){
            sum+= arr[i][j];
        }
        sum -= arr[i][c-1];
        arr[i][c-1] = sum;
    }

    for(i = 0; i < k; ++i){
        for(j = 0; j < 3; ++j){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
