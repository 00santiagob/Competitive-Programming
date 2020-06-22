#include<bits/stdc++.h>

using namespace std;

long long cantAnswers(long long N) {
    long long K = 2, res = 0;
    while(K*K*K <= N) {
        res += N/(K*K*K);
        K++;
    }
    return res; 
}

int main() {
    long long m;
    cin >> m;
    long long minN = 1, maxN = 10000000000000000;
    while(maxN-minN > 1) {
        long long medN = (maxN+minN)/2;
        if(cantAnswers(medN) < m) {
            minN = medN;
        } else {
            maxN = medN;
        }
    }
    if(cantAnswers(maxN) == m) {
        cout << maxN << endl;
    } else {
        cout << -1 << endl;
    }
}
