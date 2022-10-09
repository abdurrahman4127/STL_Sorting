#include <bits/stdc++.h>
using namespace std;

void printArray(int A[], int N){
    for(int i=0; i<N; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}


int main(){
    int N; cin >> N;

    int A[N];
    for (auto &i : A){
        cin >> i;
    }

    cout << "before sorting: \n";
    printArray(A, N);

    cout << "after sorting in ascending order: \n";
    // ascending sort 
    sort(A, A + N);
    printArray(A, N);

    cout << "after sorting in descending order: \n";
    // descending sort 
    sort(A, A + N, greater<int>());
    printArray(A, N);

    return 0;
}