
#ifndef VECTOR_H
#define VECTOR_H

namespace de300 {
    template <class T> class Vector {
        
        public :
        T a;
        T b;
        
        Vector<T>(T aa, T ba);
        Vector<T> operator+(const Vector<T>& m);
        Vector<T> operator-(const Vector<T>& m);
        Vector<T> operator*(T m);
        Vector<T> operator/(T d);
    };
    
    template <class T>
    Vector<T>::Vector(T aa, T ba) {
        a = aa;
        b = ba;
    }
    
    template <class T>
    Vector<T> Vector<T>::operator+(const Vector<T>& m) {
        Vector result(m.a + a, m.b + b);
        return result;
    }
    
    template <class T>
    Vector<T> Vector<T>::operator-(const Vector<T>& m) {
        Vector result(a - m.a, b - m.b);
        return result;
    }
    
    template <class T>
    Vector<T> Vector<T>::operator*(T m) {
        Vector result(a * m, b * m);
        return result;
    }
    
    template <class T>
    Vector<T> Vector<T>::operator/(T m) {
        Vector result(a / m, b / m);
        return result;
    }
}



#endif
