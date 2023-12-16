#include<stdio.h>
#define true 1
#define false 0

/* Q1 : */int contains(const int *arr, int size, int x);
/* Q2 : */int containsWithin( int *arr, int size, int x, int i, int j);
/* Q4 : */void reverse(int *arr, int size);
/* Q3 : */int *paddedCopy(const int *arr, int oldsize, int newsize);


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

int condition;

if(size%2==0){

    condition = size / 2;

}

else{

condition = (size-1) / 2;

}

int *cpy = arr;
int *cpy_2 = arr;
int temp;

for(int i=0; i<condition; i++){

temp = *arr;

*arr = *(cpy + (size-1-i));

*(cpy + (size-1-i)) = temp;

arr++;

}

printf("\nAfter Reverse of array its elements are : ");

for(int i=0; i<size; i++){

printf(" %d ",*cpy_2);

cpy_2++;

}

}

