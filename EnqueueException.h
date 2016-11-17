#ifndef ENQUEUEEXCEPTION_H
#define ENQUEUEEXCEPTION_H

class EnqueueException {
public:
    int errorCode;
    EnqueueException(int i) : errorCode(i) {};
};

#endif