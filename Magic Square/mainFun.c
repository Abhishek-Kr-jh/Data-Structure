//Name : Abhishek kumar & subham singh
//Regeistration no :18MCMC10  & 18MCMC52
//This program is used to genrate a magic square
//
#include<stdio.h>
void magic(int, int [][0]);
void display(int, int [][0]);
int validate(int , int [][0]);
int main()
{
       int size;
       printf("Enter size of the magic square. : ");
       scanf("%d",&size);
       //checking given number is odd or nagative.
       if(size<0 || size%2 ==0)
       {
          printf("Invalid input.\n");
	  return 0;
	
       }
       int Array[size][size];
       magic(size,Array);  // Magic fuction call
       display(size,Array); // Display function call
                
       int k=validate(size,Array) ;
       if(k==0)
       {
            printf("\n This is not a valid magic Square\n \n  ");

       }
       else
       {
            printf("\n\nThis is a valid  magic square.");
	    printf("\n\nSum  of Each row,column and diagonals is : %d\n\n ",k) ;
       }

       return 0;
}
