//
// Created by Satori on 2022/10/9.
//

#ifndef P7_RECURSIVEBINARYSEARCH_H
#define P7_RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch {
public:
    RecursiveBinarySearch();
    bool Search(std::vector<int> storage,int intent);
    int binarySearch(std::vector<int> storage,int intent,int begin,int end);
    ~RecursiveBinarySearch();
};

#endif //P7_RECURSIVEBINARYSEARCH_H
