#include <bits/stdc++.h>
using namespace std;

struct Men {
    int a;
    int b;
};

// comparing 
bool compare(Men x, Men y){
    return x.a < y.b;
}


// print
void printArrayOfStructure(Men A[], int size){
    for(int i=0; i<size; i++){
        cout << "a: " << A[i].a << " ";
        cout << "b: " << A[i].b << " ";

        cout << endl;
    }

    cout << endl;
}


int main(){
    Men A[] = { {5,100}, {3,9}, {3,12}, {1,6}, {5, 12}, {8,16} };
    int size = sizeof(A) / sizeof(A[0]);

    cout << "before sorting: \n";
    printArrayOfStructure(A, size);
    
    cout << "after sorting: \n";
    sort(A, A+size, compare);
    printArrayOfStructure(A, size);

    /* 
    for(int i=0; i<size; i++){
        cout << "a: " << A[i].a << " ";
        cout << "b: " << A[i].b << " ";

        cout << endl;
    }
    */

    return 0;
}
