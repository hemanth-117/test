#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int px,py,qx,qy;
        cin >> px >> py >> qx >> qy;
        vector<int>a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long double temp = 0;
        for(int i = 0; i < n; i++) temp += a[i];
        long double ans = 0;
        ans += sqrt((px - qx) * (px - qx) + (py - qy) * (py - qy));
        if(temp >= ans){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        cout << "hi" << endl;
        cout << "hi main" << endl;
        cout << "branch check" << endl;
        cout << "branch check 2" << endl;

       

    }
}