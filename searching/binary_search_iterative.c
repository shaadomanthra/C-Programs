/** 
    Binary Search Iterative- C Program
   
    Author: Krishna Teja G S
    Website: gatecsprep.com
    Email: packetcode@gmail.com

**/
#include <stdio.h>
#include <stdlib.h>

int binary(int *arr, int size, int key);

int main()
{
    int n,i,key,position;
    int *arr;
    
    /* Take the count of number of elements */
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    
    /* Dynamically create memory for array */
    arr = (int*)malloc(sizeof(int)*n);
    
    /* Scan the elements into array */
    printf("Enter the elements with spaces in assending order:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    /* Scan the element to be searched */
    printf("\nEnter the element to be searched:\n");
    scanf("%d",&key);
    
    position = binary(arr,n,key);
   
    /* Print the position of element */
    if(position==-1)
        printf("\nElement not found \n\n");
    else
        printf("\nThe position of the element is %d \n",position);
        
    return 0;
    
}


int binary(int *arr,int size,int key){
    
    int low=0,high=size-1, mid;
    
    /* Find the element */
    while(low<=high){
        /* mid element */
        mid = (low+high)/2;
    
        /* return the element if found */
        if(arr[mid]==key)
            return mid+1;
       
        /* change the high or low  according to key element */
        if(arr[mid]<key)
            low=mid+1;
        else 
            high=mid-1;
    }
    
    /* return -1 if no element found */
    return -1;
    
}
