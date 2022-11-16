#include "omp.h"
#include "stdio.h"
int main()
{
#pragma omp parallel
printf("Number of threads is %d\n",omp_get_num_threads());
}