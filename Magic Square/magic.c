void magic(int size, int Array[size][size])
{
     int i,r,j,c;
     r=0;
     c=size/2;
     // For filling all element of array 0.
     for(i=0;i<size;i++)
     {
         for(j=0;j<size;j++)
          {
             Array[i][j]=0;
          }
     }
     for(i=1;i<=size*size;i++)
     {
	  Array[r][c]=i ;
          r--;
          c++;
          //checking digonal element
	  if(r<0 && c>=size)
	   {
	       r=r+2;
	       c=c-1;
	   }
	  // If row gows negative
           else if(r<0)
	   {
	       r=size-1;
	   }
          // If column goes negative            
           else if(c>=size)
	   {
               c=0;
	   }
	   // checking element is present in the field  or not.
           else if(Array[r][c]!=0)
            {
	       r=r+2;
	       c=c-1;
	    }
	  
    }

}
