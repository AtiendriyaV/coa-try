#include <omp.h>
#include <stdio.h>

int main()
{
int i;
#pragma omp parallel num_threads(4)
{
#pragma omp for schedule(guided,3)
for(int i=0;i<20;i++)
printf("\nIteration %d run by thread %d",i,omp_get_thread_num());
}
}