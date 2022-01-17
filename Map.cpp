#include<bits/stdc++.h>
#include<map>

using namespace std;

void mapDemo()
{
    map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[100000232] = 1;

    map<char, int> cnt;
    string x = "Yadhu Krishna P P";

    for(char c:x)
    {
        cnt[c]++;
    }
    cout<<cnt['a']<<" "<<cnt['P']<<" "<<cnt['z']<<endl;

}

int main()
{
    mapDemo();
    return 0;
}
