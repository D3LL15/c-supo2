#include "Queens.h"

namespace de300 {
    Queens::Queens() {
        foundation = 1448;
    }
    
    Queens::Queens(Queens &q) {
        foundation = 1465;
    }
    
    void Queens::operator=(const Queens &q) {
        foundation = 1980;
    }
}


