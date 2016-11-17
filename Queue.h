#ifndef QUEUE_H
#define QUEUE_H

#include "EnqueueException.h"
#include "EmptyQueueException.h"

namespace de300{
    class Queue {
    private:
        class Item {
        public:
            int val;
            Item* next;
            
            Item(int v, Item* n) : val(v), next(n) {};
        };
        
        Item* front;
        Item* end;
        int numItems;
        
    public:
        void enqueue(int x);
        int dequeue();
        int peek();
        bool isEmpty();
        int size();
        Queue() : front(0), end(0), numItems(0) {};
    };
}

#endif