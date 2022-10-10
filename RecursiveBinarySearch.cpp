//
// Created by Satori on 2022/10/9.
//

#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;

RecursiveBinarySearch::RecursiveBinarySearch(){}

bool RecursiveBinarySearch::Search(std::vector<int> storage, int intent) {
    return binarySearch(storage,intent,0,storage.size()-1); //If the q1 of the main file is wrong, you can change that side to 1 or this side to 1, but you can't change both (all changes will cause problems)
}

int RecursiveBinarySearch::binarySearch(std::vector<int> storage,int intent,int begin,int end){
    if(begin>end){
        return -1; //-1 can help check bounds and return position 0
    }
    int midpoint = (begin+end)/2;
    if(storage.at(midpoint)>intent){
        return binarySearch(storage,intent,begin,midpoint-1); //Find the left side of a vector
    }
    else if(storage.at(midpoint)<intent){
        return binarySearch(storage,intent,midpoint+1,end); //right side
    }
    else{
        return midpoint; // midpoint
    }
}

RecursiveBinarySearch::~RecursiveBinarySearch() {}
