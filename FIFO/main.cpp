// This program creates a FIFO (First - In - First - Out class)
#include <iostream>
#include <malloc.h>

class FIFO
{
    private:
        int* data;
        int head, tail;

    public:

        FIFO(unsigned int n)
        {
            this->data = (int*) malloc(n * sizeof(int));
            this->head = 0;
            this->tail = 0;
        }

        bool is_empty()
        {
            bool result = false;
            if (this->tail == this->head)
            {
                result = true;
            }
            return result;
        }

        bool is_full()
        {
            return this->tail >= 100? true : false;
        }

        bool add(int number)
        {
            if (is_full())
            {
                return false;
            }

            *(this->data + this->tail) = number;
            this->tail++;
            return true;
        }

        bool pop()
        {
            if (is_empty())
            {
                return false;
            }
    
            this->head++;
            
            return true;
        }

        int get_data()
        {
            return *(this->data + this->head);
        }

        void clear()
        {
            free(this->data);
            this->head = 0;
            this->tail = 0;
        }

        void print_elements()
        {
            int i;
            for (i = this->head; i < this->tail; i++)
            {
                printf("Element: %d\n", *(this->data + i));
            }
        }
};

int main(void)
{
    FIFO my_fifo = FIFO(100);
    my_fifo.add(2);
    my_fifo.add(100);
    printf("First Element: %d\n", my_fifo.get_data());
    if (my_fifo.pop())
    {
        printf("First Element: %d\n", my_fifo.get_data());
    }

    for (int i = 0; i < 100; i = i + 5)
    {
        if (!my_fifo.add(i))
        {
            break;
        }
    }

    my_fifo.print_elements();

    my_fifo.clear();

        for (int i = 0; i < 100; i = i + 5)
        {
            if (!my_fifo.add(i))
            {
                break;
            }
        }

    my_fifo.print_elements();
    
    return 0;
}