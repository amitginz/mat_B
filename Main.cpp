#include <iostream>
using namespace std;
#include <cstdio>
#include <string>
#include <vector>
#include "mat.hpp"
int main(){
    cout << "welcome to the carpet factory.."<< endl;
    cout << "Do yo want to create carpet??Y/N"<< endl;
    char ans;
    cin >> ans;
    if (ans == 'Y'){
        try{
        int a;
        cout << "please enter number of the wigth of the carpet:" << endl;
        cin >>a;
        int b;
        cout << "please enter number of the height of the carpet:" << endl;
        cin >>b; 
        char c;
        cout<< "please enter first simbole of the carpet:" << endl;
        cin>>c;
        char d;
        cout<< "please enter second simbole of the carpet:" << endl;
        cin >> d;
        cout << endl;
        cout << ariel::mat(a, b, c, d) << endl;

        cout << "succesfuly print carpet..." << endl;
        }
        catch (exception){
            cout<<"mat size is always odd"<< endl;
        
        }
    
        try{
            int a;
            cout << "please enter number of the wigth of the carpet:" << endl;
            cin >>a;
            int b;
            cout << "please enter number of the height of the carpet:" << endl;
            cin >>b; 
            char c;
            cout<< "please enter first simbole of the carpet:" << endl;
            cin>>c;
            char d;
            cout<< "please enter second simbole of the carpet:" << endl;
            cin >> d;
            cout << endl;
            cout << ariel::mat(a, b, c, d) << endl;

            cout << "succesfuly print carpet..." << endl;
        }
        catch (exception){
            cout<<"mat size is always odd"<< endl;
        }
    }
    else{
        cout<< "Goodbye";
    }
    
}