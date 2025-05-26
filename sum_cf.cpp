#include <iostream>
using namespace std;

int main(){
    int a , b , c;
    int t;
    cin>>t;
    while (t>0)
    {
        cin >> a ;
        cin >> b;
        cin >> c;

        if(((a+b)==c)|| ((a+c)==b) || ((b+c)==a)){
            cout<<"YES"<<endl;
        }
        else{ 
            cout<<"NO"<<endl;
        }
        t--;
    }
    



}