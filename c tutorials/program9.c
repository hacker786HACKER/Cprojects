//to give grades to the marks achieved by the student
#include<stdio.h>
int main()
{
    int marks;
    printf("marks:");
    scanf("%d",&marks);
    if(marks>=90 && marks<100)
    {
        printf("grade A+");
    }
    else if(marks<90&& marks>=70)
    {
        printf("grade:A");
    }
    else if(marks<70 && marks>=60)
    {
        printf("grade:B+");
    }
    else if(marks<60 && marks>25)
    {
        printf("grade:B");
    }
    else
    {
        printf("marks are not valid you are fail bastard");
    }
    return 0;
}


// }else if (condition)
// {
//     /* code */
// }
