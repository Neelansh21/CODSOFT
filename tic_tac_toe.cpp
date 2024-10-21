#include <iostream>
using namespace std;
char gb[3][3]={{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char cm='X';
int r,c;
bool draw=false;
void gameboard(){
    
    cout<<"     |     |   \n";
    cout<<"     |     |   \n";
    cout<<"   "<<gb[0][0]<<" |  "<<gb[0][1]<<"  | "<<gb[0][2]<<" \n";
    cout<<"     |     |   \n";
    cout<<"-------------------\n";
    cout<<"     |     |   \n";
    cout<<"   "<<gb[1][0]<<" |  "<<gb[1][1]<<"  | "<<gb[1][2]<<" \n";
    cout<<"     |     |   \n";
    cout<<"-------------------\n";
    cout<<"     |     |   \n";
    cout<<"   "<<gb[2][0]<<" |  "<<gb[2][1]<<"  | "<<gb[2][2]<<" \n";
    cout<<"     |     |   \n";
    cout<<"     |     |   \n";
    }
bool check_winner(){
    for(int i=0;i<3;i++){
        if(gb[i][0]==gb[i][1]&&gb[i][1]==gb[i][2] || gb[0][i]==gb[1][i]&&gb[1][i]==gb[2][i]){
        return true;
        }
    }
        if(gb[0][0]==gb[1][1]&&gb[1][1]==gb[2][2] || gb[0][2]==gb[1][1]&&gb[1][1]==gb[2][0]){
        return true;
        }
    return false;
}
    
void Swap(){
    int digit;
    if(cm=='X'){
        cout<<"player 1 please enter the digit ";
        cin>>digit;
    }if(cm=='0'){
        cout<<"player 2 please enter the digit ";
        cin>>digit;
    }if (digit<1 || digit>9) {
        cout<<"INVALID DIGIT!!!"<<endl;
        Swap();
        return;
    }
    if(digit==1){
        r=0;
        c=0;
    }if(digit==2){
        r=0;
        c=1;
    }if(digit==3){
        r=0;
        c=2;
    }if(digit==4){
        r=1;
        c=0;
    }if(digit==5){
        r=1;
        c=1;
    }if(digit==6){
        r=1;
        c=2;
    }if(digit==7){
        r=2;
        c=0;
    }if(digit==8){
        r=2;
        c=1;
    }if(digit==9){
        r=2;
        c=2;
    }
    if(cm=='X'&& gb[r][c]!='X'&& gb[r][c]!='0'){
        gb[r][c]='X';
        cm='0';
    }else if(cm=='0'&& gb[r][c]!='X'&& gb[r][c]!='0'){
        gb[r][c]='0';
        cm='X';
    }else{
        cout<<"place already occupied!!!"<<endl;
        Swap();
    }
    //gameboard();
}
int main(){
    cout<<"player 1 goes first"<<endl;
    while(!check_winner()){
        gameboard();
        Swap();
        draw = true; 
        for (int i=0;i<3;i++) {
            for (int j=0;j<3;j++) {
                if (gb[i][j]!='X' && gb[i][j]!='0') {
                    draw=false;
                }
            }
        }
    }gameboard();
    if(cm=='X' && !draw){
        cout<<"player 2 Wins!!"<<endl;
    }else if(cm=='0' && !draw){
        cout<<"player 1 Wins!!"<<endl;
    }else if(draw){
        cout<<"DRAW!!!"<<endl;
    }return 0;

}