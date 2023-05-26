#ifndef H_RGI // should not be defined any place else 
#define H_RGI // same const value as for ifndef directive

// Add minimal needed header files here ..
#include<vector>        //vector
#include<iostream>      //cout, endl
#include<cstdlib>       //rand, srand
#include<algorithm>     //sort()
#include<iomanip>       //setw()

// You need to declare these two functions ...
void genRndNums(std::vector<int> &v, int num);
void printVec(const std::vector<int> &v);

#endif
