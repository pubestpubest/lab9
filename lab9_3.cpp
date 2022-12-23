/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
cout<<"Enter your height: ";
    cin>>height;
    cout<<"Enter your bounty: ";
    cin>>bounty;
*/


#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int age,height,bounty;
    string ch;
    cout<<"Enter your age: ";
    cin>>age;
    if (age<=25){
        cout<<"Enter your height: ";
        cin>>height;
        if(height<100)
            ch="Chopper";
        else if(height<180)
            ch="Usopp";
            else{ 
                cout<<"Enter your bounty: ";
                cin>>bounty;
                //ch=bounty>1100000000?"Zoro":"Sanji";
                if(bounty>1100000000)
                    ch="Zoro";
                else
                    ch="Sanji";
            }
    }else if(age<=60){
            cout<<"Enter your bounty: ";
            cin>>bounty;
            if(bounty>500000000)
                ch="Jinbe";
            else
                ch="Franky";
        }else
                ch="Brook";
    cout<<"Your character = "<<ch;
    return 0;
}
