// This program made to help my friend's school project
// So it was done simple on purpose
#include <stdio.h>

int main(){
	
	char menu[120] = "\n==== Menu ==== \nSelect Hoop\n1) Hoop 1 (Easy)\n2) Hoop 2 (Medium)\n3) Hoop 3 (Hard)\n4) Exit\n\nSelect: ";
	int option, possibility, shootCounter, i;
	
	while(option != 4){
		int successfulShot = 0;
		
		printf("%s", menu);
		scanf("%d", &option);
		
		switch(option){
			case 1:
				printf("\nHow many shots do you want to take?: ");
				scanf("%d", &shootCounter);

				srand(time(NULL));

				for(i=0; i<shootCounter; i++){
					possibility = rand() % 10;

					printf("\n%d. Atis: ", i+1);
					if(possibility >= 3){
						printf("Success.");
						successfulShot++;
					}else
						printf("Failed.");
				}
				printf("\n");
				break;
				
			case 2:
				printf("\nHow many shots do you want to take?: ");
				scanf("%d", &shootCounter);

				srand(time(NULL));

				for(i=0; i<shootCounter; i++){
					possibility = rand() % 10;

					printf("\n%d. Atis: ", i+1);
					if(possibility >= 5){
						printf("Success.");
						successfulShot++;
					}else
						printf("Failed.");
				}
				printf("\n");
				break;
				
			case 3:
				printf("\nHow many shots do you want to take?: ");
				scanf("%d", &shootCounter);

				srand(time(NULL));

				for(i=0; i<shootCounter; i++){
					possibility = rand() % 10;

					printf("\n%d. Atis: ", i+1);
					if(possibility >= 7){
						printf("Success.");
						successfulShot++;
					}else
						printf("Failed.");
				}
				printf("\n");
				break;

			default:
				break;
		}
		printf("\n--- Successful Shots: %d --- \n", successfulShot);
	}
}