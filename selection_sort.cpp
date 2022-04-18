#include <stdio.h>

int main(){
    int array[10] = {1, 10, 8, 7, 5, 6, 3, 4, 2, 9};

    int temp, index;
    bool change;
    int length = sizeof(array) / sizeof(array[0]);
    for (int i=0; i<length; i++){
        int min_value = array[i];
        change = false;
        for (int j=i+1; j<length; j++){
            if (array[j] < min_value){
                min_value = array[j];
                index = j;
                change = true;
            }
        }
        if (change){
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
        } else{
            //pass
        }
    }

    for (int i=0; i<length; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
