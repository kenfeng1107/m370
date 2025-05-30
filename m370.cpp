#include<iostream>
using namespace std;

int main() {
    int x,n,food,right=0,left=0,max,min;
    cin>>x>>n;
    max=x;
    min=x;
    for(int i=0; i<n; i++) {
        cin>>food;
        if(food>max) {
            max=food;
        }
        else if(food<min) {
            min=food;
        }
        if(food<x) {
            left++;
        }
        else if(food>x) {
            right++;
        }
    }
    if(right>left) {
        cout<<right<<" "<<max;
    }
    else if(left>right) {
        cout<<left<<" "<<min;
    }

}
