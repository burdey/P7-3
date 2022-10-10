//
// Created by Satori on 2022/10/9.
//

#ifndef P7_SORT_H
#define P7_SORT_H
#include <vector>

class Sort{
public:
    Sort(){};
    virtual std::vector<int> sort(){}; //I don't know if I can use pure virtual functions, but if I use it, my main file will not work
    virtual void sort(std::vector<int>){}; //Actually I prefer to use pure virtual functions, but I still can't build a good list
    void swap(int&a, int&b){  //Here we can pre-fabricate a function and save it in other files.
        int temp = a;
        a = b;
        b = temp;
    };
    ~Sort(){};
};


#endif //P7_SORT_H
