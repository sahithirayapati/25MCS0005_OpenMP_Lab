
#include "stdio.h"
#include "omp.h"

float ETserial, ETparallel;
double speedup;
float Efficiency;
int no_of_cores;

void fn_rer_practice1_srl() {

	double start, end;

	start = omp_get_wtime();
	printf("Hello world serial = %d \n", omp_get_thread_num());
	end = omp_get_wtime();
	printf("Execution time for the serial of Hello world is : %f \n", end - start);
	ETserial = end - start;
}

void fn_rer_practice1_prl() {

	double start, end;
	start = omp_get_wtime();
#pragma omp parallel
	printf("Hello world parallel = %d \n", omp_get_thread_num());
	end = omp_get_wtime();
	printf("Execution time for the parallel of Hello world is : %f \n", end - start);

	ETparallel = end - start;
}

void fn_rer_practice_speedup() {


	speedup = (ETserial / ETparallel);
	printf("SpeedUp is : %f \n", speedup);
}

void fn_rer_practice_efficiency() {

	no_of_cores = omp_get_max_threads();
	Efficiency = ((speedup / no_of_cores) * 100);
	printf("Efficiancy = %f \n", Efficiency);
}
