//
// Created by Satori on 2022/10/9.
//

#ifndef P7_BUBBLESORT_H
#define P7_BUBBLESORT_H
#include "Sort.h"
#include <vector>

class BubbleSort: public Sort {

public:
    BubbleSort();
    void sort(std::vector<int> storage); //In fact this is gambling behavior, it should be said that I do not know whether there is a need for a &
    ~BubbleSort();
};

#endif //P7_BUBBLESORT_H