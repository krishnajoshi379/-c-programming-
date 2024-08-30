#include<stdio.h>
void main()
{ 
    int num,i,count=0;
    printf(" enter Number:- ");
    scanf("%d", &num);

    for(i+1;num!=0;i++)
    { 
        printf("\nnum %d",num);
        num = num/10;
        count++;
    }
     
      printf("\nnumber of count :- %d",count);
}