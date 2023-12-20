#include<stdio.h>
#include<stdlib.h>
#include "array_utils.h"

#define true 1
#define false 0

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

int containsWithin( const int *arr, int size, int x, int i, int j){

int *arr_cpy=arr;

int *ptr=arr_cpy+j;


for(arr_cpy = (arr_cpy+i) ; arr_cpy <= ptr ; arr_cpy++){

if(x==*arr_cpy){

return true;

}

}

return false;

}

// Question No : 4

void reverse(int *arr, int size){

    int rev_arr[size];

    int *cpy_arr = arr;

for(int i=(size-1); i>=0; i-- ){

rev_arr[i] = *cpy_arr;
cpy_arr++;

}

for(int i=0;i<size;i++){

*arr = rev_arr[i];

    arr++;
}


}

// Question No : 3 

int *paddedCopy(const *arr, int oldsize, int newsize){



int *dyn_arr = (int*) malloc(4*newsize);

if(newsize > oldsize){

  
for(int i=0;i<newsize;i++){

dyn_arr[i] = 0;

}


}

else{

    
for(int i=0;i<newsize;i++){

 dyn_arr[i] = arr[i];

}

}

return dyn_arr;

}


// Question No : 5

int *reverseCopy(const *arr, int size){

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

temp = *cpy;

*cpy = *(cpy_2 + (size-1-i));

*(cpy_2 + (size-1-i)) = temp;

cpy++;

}

return arr;

}



/*int main(){


int choice;
printf("\nWhich Question of Exercises you want to solve (1-5) : ");
scanf("%d",&choice);


// Question : 1
if(choice==1){

int size;
printf("\nEnter size of your array : ");
scanf("%d",&size);

int arr[size];

printf("\nEnter Elements of Your array with widespace : ");

for(int i=0;i<size;i++){

scanf("%d",&arr[i]);

}

int x;
printf("\nEnter Element of array you want to search : ");
scanf("%d",&x);

printf("\nResult : %d",contains(arr , size , x));

}


// Question NO : 2

if(choice==2){

int size;
printf("\nEnter size of your array : ");
scanf("%d",&size);

int arr[size];

printf("\nEnter Elements of Your array with widespace : ");

for(int i=0;i<size;i++){

scanf("%d",&arr[i]);

}

int i;
printf("\nEnter Point at which search starts (index) : ");
scanf("%d",&i);

int j;
printf("\nEnter Ending Point (index) : ");
scanf("%d",&j);


int x;
printf("\nEnter Element of array you want to search : ");
scanf("%d",&x);

printf("\nResult : %d",containsWithin(arr, size, x, i, j));

}

// Question : 4

if(choice==4){

int size;
printf("\nEnter size of your array : ");
scanf("%d",&size);

int arr[size];

printf("\nEnter Elements of Your array with widespace : ");

for(int i=0;i<size;i++){

scanf("%d",&arr[i]);

}

reverse(arr,size);

}

// Question : 3


if(choice==3){

int oldsize;
printf("\nEnter size of your array : ");
scanf("%d",&oldsize);

int arr[oldsize];

printf("\nEnter Elements of Your array with widespace : ");

for(int i=0;i<oldsize;i++){

scanf("%d",&arr[i]);

}

printf("\nEnter size of your new array : ");

int newsize;
scanf("%d",&newsize);

int new_arr[newsize];

int *ptr = paddedCopy(arr,oldsize,newsize,new_arr);

printf("\nAfter Copying, Elements of new array is : ");

for(int i=0;i<newsize;i++){

printf(" %d ",*ptr);

ptr++;

}

}


// Question : 5


if(choice==5){

int size;
printf("\nEnter size of your array : ");
scanf("%d",&size);

int arr[size];

printf("\nEnter Elements of Your array with widespace : ");

for(int i=0;i<size;i++){

scanf("%d",&arr[i]);

}

printf("\nReverse of array is :");

int *p = reverseCopy(arr,size);

for(int i = 0; i<size;i++){

printf(" %d ",*p);

p++;

}

}

}*/


