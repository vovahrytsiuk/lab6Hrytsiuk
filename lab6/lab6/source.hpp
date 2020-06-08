//
//  source.hpp
//  lab6
//
//  Created by Volodymyr on 6/8/20.
//  Copyright © 2020 Volodymyr Hrytsiuk. All rights reserved.
//

#ifndef source_hpp
#define source_hpp

#include <stdio.h>

#include <iostream>
#include <string>

using namespace std;


template<class T>
class container{
    // динамічний масив відповідних елементів
    int size;
    T* arr;
    int index;
public:
    container(int size){
        this->size = size;
        arr = new T[size];
        index = 0;
    }
    T& operator[](const int i){
        return arr[i];
    }
    int get_size(){return index;}
    
    void add_element(T value){
        if(index < size){
        arr[index] = value;
        index++;
        }
        else{
            int newsize = size*2;
            T* newarr = new T[newsize];
            index = 0;
            for(; index < size; index++){
                newarr[index] = arr[index];
            }
            newarr[index+1] = value;
            index++;
            delete[] arr;
            arr = newarr;
            size = newsize;
        }
    }
    
    void selection_sort(){
        for (size_t idx_i = 0; idx_i < size - 1; idx_i++)
               {
                   size_t min_idx = idx_i;
               
                   for (size_t idx_j = idx_i + 1; idx_j < size; idx_j++)
                   {
                       if (arr[idx_j] < arr[min_idx])
                       {
                        min_idx = idx_j;
                       }
                   }

                   if (min_idx != idx_i)
                   {
                       T temp = arr[min_idx];
                       arr[min_idx] = arr[idx_i];
                       arr[idx_i] = temp;
                   }
               }
    }
    void print(){
        for(int i = 0; i < index; i++){
                   cout << arr[i] << " " ;
               }
               cout << endl;
    }
    
    
    ~container(){
        delete[] arr;
    }
};




#endif /* source_hpp */
