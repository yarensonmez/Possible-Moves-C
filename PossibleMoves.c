//Yaren S�nmez - 330099
//Introduction To Programming 
//Assignment 2: Finding Possible Moves Of Knight On Chess Table

#include<stdio.h>

int main() {
	printf("Finding The Possible Moves of A Knight\n\n");
	printf("HERE IS THE CHESS TABLE DOWN BELOW:\n\n");
	int matrix[8][8] ={0}; 								  // 8x8 matrise 0 atan dizi tan�mland�
	int i,j;
	
    for (i=0; i<8; i++) { 					 			  	//Diziyi ekrana yazd�rmak i�in for d�ng�s� yap�ld�.
    	for (j=0; j<8; j++) {
    		printf(" %d " , matrix[i][j]);
		}
			printf("\n\n");
	}  
	
	int a,b; 											   	 //Sat�r ve s�tun de�erleri tan�mland�.
	printf("Please enter a row number[1-8]:");
	scanf("%d", &a);
	printf("Please enter a column number[1-8]:");
	scanf("%d", &b);
	printf("\n\n");
	
	if (a>8 || a < 0 || b < 0 || b>8) {    				    //Ge�erli de�er girilmemesi durumunda yap�lmas� gereken i�lem tan�mland�. 
		printf ("You entered invalid values. Please restart the program and enter the values between [1-8].");
		return 0;
	}
	
	else {
		printf("The Location You Choose For Knight:\n");
		matrix[a-1][b-1]=1;                      			//At i�in se�ilen konum kullan�c�dan al�nd� ve o konuma 1 yerle�tirildi.
	
		for (i=0; i<8; i++) {
    		for (j=0; j<8; j++) {
    		printf(" %d ", matrix[i][j]);
			}
			printf("\n\n");
		} 
	
 															
	    if (a<9 && a>2 && b<9 && b>1) {						//Sa�layan konumlara ge�erli aral�klar ve de�erler tan�mland�.
		    matrix[a-3][b-2]=2; 							//Sa�layan konumlar 2 olarak tan�mland�.
			}
		    
		if (a<9 && a>1 && b<9 && b>2) {
		    matrix[a-2][b-3]=2;
			}
		
		if (a<9 && a>1 && b<7 && b>-2) {
		    matrix[a-2][b+1]=2;
			}
		
		if (a<7 && a>-2 && b<9 && b>1)	{                     						
		    matrix[a+1][b-2]=2;
			}
		
		if (a<8 && a>-1 && b<7 && b>-2)	{          
		    matrix[a][b+1]=2;
			}
		
		if (a<7 && a>-2 && b<8 && b>-1) {
		    matrix[a+1][b]=2;
			}
		
		if (a<8 && a>-1 && b<9 && b>2) {
		    matrix[a][b-3]=2;
			}
		
		if (a<9 && a>2 && b<8 && b>-1) {
		    matrix[a-3][b]=2;
			}
	    
	    printf("Possible Moves The Knight Can Do:\n\n");      
	    for (i=0; i<8; i++) {        		      		  //if ile tan�mlanan olas� komutlar yine for d�ng�s� ile ortak bir matris �zerinde tan�mland�.
    	    for (j=0; j<8; j++) { 
    		    printf(" %d ", matrix[i][j]); 
    	    }
	    	printf("\n\n");
	   }
	   printf("Possible moves are shown by 2.");
    }
	return 0;
}
