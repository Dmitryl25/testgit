#include <stdio.h>

int main()
{
    int year;
    float changes;
    int newbranch1;
    scanf("%d", &year);
    if(year%4 == 0 && year%100 != 0 || year%400 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }
}