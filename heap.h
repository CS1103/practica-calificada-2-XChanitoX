//
// Created by rudri on 10/10/2019.
//

#ifndef CS1103_PC2_201902_HEAP_H
#define CS1103_PC2_201902_HEAP_H

#include "Archivo.h"

template <typename T>
class maxheap{
private:
    maxheap <T> numeros;

public:
    maxheap(const maxheap <T> &numeros) : numeros(numeros) {}

    T get_max (){
        return *begin(numeros);
    };

    void clean(){
        numeros.clean();
    }

    void heapify(maxheap <T> &v, int n, int i) {
        int largo = i;
        int izquierda = 2 * i + 1;
        int derecha = 2 * i + 2;

        if ((izquierda < n) and (v[izquierda] > v[largo])) {
            largo = izquierda;
        }

        if ((derecha < n) and (v[derecha] > v[largo])) {
            largo = derecha;
        }

        if (largo != i) {
            swap(v[i], v[largo]);

            heapify(v, n, largo);
        }
    }

    void heapSort(maxheap <T> &v) {
        int n = v.size();
        for (int i = n / 2 - 1; i >= 0; --i) {
            heapify(v, n, i);
        }

        for (int j = n - 1; j >= 0; --j) {
            swap(v[0], v[j]);
            heapify(v, j, 0);
        }
    }

    void insert (T item){
        numeros.push_back(item);
        sort(begin(numeros), end(numeros), greater<T>());
    }

    void Heap() {
        heapSort(numeros);
    }

    void print() {
        cout << "Numeros:\n";
        for (auto i = numeros.begin(); i != numeros.end(); i++)
            cout << *i << " ";
        cout << endl;
    }

    T operator[](int index) {
        auto i = numeros.begin();
        return *i;
    }
// Sobrecarga del operador <<
    friend ostream& operator<< (ostream& out, const maxheap<T> heap) {
        for(auto& i : heap.v)
            out << i << " ";

        return out;
    }
// Sobrecarga del operador >>
    friend istream& operator>> (istream& in, maxheap<T>& heap) {
        cout << "\nIngrese el numero: ";
        in >> heap.numeros;
        heap.v.push_back(heap.numeros);
        return in;
    }
};

#endif //CS1103_PC2_201902_HEAP_H