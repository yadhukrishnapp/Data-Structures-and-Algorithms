#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int x, int y)
{
    return x > y;
}

int main()
{
    vector<int> A = {11, 2, 3, 14};
    cout<<A[1]<<endl;

    // Time complexity of sort is O(NlogN)
    sort(A.begin(), A.end()); 

    // Time complexity of Binary Search is O(logN)
    bool present = binary_search(A.begin(), A.end(), 3); // true
    cout << present << endl;
    present = binary_search(A.begin(), A.end(), 5); // false
    cout<< present << endl;

    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100); // true

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    // vector<int>::iterator it1 = lower_bound(A.begin(), A.end(), 100); // >=  which means here 100 will be printed
    auto it1 = lower_bound(A.begin(), A.end(), 100); // >=  which means here 100 will be printed
    // vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // =   which means here 123 will be printed
    auto it2 = upper_bound(A.begin(), A.end(), 100); // =   which means here 123 will be printed

    cout << *it1 << " " << *it2 << endl;
    cout << it2 - it1 << endl; //5
    
    sort(A.begin(), A.end(), f);

    for(int x : A)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    for(int &x : A) // reference
    {
        x++;
        cout<<x<<" ";
    }
    cout<<endl;


    return 0;
}
