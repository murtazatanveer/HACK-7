#include<stdio.h>
int *pointer();

int main(){

int size=5;
int newsize=3;

int array[5]={100,4,6,8,10};

int n_arr[3];



int *ptr = pointer(array,size,newsize,n_arr);

for(int i=0;i<newsize;i++){

printf(" %d ",*ptr);
ptr++;

}

}

int *pointer(int *arr,int size,int newsize,int *n_arr){


int *cpy = arr;

int *cpy_new=n_arr;

for(int i=0;i<newsize;i++){

*cpy_new = *cpy;

cpy++;

cpy_new++;


}



return n_arr;

}