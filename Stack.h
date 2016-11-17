#ifndef STACK_H
#define STACK_H

namespace de300 {
    template <class T> class Stack {
    private:
        
        class Item {
        public:
            T val;
            Item* next;
            
            Item(T v) : val(v), next(0) {}
        };
        
        Item* head;
        
        public :
        Stack() : head(0) {}
        ~Stack();
        void pop();
        void push(T val);
        T getHead();
    };
    
    template <class T>
    Stack<T>::~Stack() {
        //deallocate everything
        Item *current;
        current = head;
        while (current != 0) {
            Item *temp = current;
            current = temp->next;
            delete temp;
        }
    }
    
    template <class T>
    void Stack<T>::pop() {
        //remove top element and deallocate
        Item *cull = head;
        head = head->next;
        delete cull;
    }
    
    template <class T>
    void Stack<T>::push(T val) {
        //add a new element to the top of the stack
        Item *newItem = new Item(val);
        newItem->next = head;
        head = newItem;
    }
    
    template <class T>
    T Stack<T>::getHead() {
        //return the value of the top element
        return head->val;
    }
}


#endif



