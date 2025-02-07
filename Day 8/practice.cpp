#include <iostream>
using namespace std;
int main(){
    // int n,m,sum;
    // cout<<"Enter the value of n: "<<"\n";
    // cin>>n;
    // cout<<"Enter the value of m: "<<"\n";
    // cin>>m;
    // sum = n+m;
    // cout<<"The sum of n and m is: "<<sum;

    // int age;
    // cout<<"Enter the age: \n";
    // cin>>age;
    // if(age>=18){
    //     cout<<"You are adult";
    // }
    // else{
    //     cout<<"You are not an adult";
    // }

    int day;
    cout<<"Enter the no of day: ";
    cin>>day;
    switch(day){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout <<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
    }

    return 0;
}