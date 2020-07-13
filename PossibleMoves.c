//Yaren Sönmez - 330099
//Introduction To Programming 
//Assignment 2: Finding Possible Moves Of Knight On Chess Table

#include<stdio.h>

int main() {
	printf("Finding The Possible Moves of A Knight\n\n");
	printf("HERE IS THE CHESS TABLE DOWN BELOW:\n\n");
	int matrix[8][8] ={0}; 								  // 8x8 matrise 0 atan dizi tanýmlandý
	int i,j;
	
    for (i=0; i<8; i++) { 					 			  	//Diziyi ekrana yazdýrmak için for döngüsü yapýldý.
    	for (j=0; j<8; j++) {
    		printf(" %d " , matrix[i][j]);
		}
			printf("\n\n");
	}  
	
	int a,b; 											   	 //Satýr ve sütun deðerleri tanýmlandý.
	printf("Please enter a row number[1-8]:");
	scanf("%d", &a);
	printf("Please enter a column number[1-8]:");
	scanf("%d", &b);
	printf("\n\n");
	
	if (a>8 || a < 0 || b < 0 || b>8) {    				    //Geçerli deðer girilmemesi durumunda yapýlmasý gereken iþlem tanýmlandý. 
		printf ("You entered invalid values. Please restart the program and enter the values between [1-8].");
		return 0;
	}
	
	else {
		printf("The Location You Choose For Knight:\n");
		matrix[a-1][b-1]=1;                      			//At için seçilen konum kullanýcýdan alýndý ve o konuma 1 yerleþtirildi.
	
		for (i=0; i<8; i++) {
    		for (j=0; j<8; j++) {
    		printf(" %d ", matrix[i][j]);
			}
			printf("\n\n");
		} 
	
 															
	    if (a<9 && a>2 && b<9 && b>1) {						//Saðlayan konumlara geçerli aralýklar ve deðerler tanýmlandý.
		    matrix[a-3][b-2]=2; 							//Saðlayan konumlar 2 olarak tanýmlandý.
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
	    for (i=0; i<8; i++) {        		      		  //if ile tanýmlanan olasý komutlar yine for döngüsü ile ortak bir matris üzerinde tanýmlandý.
    	    for (j=0; j<8; j++) { 
    		    printf(" %d ", matrix[i][j]); 
    	    }
	    	printf("\n\n");
	   }
	   printf("Possible moves are shown by 2.");
    }
	return 0;
}
