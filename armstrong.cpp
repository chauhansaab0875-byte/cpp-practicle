#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a;
    cin>>a;

    int sum = 0;
    int original = a;
    while(a>0){
        int lastdigit = a%10;
        sum+= pow(lastdigit,3);
        a= a/10;
    }

    if(sum ==original){
        cout<< "Armstrong number"<<endl;

    }else{
        cout<<"not armstrong number"<<endl;
    }
    return 0;
}