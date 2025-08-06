#define METRICS_COLLECTION_H

#include <stdio.h>
#include <omp.h>
#include "ret_tid_helloworld.h"

void metrics_collection() {
    double start, end;
    double ETs, ETp;

    int cores_list[] = { 2, 4, 6, 8, 10, 12, 14, 16 };


    for (int i = 0; i < 8; i++) {
        int cores = cores_list[i];
        omp_set_num_threads(cores);

        // Serial Execution
        start = omp_get_wtime();
        printf("\n\n");
        fn_ret_tid_helloworld_srl();
        end = omp_get_wtime();
        ETs = end - start;

        // Parallel Execution
        start = omp_get_wtime();

        fn_ret_tid_helloworld_prl();
        end = omp_get_wtime();
        ETp = end - start;

        double SU = ETs / ETp;
        double EY = SU / cores;
        printf("\n------------------------------------------------------------\n");
        printf("Sl.No\tCores\tETs\tETp\tSU\tEY\n");
        printf("%d\t%d\t%.4f\t%.4f\t%.4f\t%.4f\n", i + 1, cores, ETs, ETp, SU, EY);
        printf("\n------------------------------------------------------------\n");

    }
}
