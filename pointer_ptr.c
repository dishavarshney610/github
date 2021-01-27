#include <stdio.h>

int main(void) 
{
    int num=5, *ptr=&num;
    
    printf("\n%d" ,*&num);
    printf("\n%d" ,*&*&num);
    printf("\n%d" , *&ptr);
    printf("\n%d" , **&ptr);
    printf("\n%d" , &**&ptr);

}   