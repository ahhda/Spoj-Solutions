#include<iostream>
#include<math.h>
using namespace std;
int main() {
    float f,d,e;
    long long int t,i,j,k,l,m,n;
    cin >> t;
    while(t) {
        t--;
        cin >> k;
        f=(sqrt((8*k)+1)-1)/2;
        m=ceil(f);
        l=m*(m+1)/2;
        j=l-k;
        if(m%2==0)
        cout << "TERM " << k << " IS " << m-j << "/" << 1+j << endl;
        else
        cout << "TERM " << k << " IS " << 1+j << "/" << m-j << endl;
    }
    return 0;
}
