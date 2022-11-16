#include <stdio.h>
#include <omp.h>

int main()
{
  int id, i;
  omp_lock_t lck;
  omp_init_lock(&lck);
  #pragma omp parallel
  {
    id = omp_get_thread_num();
    #pragma omp for
    for(i = 0; i < 7; i++)
    {
      omp_set_lock(&lck);
      printf("\n thread id %d iteration %d", id, i);
      omp_unset_lock(&lck);
    }
  }
    omp_destroy_lock(&lck);
return 0;
}
  