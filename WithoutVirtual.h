namespace de300 {
    class WithoutVirtual {
        
    public :
        int* someInt;
        WithoutVirtual();
        void doSomething();
        
        //since there is not going to be a subclass of this class
        //we don't need to make the destructor virtual because you are only going to
        //ever destroy an object of this class when you call the destructor on an object
        //that may or may not have been casted to this class. This means you're not ignoring
        //a destructor in a subclass since there will be no subclass
        //
        // *there must be a better argument, maybe you could find a way to make the class final?
        ~WithoutVirtual();
    };
}


