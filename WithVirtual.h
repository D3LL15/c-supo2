namespace de300 {
    class WithVirtual {
        
        public :
        int* someInt;
        WithVirtual();
        
        //doSomething is implemented by a subclass that contains fields that are
        //located on the heap. As such the destructor needs to be virtual otherwise
        //the destructor of the subclass wouldn't be called when deleting it after
        //casting it as a WithVirtual object, meaning the heap objects wouldn't be
        //deallocated, causing a memory leak.
        virtual void doSomething();
        void setInt(int x);
        virtual ~WithVirtual();
    };
}



