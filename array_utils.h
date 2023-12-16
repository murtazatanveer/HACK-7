#include<stdio.h>
#define true 1
#define false 0

/* Q1 : */int contains(const int *arr, int size, int x);
/* Q2 : */int containsWithin( int *arr, int size, int x, int i, int j);
/* Q4 : */void reverse(int *arr, int size);


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

int containsWithin( int *arr, int size, int x, int i, int j){

int *ptr=arr+j;

for(arr = (arr+i) ; arr <= ptr ; arr++){

if(x==*arr){

return true;

}

}

return false;

}

// Question No : 4

void reverse(int *arr, int size){





}



