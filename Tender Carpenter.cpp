﻿#include <iostream>
#include <vector>
using namespace std;
int isTriangle(vector<int>& a, int n)
{
    bool found = false;
    int count = 0;
    if (n == 2) {
        count = 2;

    }
    else
    {
        for (int i = 0; i < n - 2; i++) {
            for (int j = i; j < n - 2; j++) {
                if (a[j + 1] + a[j + 2] > a[j] && a[j + 2] + a[j] > a[j + 1] && a[j] + a[j + 1] > a[j + 2])
                {
                    count++;
                    found = true;
                    break;
                }
                if (count >= 2)
                {
                    break;  
                }
            }
        }
        return count;
    }
}
int main(){
    int T,n;
    cin >> T;
    while (T--) {
        cin >> n;
        bool found = false;
        vector<int>a(n);
        for (int i = 0;i< n;i++) {
            cin >>a[i];
        }
         int Triangle = isTriangle(a,n);
        if(Triangle < 2){
            cout<<"NO"<<endl;
         }else {
            cout<<"YES"<<endl;
         }
    }
}