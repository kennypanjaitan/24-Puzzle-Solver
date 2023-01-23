// PERMUTATION ALGORITHM

#ifndef PERMUTE_HPP
#define PERMUTE_HPP
using namespace std;

// Check if the permutation is not yet inserted
bool validPermute(vector<double> arr, int start, int end, vector<vector<double>> result)
{
    for (int i = 0; i < result.size(); i++)
    {
        // cout << result[i][0];
        if (arr == result[i])
        {
            return false;
        }
    }
    return true;
}

void permutasi(vector<double> arr, int start, int end, vector<vector<double>> &result) 
{
    if (start == end) 
    {
        if (validPermute(arr, start, end, result))
        {
            result.push_back(arr);
        }
    } else 
    {
        for (int i = start; i < end; i++) 
        {
            swap(arr[start], arr[i]);
            permutasi(arr, start + 1, end, result);
            swap(arr[start], arr[i]);
        }
    }
}

#endif