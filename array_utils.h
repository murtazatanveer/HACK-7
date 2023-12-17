#include<stdio.h>
#define true 1
#define false 0

/* Q1 : */int contains(const int *arr, int size, int x);

/* Q2 : */int containsWithin( int *arr, int size, int x, int i, int j);

/* Q4 : */void reverse(int *arr, int size);

/* Q3 : */int *paddedCopy();

/* Q5 : */int * reverseCopy(int *arr, int size);


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

// Question No : 3 

int *paddedCopy(int *arr, int oldsize, int newsize,int *new_arr){


int *cpy = arr;

int *cpy_2 = new_arr;

if(newsize > oldsize){

  
for(int i=0;i<newsize;i++){

*cpy_2 = 0;

cpy_2++;

}


}

else{

    
for(int i=0;i<newsize;i++){

 *cpy_2 = *cpy;

cpy++;

cpy_2++;

}

}

return new_arr;

}

// Question No : 5

/*int *reverseCopy(int *arr, int size){

int arr_new[size];

for(int i=(size-1); i>=0 ;i++){

arr_new[i] = *arr;

arr++;

}

return arr_new;

}*/
