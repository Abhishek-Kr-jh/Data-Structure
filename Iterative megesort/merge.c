//Merge function 
//
  void merge(int size,int Array[],int temp[], int start, int mid , int end )
  {
     int i=start ;
     int k=i;
     int j=mid+1;
     while(i<=mid && j<=end) 
     {
        if(Array[i]<Array[j])
	{
	   temp[k]=Array[i];
	   k++;
	   i++;
	}
	else
	{
	   temp[k]=Array[j] ;
	   k++;
	   j++;
	}
     } 
     while(i<=mid)
     {
        	temp[k++] = Array[i++];
     }

    while(j<=end)
    {
	    temp[k++] = Array[j++];
    } 

     for( i=start;i<=end;i++)
     {
        Array[i]=temp[i] ;
     }
  }
