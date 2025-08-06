
#include<stdio.h>
#include<stdlib.h>
#include"ret_et_helloworld.h"
#include"ret_et_helloworld_par.h"
#include"ret_tid_helloworld.h"



int fn_anudrvprg_020_runtime_environment_routines()
{

	int choice;
	while (1) {

		printf("############################################################################################\n\n");
		printf("List of choice\n\n");
		printf("0: Exit\t 1:Serial ET\t 2:Parallel ET\t 3:Serial TID\t 4:Parallel TID\n\n");
		printf("############################################################################################\n\n");


		printf("Enter your choice\n");
		scanf_s("%d", &choice);

		switch (choice) {

		case 0:
			printf("You opted to exit program\n");
			exit(0);

		case 1:
			//printf("This is output of hello world serial\n");
			fn_ret_et_helloworld_srl();
			break;

		case 2:
			//printf("This is output of hello world parallel\n");
			fn_ret_et_helloworld_par();
			break;

		case 3:
			//printf("This is output of hello")
			fn_ret_tid_helloworld_srl();
			break;

		case 4:
			fn_ret_tid_helloworld_prl();
			break;

		default:
			printf("Opted wrong choice");

		}
	}


	return 0;
}
