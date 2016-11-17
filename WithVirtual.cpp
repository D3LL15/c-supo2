#include "WithVirtual.h"

namespace de300 {
    
    WithVirtual::WithVirtual() {
        *someInt = 0;
    }
    
    void WithVirtual::setInt(int x) {
        *someInt = x;
    }
    
    WithVirtual::~WithVirtual() {
        delete someInt;
    }
}



