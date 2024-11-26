#include <bits/stdc++.h>
using namespace std;

int findUnion(vector<int> &a, vector<int> &b)
{
    set<int> st;
    for (auto it : a)
        st.insert(it);
    for (auto it : b)
        st.insert(it);
    return st.size();
};