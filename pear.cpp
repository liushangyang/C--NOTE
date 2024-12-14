#include<bits/stdc++.h>

//你是一个孝顺的孩子吗？
using namespace std;

int main(void){
    //老吾老以及人之老，幼吾幼以及人之幼
    int x,y,z;
    int min;
    
    scanf("%d%d%d",&x,&y,&z);
    min=x<y?x<z?x:z : y<z?y:z;

    cout<<min;

    return 0;

}