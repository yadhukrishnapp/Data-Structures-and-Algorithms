#include<bits/stdc++.h>
#include<set>
#include<algorithm>

using namespace std;

void PowerOfSTL()
{
    set<pair<int, int>>S;
    S.insert({401, 450});
    S.insert({10, 20});
    S.insert({2, 3});
    S.insert({30, 400});

    int point = 11;

    auto it1 = S.upper_bound({point, INT_MAX});
    it1--;
    
    pair<int, int> current = *it1;
    if(current.first <= point && point <= current.second)
    {
        cout<<"Yes it is present : "<<current.first<<" "<<current.second<<endl;
    }
    else{
        cout<<"The given point is not lying in any interval\n";
    }


}

int main()
{
    PowerOfSTL();
    return 0;
}
