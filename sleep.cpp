#include<bits/stdc++.h>

using namespace std;
//今天你睡够了吗？
int main(void){
    float SleepTime;
    bool enough;

    cin>>SleepTime;

    enough=8.0<SleepTime;

    if(enough) cout<<"YES";
    else cout<<"NO";

    return 0;

}