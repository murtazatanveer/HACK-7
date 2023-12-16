#include<stdio.h>
#define true 1
#define false 0

// Exercises : Question No 1

int contains(const int *arr, int size, int x);

int contains(const int *arr, int size, int x){

for(int i=0;i<size;i++){

if(*arr == x){

return true;

}

arr++;

}

return false;

}




