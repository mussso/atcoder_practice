#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 123; 
    int &b = a;  // int型変数aへの参照

    string s = "apg4b";
    string &t = s;  // string型変数sへの参照

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> &w = v;  // vector<int>型変数vへの参照

    pair<string, int> p;
    p = make_pair("aaa", 23);

    vector<int> jjj;
    jjj = {1,3,5,6};

    vector<int> iii;
    iii = {2,4,7,9};

    tuple<int, bool, string> ttt;
    ttt = make_tuple(3, true, "aaaa");

    string h;
    h = "aaaa";

    for (auto y: jjj){
        for (auto i: iii){
            cout << "y:" << y << ",i:" << i << endl;
        }
    }

    vector<tuple<int, int, int>> mm;
    mm.push_back(make_tuple(3, 1, 1));
    mm.push_back(make_tuple(1, 2, 100));

}