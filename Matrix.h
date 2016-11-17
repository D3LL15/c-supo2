#include "Vector.h"

#ifndef MATRIX_H
#define MATRIX_H

namespace de300 {
    template <class T> class Matrix {
        
        public :
        T a;
        T b;
        T c;
        T d;
        
        Matrix<T>(T aa, T ba, T ca, T da);
        Matrix<T> operator+(const Matrix<T>& m);
        Matrix<T> operator-(const Matrix<T>& m);
        Matrix<T> operator*(const Matrix<T>& m);
        Vector<T> operator*(const Vector<T>& m);
        Matrix<T> operator*(T m);
        Matrix<T> operator/(T d);
    };
    
    template <class T>
    Matrix<T>::Matrix(T aa, T ba, T ca, T da) {
        a = aa;
        b = ba;
        c = ca;
        d = da;
    }
    
    template <class T>
    Matrix<T> Matrix<T>::operator+(const Matrix<T>& m) {
        Matrix result(m.a + a, m.b + b, m.c + c, m.d + d);
        return result;
    }
    
    template <class T>
    Matrix<T> Matrix<T>::operator-(const Matrix<T>& m) {
        Matrix result(a - m.a, b - m.b, c - m.c, d - m.d);
        return result;
    }
    
    template <class T>
    Matrix<T> Matrix<T>::operator*(const Matrix<T>& m) {
        Matrix<T> result(0,0,0,0);
        
        result.a = a*m.a + b*m.c;
        result.b = a*m.b + b*m.d;
        result.c = c*m.a + d*m.c;
        result.d = c*m.b + d*m.d;
        
        return result;
    }
    
    template <class T>
    Vector<T> Matrix<T>::operator*(const Vector<T>& m) {
        Vector<T> result(0,0);
        
        result.a = a*m.a + b*m.b;
        result.b = c*m.a + d*m.b;
        
        return result;
    }
    
    template <class T>
    Matrix<T> Matrix<T>::operator*(T m) {
        Matrix<T> result(a * m, b * m, c * m, d * m);
        return result;
    }
    
    template <class T>
    Matrix<T> Matrix<T>::operator/(T m) {
        Matrix<T> result(a / m, b / m, c / m, d / m);
        return result;
    }
}


#endif



