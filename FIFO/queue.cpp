#include <iostream>
#include "queue.h"

using namespace std;

// Queue initialization
Queue::Queue(unsigned int _capacity)
{
    this->capacity = _capacity;
    this->size = 0;
    this->head = 0;
    this->tail = capacity - 1;
    this->itens = new int[this->capacity];
}

int Queue::add(int item)
{
    // Tail 
    if (this->is_full())
    {
        return -1;
    }

    this->tail = (this->tail + 1) % this->capacity;
    this->itens[this->tail] = item;
    this->size++;
    cout << item << " Added" << endl;
    return item;
}

int Queue::take()
{
    // Head
    if (this->is_empty())
    {
        return -1;
    }
    int item = this->itens[this->head];
    this->head = (this->head + 1) % this->capacity;
    this->size--;
    return item;
}


bool Queue::is_full()
{
    if (this->size == this->capacity){
        return true;
    }

    return false;
}

bool Queue::is_empty()
{
    if (this->size == 0)
    {
        return true;
    }

    return false;
}

