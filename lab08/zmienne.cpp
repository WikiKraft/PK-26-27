#include <iostream>
#include <iomanip>

using namespace std;

void test(int* x, int* y, int* z){

    *x=10;
    *z=3;
    *y=0;

}

int main(){

    int x=0;
    int z=1;
    int y=5;

    test(&x,&y,&z);

    cout<<x<<y<<z;
}