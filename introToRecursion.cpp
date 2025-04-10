#include<iostream>
using namespace std;
//When a function call itslef untill a specified condiotn is met
int cnt = 0;
void print(){
    //Base Condition
    if(cnt == 3) return;
    cout<< cnt << endl;
    //function calling itself
    cnt++;
    print();

}
int main(){
print();
}