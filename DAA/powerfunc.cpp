#include <iostream>
using namespace std;

int power(int x,int y){
    int result = 1;
    if(y==0){
        return 1;
    }else if(x ==0){
        return 0;
    }else{
    for(int i = 0; i < y; ++i)
    {
        result *= x;
    }}
    return result;
}

int main() {
    int a ,b;
    cout<< "Enter base of the number and the power separated by a space: ";
    cin >> a >> b;
    cout << power(a,b)<<endl;
}