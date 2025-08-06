#include <stdio.h>
#include <cstdlib>
#include "helloworld_srl.h"
#include "helloworld_prl.h"



int fn_mnudrvprg_010_parallel_construct() {
	int choice;
	while (1) {
		printf("\n\n------------ Menu Driven Program ------------");
		printf("\n\n1. Hello world serial program \n");
		printf("2. Hello world parallel program \n");
		printf("3. Exit \n");
		printf("Enter Your Choice\n");
		scanf_s("%d", &choice);

		switch (choice) {

		case 1:printf("\nThis is the output of Hello world serial program \n");
			fn_helloworld_srl();
			break;

		case 2:printf("\nThis is the output of Hello world parallel program \n");
			fn_helloworld_prl();
			break;

		case 3: printf("\nYou opted Exit program \n");
			exit(0);

		default:printf("\nOpted wrong choice\n");
			break;

		}

	}

	return 0;
}
