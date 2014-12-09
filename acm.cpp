#include<iostream>
using namespace std;
int main() {
    int n,flag,t;
    long long int i,j,e,s;
    cin >> t;
    while(t!=0) {
        t--;
        cin >> e;
        cin >> s;
        cin >> n;
        flag=0;
        while(n!=0)
        {
            cin >> i;
            cin >> j;
            if((i<=e && j>e)||(i>e && i<s)){
                flag=1;
                break;
            }
            n--;
        }
        if(flag==1){
        cout << "NO" << endl;}
        else{
        cout << "YES" << endl;}
    }
    return 0;
}
