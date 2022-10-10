//
// Created by Satori on 2022/10/9.
//

#include "QuickSort.h"
#include <vector>
using namespace std;

QuickSort::QuickSort() {}

void QuickSort::sort(vector<int> &storage,int begin,int end) {
    if (begin<end){
        int index = (begin+end)/2;
        int newPoint = Search(storage,index,begin,end);
        int oldPoint = Search(storage,index,index,end);
        sort(storage,begin,newPoint-1); //Guaranteed to reduce newpoint by 1
        sort(storage,newPoint+1,end); //Guaranteed to add newpoint by 1
    }
}

int QuickSort::Search(vector<int> &storage,int index,int begin,int end) {
    int new_point = begin; //Creating these variables in advance can save you a lot of trouble, just like the previous swap
    int pivot = storage.at(begin+3);
    int value = storage.at(index);
    swap(storage.at(index), storage.at(end));

    for (int i=begin;i<=end-1;i++) {
        if (storage.at(i) <= value) {
            swap(storage.at(i), storage.at(new_point)); //If there is no swap before, you need to write a few more lines, and it is quite confusing
            new_point++; //
        }
    }
    swap(storage.at(new_point),storage.at(end)); //same as above
    return new_point;
}

QuickSort::~QuickSort() {}