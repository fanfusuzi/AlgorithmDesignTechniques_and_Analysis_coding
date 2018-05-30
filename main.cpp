#include <iostream>

#include "Chapter1/LinearSearch.h"
#include "Chapter1/BinSearch.h"
#include "Chapter1/MeageList.h"
#include "Chapter1/SelectedSort.h"
#include "Chapter1/InsertionSort.h"
#include "Chapter1/BUTTONUPSORT.h"
#include "DynamicProgramming/LCS.h"
#include "DynamicProgramming/MATCHAIN.h"
#include "Chapter6/QuickSort.h"

using namespace std;

int main() {

    //int a[] = {0,1,2,5,47,87,12,34,0,21,78};
    //int b[] = {0,0,0,0,0,0,0,0,0,0};
    //int k = linearsearch(a,8,34);
    //int k = BinSearch(a,8,34);
    //Merge(a,1,5,9);
    //SelectionSort(a,10);
    //InsertionSort(a,11);
    //ButtonUpSort(a,10);
    //char a[] = "zxyxyz";
    //char b[] = "xyyzx";
    //int result = LSC(a,b,6,5);
    //int a[] = {0,5,10,4,6,10,2};
    //int result = MatChain(a,5);
    //cout << "the result is " << result <<endl;


    int a[] = {5,2,1,3,10,7,3,2};
    QuickSort(a,0,7);
    for(int i = 0;i <= 7;i ++)
        cout << a[i] << " ";

    return 0;



}