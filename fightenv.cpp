#include<bits/stdc++.h>

using namespace std;

int main(void){
    int card,env;
    cin>>card>>env;

    cout<<(env-1)/card+1;//这是重点减一加一法，适用于如分人总不能半个的东西 有余数必进一

    return 0;
}