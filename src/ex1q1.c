#include <stdio.h>

int main (void){	

	float v=0, r=0, T=0;	

	while (v == 0 || r == 0 || T == 0) {

		printf("You can enter a placeholder '-1' for values you wish to calculate.\n");
	
		printf("Enter an orbital speed (km/h): ");
		if((scanf("%f", &v) != 1) || v<-1){
			printf("Invalid input!");
			//clearing the buffer
			while (getchar() != '\n');
			v = 0;
			continue;
			}

		printf("Enter an orbital radius (km): ");
		if((scanf("%f", &r) != 1) || r<-1){        
		   	printf("Invalid input!");
        	       	while (getchar() != '\n');
			r = 0;
			continue;
        	}
			
		printf("Enter an orbital time in (h): ");
		if((scanf("%f", &T) != 1) || T<-1){
                       	printf("Invalid input!\n");
                        while (getchar() != '\n');
			T = 0;
			continue;
  		}
		
		// if more than one or no unknown value
		if (((v==-1) + (r==-1) + (T==-1)) != 1 ){
			printf("There must be only one value to be calculated! \n");
			v=0, r=0, T=0;
	
		}
	}
	printf("\nprogram terminaated\n");
	
	


	return 0;

}	
