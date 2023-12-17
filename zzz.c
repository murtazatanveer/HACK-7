#include <stdio.h>
int *modifyArray(int *arr, int size) ;


int main() {
    int myArray[5] = {1, 2, 3, 4, 5};
    int size =5;

    printf("Original array values: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }


    int *resultPtr = modifyArray(myArray, size);

    printf("\nModified array values: ");
    for (int i = 0; i < size; i++) {

        printf("%d ", *resultPtr);
        resultPtr++;

    }

    return 0;
}

int *modifyArray(int *arr, int size) {

    int *cpy=arr;

    for (int i = 0; i < size; i++) {
        *cpy = *cpy * 2 ; 
        cpy++;
    }
    
    return arr; 
}