#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int secret_number(){
    int sn;
    srand(time(0));
    sn=1+(rand()%100);
    return sn;
} 
int main(){
    int n,sn;
    cout<<"YOU HAVE TO  GUESS A NUMBER BETWEEN 1 TO 100 "<<endl;
    sn=secret_number();
    while (true){
        cout<<"PLEASE TAKE A GUESS!"<<endl;
        cin>>n;
        if(n==sn){
            cout<<"HURRAY! YOU WON!"<<endl;
            break;
        }else if(n>=sn-5&&n<=sn+5){
            cout<<"YOU ARE CLOSE ENOUGH!"<<endl;
        }else if(n>=sn+5){
            cout<<"THE GUESS IS TOO HIGH!"<<endl;
        }else{
            cout<<"THE GUESS IS TOO LOW! "<<endl;
        }
    }return 0;
}