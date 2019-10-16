#include<cmath>
#include<iostream>

using namespace std;

int n= 0;

bool is_prime[40]={false, false,true, true,false,true,false,true,false,false,false,true,
                false,true,false,false,false,true,false,true,false,false,false,true,
                false,false,false,false,false,true,false,true, false,false,false};
int circ[20];
bool yala[20];


void find(int m) {
    if(m == n - 1 and
    is_prime[circ[n - 1] + circ[n]]) {
        for(int i = 0; i < n; i++){
            cout<<circ[i]<<" ";}
        cout<<endl;
        return;
    }
    for(int i = 2; i <= n; i++)
        if(!yala[i] and is_prime[circ[m] + i]) {
            yala[i] = true;
            circ[m + 1] = i;
            find(m + 1);
            yala[i] = false;
        }
}

int main() {

    int x=0;

    while(scanf("%d",&n) == 1) {
        x++;
        if(x > 1)
            cout<<endl;
        circ[0] = circ[n] = true;
        cout<<"Case "<<x<<":"<<endl;
        find(0);
    }
}