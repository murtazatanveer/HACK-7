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

printf("\nResult : %s",contains(arr , size , x));

}



}
