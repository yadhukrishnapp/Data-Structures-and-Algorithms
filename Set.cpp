#include<bits/stdc++.h>
#include<set>
#include<algorithm>

using namespace std;

void setDemo() // Set by default arranges all the elements in ascending order
{
    set<int> S;
    S.insert(1); // Time complexity is in O(log N)
    S.insert(2);
    S.insert(3);
    S.insert(-1);
    S.insert(-10);

    for(int x : S)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    auto it1 = S.find(-1);
    if(it1 == S.end())
    {
        cout<<"Not present\n";
    }
    else{
        cout<<"Present\n";
        cout<<*it1<<endl;
    }

    auto it2 = S.lower_bound(-1);
    cout<<*it2<<endl;

    auto it3 = S.upper_bound(2);
    auto it4 = S.upper_bound(0);
    cout<<*it3<<" "<<*it4<<endl;

    auto it5 = S.upper_bound(4);
    if(it5 == S.end())
    {
        cout<<"Oops! can't find anything like that\n"<<endl;
    }
    else{
        cout<<*it5<<endl;
    }

    S.erase(-1);
    for(int x:S)
    {
        cout<<x<<" ";
    }
    
}

int main()
{
    setDemo();

    return 0;
}
