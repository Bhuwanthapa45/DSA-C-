#include<iostream>
using namespace std;
void print(int i, int n){
    if(i>n){
        return;
    }
    cout<<"Bhuwan"<<endl;
    print(i+1, n);
}
int main(){
    int n;
    cout<<"Enter how many times"<<endl;
    cin>>n;
    int i = 1;
    print(i,n);

    return 0;
}