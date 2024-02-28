#include <stdio.h>
int main(){
    int arr[][3] = {
        {10, 20, 30},
        {50, 60, 70},
        {90, 100, 110}
    }, i, j;

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i){
        for(j = 0; j < 3; ++j){
            printf("%d\n", arr[i][j]);
        }
    }

    return 0;
}
