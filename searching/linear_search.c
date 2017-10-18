/** 
    Linear Search - C Program
   
    Author: Krishna Teja G S
    Website: gatecsprep.com
    Email: packetcode@gmail.com

**/

#include <stdio.h>
#include <stdlib.h>

int linear_search(int arr[],int size,int key);


int linear_search(int arr[],int size,int key){
 
    int position = -1,i;
    
     /* Find the element */
    for(i=0;i<size;i++){
        if(arr[i]==key)
            position = i+1;
    }
    
    return position; 
}

int main()
{
    int i,n,key,position;
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
    
    /* Call the linear search function */
    position = linear_search(arr,n,key);
    
    /* Print the position of element */
    if(position!=-1)
        printf("\nThe position of the element is %d \n",position);
    else
        printf("\nElement not found \n\n");
    
    return 0;
}




