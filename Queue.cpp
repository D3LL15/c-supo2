#include "Queue.h"

namespace de300{
    void Queue::enqueue(int x) {
        if (x > 42) {
            throw EnqueueException(x);
        }
        Item *i = new Item(x, 0);
        if (isEmpty()) {
            front = i;
            end = i;
        } else {
            end->next = i;
            end = i;
        }
        numItems++;
    }
    
    int Queue::dequeue() {
        if (isEmpty()) {
            throw EmptyQueueException();
        }
        if (end == front) {
            end = 0;
        }
        Item *i = front;
        int result = i->val;
        front = i->next;
        delete i;
        numItems--;
        return result;
    }
    
    int Queue::peek() {
        if (isEmpty()) {
            throw EmptyQueueException();
        }
        return front->val;
    }
    
    bool Queue::isEmpty() {
        return (numItems == 0);
    }
    
    int Queue::size() {
        return numItems;
    }
}