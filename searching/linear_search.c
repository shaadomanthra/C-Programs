/** 
    Linear Search - C Program
   
    Author: Krishna Teja G S
    Website: gatecsprep.com
    Email: packetcode@gmail.com

**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,key,position=-1;
    int *arr;
    
    /* Take the count of number of elements */
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    

    /* Dynamically create memory for array */
    arr = (int*)malloc(sizeof(int)*n);
    
    /* Scan the elements into array */
    printf("Enter the elements with spaces:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    /* Scan the element to be searched */
    printf("\nEnter the element to be searched:\n");
    scanf("%d",&key);
    
    /* Find the element */
    for(i=0;i<n;i++){
        if(arr[i]==key)
            position = i+1;
    }
    
    /* Print the position of element */
    if(position!=-1)
        printf("\nThe position of the element is %d \n",position);
    else
        printf("\nElement not found \n\n");
    
    return 0;
}
