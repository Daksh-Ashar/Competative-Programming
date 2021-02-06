/******************************************************************************
                                 Bubble Sort
*******************************************************************************/

/******************************************************************************
 Input :
 6               <-----  Input array size 
 6 5 4 3 2 1     <----- Input array   
 
 Output: 
 1 2 3 4 5 6     <----- output array
 ******************************************************************************/
#include <stdio.h>

int main()
{
    long int n;
    /* Input the size of the array */
    scanf("%ld",&n);
    
    long int arr[n];
    int i,j,temp;
    /* Take array elements input */
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    
    /*For N size array , N - 1 iterations will be performed */ 
    for(i=0;i<n;i++)
    {
        /*for i th Iteration , N-i comparsion will be made */
        /* For example: N=5 and 2nd iteration, number of comaprison in 3rd iteration will be N-i i.e. 5-2 = 3 */
        /* element wilth index 0,1,2 will be compared since further element are sorted */
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    
    /*Output sorted array */
    for(i=0;i<n;i++)
    {
        printf("%ld ",arr[i]);
    }
    return 0;
}
