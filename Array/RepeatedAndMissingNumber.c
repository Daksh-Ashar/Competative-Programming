/******************************************************************************

      Find the Reapting and Missing number

*******************************************************************************/
#include <stdio.h>

int main()
{
    /*Enter the number of testcases*/
    int  T;
    scanf("%d",&T);
    
    while(T--)
    {
        int i,j,A_Size;
        /*Take Array size as Input*/
        scanf("%d",&A_Size);
        
        /*Creating the array of the size input given by the user*/
        int Arr[A_Size];
        
        /* Taking the Input for Array*/
        for(i=0;i<A_Size;i++)
        {
            scanf("%d",&Arr[i]);
        }
        
        /*Creating a New array of to store the count of elements in User submitted array*/
        int N = A_Size + 1;                                             
        int B[10000] = {0};                                                 /*Initialze array size with zero*/
        
       /* Looping once through user array and store the count of that element in given index  */
       /* Element Arr = { 1,3,3,4} count of Element 3 in the given user array will be stored in 3 index of B Array*/
       
        for(i=0;i<A_Size;i++)
        {
            B[Arr[i]]++;
        }
        
        /* To find the element repeated the count will be greater than 1*/
        
        for(j=1;j<N;j++)
        {
            if(B[j]>1)
            {
                printf("Repeated Element: %d\t",j);
            }
        }
        
        printf("\n");
        
        /* To find missing element count will be zero */
        for(j=1;j<N;j++)
        {
            if(B[j]==0)
            {
                printf("Missing Element: %d\t",j);
            }
        }
        
        
        
    }

    return 0;
}



/* Example Output*/
/*   1 
     4
     1 2 4 4
     Repeated Element: 4
     Missing Element: 3  
*/

/* where ,  First line is the Numver of test case Input 
           Second line is the size of the Array
           Last line is the elements of the Array
*/
