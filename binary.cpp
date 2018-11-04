#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <iostream>

class boolean {
    private:
        char* array;
        int size;
    
    public:
        boolean(int size):size{size} {
            // TODO
            this->array = new char[size/8+1];
        }
        
        void bitOn(int position) {
            // TODO
            this->array[position/8] |= (1 <<(position %8));
        }
             
        void bitOff(int position) {
            // TODO
            this->array[position/8] &= ~(1 << (position%8));
        }
             
        bool operator[](int position) {
            // TODO
            return this->array[(int) position/8] & (1<<(position%8));
        }
    
        void clear() {    
            // TODO
            for(int i = 0, tam = size / 8; i < tam; i++)
                array[i] = 0;
        }

        void print() {
            std::cout<<'\n';
            for(int i = 0; i < size; i++)
                std::cout<<(*this)[i];
        }
             
        ~boolean() {
            // TODO
            delete [] array;
        }
};

#endif