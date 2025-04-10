#include<iostream>
using namespace std;
void print(int N, int i ){
    if(i>N){
        return;
    }
    print(N, i+1);
    cout<<i<<" ";


}
int main(){
    int n;
    cout<<"Print the no of time you want to print" <<endl;
    cin>>n;
    print(n,1);
    return 0;
}