
#include "kth_largest.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cout << "kth largest element of array" << endl;
    vector<int> a = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << kth_largest(a, k) << endl;

    return 0;
}