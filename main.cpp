#include <iostream>

#include "Chapter1/LinearSearch.h"
#include "Chapter1/BinSearch.h"
#include "Chapter1/MeageList.h"
#include "Chapter1/SelectedSort.h"
#include "Chapter1/InsertionSort.h"


using namespace std;

int main() {

    int a[] = {0,1,2,0,5,47,87,12,34,0,56,78};
    int b[] = {0,0,0,0,0,0,0,0,0,0};
    //int k = linearsearch(a,8,34);
    //int k = BinSearch(a,8,34);
    //Merge(a,b,5,9);
    //SelectionSort(a,10);
    InsertionSort(a,11);
    for(int i = 1;i <= 11;i++)
        cout << "the array is " << a[i] <<endl;
    return 0;

}