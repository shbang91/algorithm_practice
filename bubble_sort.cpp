#include<stdio.h>

int main(){
    int array[10] = {1, 10, 8, 7, 5, 6, 3, 4, 2, 9};

    int length = sizeof(array) / sizeof(array[0]);
    for (int i=0; i<length; i++){
        for (int j=0; j<length-1-i; j++){
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for (int i=0; i<length; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
