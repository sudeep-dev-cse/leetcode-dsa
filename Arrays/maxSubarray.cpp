#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSubArray(vector<int> &arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

