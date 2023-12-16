#include<stdio.h>
#define true 1
#define false 0

int contains(const int *arr, int size, int x);
int containsWithin(const int *arr, int size, int x, int i, int j);


// Exercises : Question No 1

int contains(const int *arr, int size, int x){

for(int i=0;i<size;i++){

if(*arr == x){

return true;

}

arr++;

}

return false;

}

// Question No : 2


int containsWithin(const int *arr, int size, int x, int i, int j){





    
}



