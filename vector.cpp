// Vectors are dynamic array (whose size is not fixed)
// INTERSECTION OF ARRAY
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3,3, 4, 6};
    vector<int> brr{0, 2, 3,3,3,7, 8};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = -1;
                ans.push_back(arr[i]);
                break;
            }
        }
    }
    for (auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}
