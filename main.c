#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maths;
    int physics;
    int chemistry;
    int total;
    int total2;
    printf("\t\tDO YOU QUALIFY FOR AN ENGINEERING COURSE?\n");
    printf("Enter your Maths marks: ");
    scanf("%d",&maths);
    printf("Enter your Physics marks: ");
    scanf("%d",&physics);
    printf("Enter your Chemistry marks: ");
    scanf("%d",&chemistry);

    total2 = maths+physics;
    total = maths+physics+chemistry;
    if(maths>=65 && physics>=55 && chemistry>=60 && total>=180)
    {
        printf("\nYou are eligible for an engineering course\n");
    }
    else if(total2>=140)
    {
        printf("\nYou are eligible for an engineering course\n");
    }
    else
    {
        printf("\nSorry, you are not eligible\n");
    }
    return 0;
}
