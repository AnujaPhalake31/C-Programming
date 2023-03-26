#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;

    ptr = (int *)realloc(NULL,5 * sizeof(int));        

    realloc(ptr,0);     

    return 0;
}






