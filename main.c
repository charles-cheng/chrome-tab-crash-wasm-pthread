#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *myThreadFun(void *args)
{
    sleep(60 * 60);
    return NULL;
}
  
int main()
{
    int i;
    pthread_t tid;
    pthread_create(&tid, NULL, myThreadFun, NULL);
    return 0;
}
