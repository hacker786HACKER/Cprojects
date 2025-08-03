//to check acharecter is a upper or lower case
#include<stdio.h>
int main()
{
    int chare;
    printf("enter chare:");
    scanf("%d",&chare);
    if(chare>='A' && chare< 'Z'){
        printf("upper");
    }else if(chare>='a' && chare<'z'){
        printf("lower");
    }else{
        printf("not a valid charecter ");
    }
    return 0;
}