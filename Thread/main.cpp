#include <pthread.h>
#include <iostream>

using namespace std;


void *print_hello(void *thread_id);

int main(void)
{
    pthread_t my_threads[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        cout << "Creating Thread: " << i << endl;
        int rc = pthread_create(&my_threads[i], NULL, print_hello, (void*)i);

        if (rc)
        {
            cout << "Error creating thread: " << rc << endl;
            exit(-1);
        }
    }

    pthread_exit(NULL);
    return 0;
}

void *print_hello(void *_thread_id)
{
    long thread_id;
    thread_id  = *((long*)_thread_id);
    cout << "Hello World -> " << thread_id << endl;

    pthread_exit(NULL);    
}