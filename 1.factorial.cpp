#include<iostream>
using namespace std;
int factiter(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int factrecur(int n){
    int fact=1;
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    else
       return  n*factrecur(n-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<factrecur(n);
}

//newfeature
