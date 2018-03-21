#include<stdio.h>
#include<stdlib.h>


void main(){
	
	printf("\n");
	
	int min = 2, max = 6;
	
	for(int k=0; k<2; k++){
		for(int j=1; j<11; j++){
			for(int i=min; i<max; i++){
					
				printf("%i X %i = %i\t", i, j, i*j);
				
			}
			printf("\n");
		}
		min = max;
		max += 4;
		printf("\n");
	}
	
	
	printf("\n\n");
}


/*

	for(int i=2; i<10; i++){
		for(int j=1; j<11; j++){
				
			printf("%i X %i = %i\n", i, j, i*j);
			
		}
		printf("\n");
	}

*/