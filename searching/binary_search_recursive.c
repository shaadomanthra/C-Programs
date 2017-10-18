/** 
    Binary Search Recursive - C Program
   
    Author: Krishna Teja G S
    Website: gatecsprep.com
    Email: packetcode@gmail.com

**/
#include <stdio.h>
#include <stdlib.h>

int binary_recursive(int *arr, int low,int high, int key);

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
    
    position = binary_recursive(arr,0,n-1,key);
   
    /* Print the position of element */
    if(position==-1)
        printf("\nElement not found \n\n");
    else
        printf("\nThe position of the element is %d \n",position);
        
    return 0;
    
}


int binary_recursive(int *arr,int low,int high,int key){
    
    int  mid;
    mid = (low+high)/2;
    
    /* Return the position of the element matches with mid */
    if(arr[mid]==key)
        return mid+1;

    /* no element found condition */
    if(high<=low)
        return -1;
    
    /* Recursively call the binary function with change of high and low values */
    if(arr[mid]<key)
        return binary_recursive(arr,mid+1,high,key);
    else 
        return binary_recursive(arr,low,mid-1,key);
      
}
