     #include<stdio.h>
     void display(int size, int Array[][size])
     {
            int  i,j;
	    for(i=0;i<size;i++)
	    {
		    printf("\n ");
		    for(j=0;j<size;j++)
		    {
			    printf("\t%d ",Array[i][j]);
		    }
	    }
     }
