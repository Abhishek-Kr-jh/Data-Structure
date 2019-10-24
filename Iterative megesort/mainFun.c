//Main Function of Iterative merge sort program.
//Name : Abhishek kumar & Shubham singh.
//Reg-No : 18MCMC10 & 18MCMC52

#include<stdio.h>
void merge(int ,int[], int[] , int , int ,int );
int main()
{
    int size;
    printf("Enter size of Array : ");
    scanf("%d",&size);
    if(size<=0)
    {
        printf("Envalid Size : ");
	return 0 ;
    }
    int i,j,Array[size], temp[size],start,end,mid;

    // Reading Elements from user.
    for(i=0;i<size;i++)
    {
        printf("\n Enter %d Element : ",(i+1));
        scanf("%d",&Array[i]);  
        temp[i]=Array[i];	 
    }

    //Displaying Elements before sorting
    printf("\n You Entered Following Elements : ");
    for(i=0;i<size;i++)
    {
        printf("%5d",Array[i]);
    }
    
    
    // logic for calling merge sort function iteratively. 
    
    for(j=1;j<size;j=2*j)
    {
        for(i=0;i<size;i=i+2*j) 
	{
	    start=i;
	    mid=i+j-1; 
            end=(i+2*j -1)< size ? (i+2*j -1):size  ;
	    merge(size,Array,temp,start,mid,end) ;	
	   
     	}
    
    }
    //After iterative merge sorting elements are :
    printf("\n After sorting Elements are : \n\n ");
    for(i=0;i<size;i++)
    {
        printf("%4d",Array[i]);
    }

    printf("\n\n");
    return 0;
}
