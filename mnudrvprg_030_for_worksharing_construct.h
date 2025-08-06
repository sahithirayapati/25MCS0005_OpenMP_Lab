#include <stdio.h>
#include <omp.h>
#include"030_wsc_for_pp1.h"
#include"031_wsc_for_num_square.h"

int fn_mnudrvprg_030_for_worksharing_construct() {

	int choice;
	while(1){
		printf("\n//-------- Loop Worksharing Menu --------//\n");
		printf("1.Worksharing with Two Construct\n");
		printf("2.Worksharing with One Construct\n");
		printf("3.Worksharing for Number Square with Serial Execution\n");
		printf("4.Worksharing for Number Square with Parallel Execution\n");
		
		printf("0.Exit....\n");

		printf("Enter your Choice\n");
		scanf_s("%d", &choice);

		switch (choice) {

		case 1: fn_wsc_for_2constructs();
			break;

		case 2: fn_wsc_for_1construct();
			break;

		case 3: fn_num_square_srl();
			break;

		case 4:
		{
			fn_num_square_prl();
			fn_num_square_speedup_efficiency();
		}
			break;

		case 0: return 0;

		default: printf("Invalid Choice.........\n");
			break;

		}

	} 

	return 0;

}
