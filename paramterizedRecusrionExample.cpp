#include<iostream>
using namespace std;
void add(int i, int sum){
    if(i<1){
        cout<< sum;
        return;}
    add(i-1, sum + i);
}
int main(){
    int i;
    cout<<"Enter the number"<<endl;
    cin>>i;
    add(i,0);
    return 0;
}