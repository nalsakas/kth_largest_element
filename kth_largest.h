#include <vector>

/* kth largest element in an array */
int kth_largest(std::vector<int> &a, int k)
{
    int j = a.size();

    while (j >= a.size() - k)
    {
        int i = 0;
        while(i < j - 1)
        {
            if (a[i] > a[i+1])
            {
                int tmp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = tmp;
            }
            i += 1;
        }
        j -= 1;
    }

    return a[a.size() - k];
}