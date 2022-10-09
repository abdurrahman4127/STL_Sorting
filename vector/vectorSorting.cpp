#include <bits/stdc++.h>
using namespace std;


// print
void printVector(vector <int> &v){
    for (auto &i : v){
        cout << i << " ";
    }

    cout << endl;
}


int main(){
    vector <int> v;

    v.push_back(10);
    v.push_back(9);
    v.push_back(11);
    v.push_back(8);
    v.push_back(4);

    cout << "before sorting: \n";
    printVector(v);
    
    cout << "after ascending sort: \n";
    sort(v.begin(), v.end());
    printVector(v);

    cout << "after decending sort: \n";
    sort(v.rbegin(), v.rend());
    printVector(v);

    return 0;
}
