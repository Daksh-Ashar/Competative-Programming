/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int size,i,a[100];
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int min = a[0] , max = a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
        
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    
    printf("Min : %d  and Max : %d",min ,max);

    return 0;
}

