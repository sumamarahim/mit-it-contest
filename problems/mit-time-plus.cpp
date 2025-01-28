// Problem Link: https://mitit.org/Contest/ViewProblem/mit-plus?cid=beginner-2025

#include <bits/stdc++.h>
using namespace std;

void printarr(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
}

int main() {
    int t;
    cin >> t;

    vector<string> sts(t);
    for (int i = 0; i < t; ++i) {
        int len;
        cin >> len >> sts[i];
    }

    for (const string& st : sts) {
        int j = 0;
        int n = st.length();
        bool valid = true;

        while (j < n) {
            if (st[j] != 'M') {
                valid = false;
                break;
            }
            j++;

            if (j + 1 >= n || st[j] != 'I' || st[j + 1] != 'T') {
                valid = false;
                break;
            }
            j += 2;

            while (j + 1 < n && st[j] == 'I' && st[j + 1] == 'T') {
                j += 2;
            }
        }

        if(valid){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
