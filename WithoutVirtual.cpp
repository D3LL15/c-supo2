#include "Vector.h"
#include "WithoutVirtual.h"
#include <iostream>

namespace de300 {
        
    WithoutVirtual::WithoutVirtual() {
        *someInt = 0;
    }
        
    void WithoutVirtual::doSomething() {
        std::cout<<"Hello World\n";
    }
    
    WithoutVirtual::~WithoutVirtual() {
        delete someInt;
    }
}