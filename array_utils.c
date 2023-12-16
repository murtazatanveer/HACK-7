#include<stdio.h>
#include "array_utils.h"

int main(){


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


int *ptr=paddedCopy(arr,oldsize,newsize);

for(int i=0 ; i<newsize ; i++){

printf(" %d ",*ptr);

ptr++;

}

} 


}


