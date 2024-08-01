#include<iostream>
using namespace std;

int sumiter(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int sumrecur(int n){
    int sum=0;
    if(n==1)
        return 1;
    else
        return sumrecur(n-1)+n;
}
int main(){
    cout<<sumrecur(10)<<endl;
}

