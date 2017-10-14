#include <stdio.h>
#include <stdlib.h>

int binary(int *arr, int low,int high, int key);
int* bubble(int *arr,int n);

int main()
{
    int n,i,q,key;
    int *arr;
    int *pos;
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    
    
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    if(a[0>a[1]])
    arr = bubble(arr,n);
    
    scanf("%d",&q);
    pos = (int*)malloc(sizeof(int)*q);
    
    for(i=0;i<q;i++)
    {
        scanf("%d",&key);
        pos[i]=binary(arr,0,n-1,key);
        
    }    
    
    for(i=0;i<q;i++)
    {
        printf("\n%d\n",pos[i]);
    }
    
    
    return 0;
}

int* bubble(int *a, int n){
    int i,j,temp;
    for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
    }
    
    return a;
        
}

int binary(int *arr,int low,int high,int key){
    
    int mid;
    
    while(low<=high){
        mid = (low+high)/2;
    
        if(arr[mid]==key)
            return mid+1;
       
        if(arr[mid]<key){
            low=mid+1;
        }
            
        else {
            high=mid-1;
        }
    }
    return -1;
    
}
