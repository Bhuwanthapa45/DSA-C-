#include<iostream>
using namespace std;
int fibonacii(int n){
    if(n<=1){
        return n;
    }
    return fibonacii(n - 1) + fibonacii(n - 2);
}
int main(){
    int n;
    cout<<"Enter the number you want recursion of :"<<endl;
    cin>>n;
   int f =  fibonacii(n);
   cout<<"Fibonacii of number is " << f <<endl;
    return 0;
}