// This is a function used to validate magic square
//
  
  int validate(int size , int Array[size][size])
   {
         int rowSum,columnSum,d1=0,i,j,sum=0;
         for(i=0;i<size;i++)
	 {
		 for(j=0;j<size;j++)
		 {
			 if(i+j==size-1)
	            sum=sum+Array[i][j]  ; // Takeing sum of minor diagonal to compare all row, column and major diagonal 
	         }	 
	 }
       
	 for(i=0;i<size;i++)
	 {    rowSum=0;
	      columnSum=0;	 
	      for(j=0;j<size;j++)
	      {
	          rowSum=rowSum+Array[i][j] ;   // Storing sum of all elements in single  row
		  columnSum=columnSum+Array[j][i] ; // Storing sum of all elements in single  column
		  if(i==j)
		  { 
		       d1=d1+Array[i][j] ; // sum of major digonal
		  }
		  
	      }
	     
	      if(rowSum!=sum||columnSum!=sum)   // comparison sum of row and sum of column is  equal to sum of minor diagonal or not
		      return 0 ;
	 }


	 if(d1!=sum)  // comparison of major diagonal is equal to minor diagonal or not.
              return 0;

	 return sum ;
   }
