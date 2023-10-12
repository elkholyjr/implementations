#include <bits/stdc++.h>
#define fr(n) for(int i=0;i<n;i++)
using namespace std;
#include "Stack.h"
typedef long long ll;
const long N = 1000000007;
typedef pair<int,int> ii;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int t,x;
int c;
cin>>t;
Stack test;
while(t--){
    cout<<"this is a stack implementation with oop\n";
    cout<<"if you want to add element press 1\n"
          "if you want to pop element press 2\n"
          "if you want to check if it is empty press 3\n"
          "if you want the top of your elements press 4\n";
    cin>>c;
    switch (c) {
        case 1:
            cout<<"enter the element you want to add\n";
            cin>>x;
            test.push(x);
            break;
        case 2:
            test.pop();
            break;
        case 3:
            if(test.isEmpty()){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
            break;
        case 4:
            cout<<"your top element is : "<<test.Top();
            break;
    }
}
return 0;
}


