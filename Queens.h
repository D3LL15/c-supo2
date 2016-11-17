#ifndef QUEENS_H
#define QUEENS_H

namespace de300 {
    class Queens {
        
        public :
        int foundation;
        
        void operator=(const Queens &q);
        Queens();
        Queens(Queens &q);
        
    };
}

#endif


