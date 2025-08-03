//to check the result of the student
#include<stdio.h>
int main()
{
    int marks;
    printf("marks:");
    scanf("%d",&marks);
    if(marks>25){
        printf("pass");
    }else{
        printf("fail");
    }
    return  0;

}