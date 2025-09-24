#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector <int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int minVal = *min_element(A.begin(), A.end());
        int maxVal = *max_element(A.begin(), A.end());

        cout <<  minVal << " " << maxVal;
return 0;
}