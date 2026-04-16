#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {2, 4, 3, 5, 7, 8};
    int n = 6, target = 7;

    unordered_set<int> s;

    for(int i = 0; i < n; i++) {
        int second = target - arr[i];

        if(s.find(second) != s.end()) {
            cout << "Pair: (" << arr[i] << ", " << second << ")" << endl;
        }

        s.insert(arr[i]);
    }

    return 0;
}