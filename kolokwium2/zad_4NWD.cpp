#include <iostream>
#include <iomanip>

using namespace std;

int nwd(int a, int b){
    int nwd=0;
    for(int i=1; i<b; i++){
        if(a%i==0 && b%i==0){
            nwd=i;
        }
    }
    return nwd;
}
int main(){
    int a,b;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    int n=nwd(a,b);
    cout<<"NWD: "<<n;

}