#include "stdio.h"
#include "omp.h"
//1.omp_set_num_threads
void fn_rter_omp_set_num_threads() {
	int num;
	printf("Enter the number of threads to set: ");
	scanf_s("%d", &num);
	if (num <= 0) {
		printf("Invalid thread count. Using default (2).\n");
		num = 2;
	}
	omp_set_num_threads(num);
#pragma omp parallel
	{

		printf("[omp_set_num_threads] Thread ID: %d\n", omp_get_thread_num());
	}
}

// 2. omp_get_num_threads
void fn_rter_omp_get_num_threads() {
#pragma omp parallel
	{
		printf("[omp_get_num_threads] Total Threads: %d\n", omp_get_num_threads());
	}
}

// 3. omp_get_max_threads
void fn_rter_omp_get_max_threads() {
	printf("[omp_get_max_threads] %d\n", omp_get_max_threads());
}

// 4. omp_get_thread_num
void fn_rter_omp_get_thread_num() {
#pragma omp parallel
	{
		printf("[omp_get_thread_num] Thread ID: %d\n", omp_get_thread_num());
	}
}

// 5. omp_get_num_procs
void fn_rter_omp_get_num_procs() {
	printf("[omp_get_num_procs] %d\n", omp_get_num_procs());
}

// 6.omp_in_parallel
void fn_rter_omp_in_parallel() {
#pragma omp parallel
	{
		if (omp_in_parallel()) {
			printf("Currently in a parallel region.\n");
		}
	}
	printf("\nNot currently in a parallel region.\n");
	printf("\n");
}
//7.omp_set_dynamic
void fn_rter_omp_set_dynamic() {
	omp_set_dynamic(1); // Enables dynamic thread adjustment
}

// 8. omp_get_dynamic
void fn_rter_omp_get_dynamic() {
	printf("[omp_get_dynamic] %d\n", omp_get_dynamic());
}

//10. omp_set_nested
void fn_rter_omp_set_nested() {
	omp_set_nested(1);
}

// 11. omp_get_nested
void fn_rter_omp_get_nested() {
	printf("[omp_get_nested] %d\n", omp_get_nested());
}
