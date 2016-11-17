#include <iostream>

#include "Matrix.h"
#include "Vector.h"
#include "Stack.h"
#include "Queens.h"
#include "Queue.h"

using namespace de300;
using namespace std;

void question2 () {
    Matrix<int> a(1,2,3,4);
    Matrix<int> b(4,3,2,1);
    Matrix<int> c(0,0,0,0);
    
    c = a * b;
    
    cout << "multiplying 2 matrices" << "\n"<< c.a<< "\n"<< c.b<< "\n"<< c.c<< "\n"<< c.d << "\n";
}

void question3 () {
    Matrix<int> a(1,2,3,4);
    Vector<int> v1(1,2);
    Vector<int> v2(0,0);
    
    v2 = a * v1;
    
    cout << "multiplying a matrix by a vector" << "\n"<< v2.a<< "\n"<< v2.b << "\n";
}

void question5 () {
    Stack<int> myStack;
    
    myStack.push(3);
    myStack.push(4);
    int s1 = myStack.getHead();
    myStack.pop();
    int s2 = myStack.getHead();
    myStack.pop();
    
    cout << "stack heads" << "\n"<< s1<< "\n"<< s2 << "\n";
}

void question6() {
    Queens p;
    cout << "Queens’ College foundation (p): " << p.foundation << endl;
    Queens q = p;
    cout << "Queens’ College foundation (q): " << q.foundation << endl;
    Queens r;
    r = p;
    cout << "Queens’ College foundation (r): " << r.foundation << endl;
}

void question7() {
    Queue myQueue;
    
    myQueue.enqueue(5);
    myQueue.enqueue(6);
    myQueue.enqueue(7);
    cout << "queue size after 3 enqueues: " << myQueue.size() << endl;
    int x = myQueue.dequeue();
    cout << x <<endl;
    int y = myQueue.dequeue();
    cout << y <<endl;
    int z1 = myQueue.peek();
    cout << z1 <<endl;
    int z2 = myQueue.dequeue();
    cout << z2 << endl;
    
    try {
        myQueue.enqueue(50);
    } catch (EnqueueException e) {
        cout << "error code when enqueueing 50: " << e.errorCode <<endl;
    }
    
    try {
        x = myQueue.dequeue();
    } catch (EmptyQueueException e) {
        cout << "Successfully threw exception when dequeueing an empty queue" << endl;
    }
}

int main(int argc, const char * argv[]) {
    question2();
    question3();
    question5();
    question6();
    question7();
    return 0;
}
