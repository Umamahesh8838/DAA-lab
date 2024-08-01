#include<iostream>
using namespace std;
int fiboiter(int n){
    int a=0 , b=1 , c;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=0;i<n-2;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
int fiborecur(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fiborecur(n-1)+fiborecur(n-2);
        
} 
int main(){
    //fiboiter(5);
    int n=5;
    for(int i=0;i<n;i++){
        cout<<fiborecur(i)<<" ";
    }
}