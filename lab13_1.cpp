#include<iostream>
using namespace std;

int fibonacci(int x);
    
int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    if(x>=0 and x<=1){
        return x; 
    }else{
        return x=fibonacci(x-1)+fibonacci(x-2);
        

    }
    }