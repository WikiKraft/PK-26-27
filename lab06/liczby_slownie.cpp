#include <iostream>

using namespace std;

void setki(int x){

    switch(x){

        case 1:
            cout<<"Sto ";
        break;

        case 2:
            cout<<"Dwieście ";
        break;

        case 3:
            cout<<"Trzysta ";
        break;

        case 4:
            cout<<"Czterysta ";
        break;

        case 5:
            cout<<"Pięćset ";
        break;

        case 6:
            cout <<"Sześćset ";
        break;

        case 7:
            cout <<"Siedemset ";
        break;

        case 8:
            cout <<"Osiemset ";
        break;

        case 9:
            cout <<"Dziewięćset ";
    }
}

void nastki(int y,int z){


    if (y==1){

        if(z==0){

            cout<<"dziesięć";
        }
        else {

            switch(z){

        case 1:
            cout<<"jedenaście ";
        break;

        case 2:
            cout<<"dwanaście ";
        break;

        case 3:
            cout<<"trzynaście ";
        break;

        case 4:
            cout<<"czternaście ";
        break;

        case 5:
            cout<<"piętnaście ";
        break;

        case 6:
            cout <<"szesnaście ";
        break;

        case 7:
            cout <<"siedemnaście ";
        break;

        case 8:
            cout <<"osiemnaście ";
        break;

        case 9:
            cout <<"dziewiętnaście ";
        }

            
        }

    

}
}

    void dziesiatki(int r){

    switch(r){

    case 2:
            cout<<"dwadzieścia ";
        break;

        case 3:
            cout<<"trzydzieści ";
        break;

        case 4:
            cout<<"czterdzieści ";
        break;

        case 5:
            cout<<"piędziesiąt ";
        break;

        case 6:
            cout <<"sześćdziesiąt ";
        break;

        case 7:
            cout <<"siedemdziesiąt ";
        break;

        case 8:
            cout <<"osiemdziesiąt ";
        break;

        case 9:
            cout <<"dziewięćdziesiąt ";
    }
}

void jednosci(int j){

    switch(j){

        case 1:
            cout<<"jeden ";
        break;

        case 2:
            cout<<"dwa ";
        break;

        case 3:
            cout<<"trzy ";
        break;

        case 4:
            cout<<"cztery";
        break;

        case 5:
            cout<<"pięć ";
        break;

        case 6:
            cout <<"sześć ";
        break;

        case 7:
            cout <<"siedem ";
        break;

        case 8:
            cout <<"osiem ";
        break;

        case 9:
            cout <<"dziewięć ";
        }


    }





int main(){

    int l;
    cout<<"Liczba: ";
    cin>>l;

    int set=l/100;
    int dzie=(l/10)%10;
    int jed = l%10;

    if(dzie==1){

        setki(set);
        nastki(dzie,jed);
        return 0;
    }
    else {

        setki(set);
        dziesiatki(dzie);
        jednosci(jed);


    }

    

}