#include <iostream>
#include <iomanip>

using namespace std;

void zamien(int* a, int* b){
    int ad=*a;
    *a=*b;
    *b=ad;
    cout<<*a<<","<<*b;
}

int main(){
    int a,b;

    cout<<"A:";
    cin>>a;
    cout<<"B:";
    cin>>b;
    cout<<"Po zamianie:"<<endl;
    zamien(&a,&b);
}