﻿// git.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
struct vector {
    int* array;
    unsigned int size;
};
vector init_vector(unsigned int size) {
    vector mas;
    mas.array = new int[size];
    mas.size = size;

    for (unsigned int i = 0; i < size; ++i) {
        mas.array[i] = rand() % 56;

    }
    return mas;
}
void resizeUP_vector(vector* mas, unsigned int size) {
    int* tmp = new int[mas->size];
    for (unsigned int i = 0; i < mas->size; ++i) {
        tmp[i] = mas->array[i];
    }
    delete[] mas->array;
    mas->array = new int[size];
    for (unsigned int i = 0; i < mas->size; ++i) {
        mas->array[i] = tmp[i];
    }
    mas->size += 1;
}
int main()
{
    vector mas = init_vector(4);
}

