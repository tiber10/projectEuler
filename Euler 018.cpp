#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v, off;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                v.push_back(x);
                off.push_back(i);
            }
        }

        int N = v.size(); 
        vector<int> maxSum(N, INT_MIN); 
        maxSum[0] = v[0]; 

        for (int i = 0; i < N; i++) {
            int level = off[i];
            int left_child = i + level + 1;
            int right_child = i + level + 2;

            if (left_child < N) {
                if (maxSum[left_child] < maxSum[i] + v[left_child]) {
                    maxSum[left_child] = maxSum[i] + v[left_child];
                }
            }

            if (right_child < N) {
                if (maxSum[right_child] < maxSum[i] + v[right_child]) {
                    maxSum[right_child] = maxSum[i] + v[right_child];
                }
            }
        }

        int M = INT_MIN;
        for (int i = 0; i < N; i++) {
            int level = off[i];
            int left_child = i + level + 1;
            int right_child = i + level + 2;

            
            if (left_child >= N && right_child >= N) {
                if (maxSum[i] > M) {
                    M = maxSum[i];
                }
            }
        }

        cout << M << endl;
    }
    return 0;
}
