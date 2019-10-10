//
// Created by utec on 10/10/19.
//

#ifndef PRACTICA_CALIFICADA_2_XCHANITOX_MASTER_ARCHIVO_H
#define PRACTICA_CALIFICADA_2_XCHANITOX_MASTER_ARCHIVO_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
typedef std::vector<int>::iterator itr;

template <typename A>
class Archivo {
private:
    A Numero;
    fstream* data;
    vector<A> numero;
public:
    Archivo() {}

    void Lectura(A numero){
        ifstream data;
        data.open(Numero, ios::in);
    }
};

#endif //PRACTICA_CALIFICADA_2_XCHANITOX_MASTER_ARCHIVO_H
