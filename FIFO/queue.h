class Queue{
    public:
        int size, head, tail;
        unsigned int capacity;
        int *itens;

        // Builder
        Queue(unsigned int _capacity);
        int add(int item);
        int take();
        bool is_full();
        bool is_empty();
};