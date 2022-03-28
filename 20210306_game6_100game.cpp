#include <iostream>
#include <cstdio>
using namespace std;

void FirstPlayerPlay(){
    string message="enter";
    int num;
    cout<<"Player-1 please " + message + " a number from 1-10: "<<endl;
    cin>> num;
    }

void SecondPlayerPlay(){
    string message="enter";
    int num;
    cout<<"Player-2 please " + message + " a number from 1-10: "<<endl;
    cin>>num;
    }

void NumberOfTurnsLeftForPlayer1(){
    string winner;
    int turnsLeft,sum;

    turnsLeft = 100 - sum;
    winner = "Player-1";
    }

void NumberOfTurnsLeftForPlayer2(){
    string winner;
    int turnsLeft,sum;

    turnsLeft = 100 - sum;
    winner = "Player-2";
    }

void UpdateGameStatus(){
    int sum;
    string message;

    cout<<"Sum is "<<sum<<endl;
    message = "enter";
    }

void Winner(){
    string winner;

    cout<<winner;
    cout<<" Won";
    }

void TurnsLeftUpdate(){
    int turnsLeft,sum;
    turnsLeft=100-sum;

    }


int main()
{
    int sum,turnsLeft,num,n;
    string winner,message;
    sum=0;
    n=10;
    int numbers[10]= {1,2,3,4,5,6,7,8,9,10};
    turnsLeft = 100 - sum;
    message = "enter";
    num=0;
    winner = "";

    while(sum < 100){

        turnsLeft=100-sum;
        if(sum<100 && turnsLeft>=10){
            cout<<"Sum is "<<sum<<endl;
            message = "enter";
            while(true){
                string message="enter";
                cout<<"Player-1 please " + message + " a number from 1-10: "<<endl;
                cin>> num;
                if(num>0 && num<=10){
                    sum+=num;
                    break;
                }
                else{
                    message="re-enter";
                }
            }
        }
        else if(sum<100 && turnsLeft<10){
            cout<<"Sum is "<<sum<<endl;
            message = "enter";
            while(true){
                turnsLeft = 100 - sum;
                winner = "Player-1";
                cout<<"Player-1 please " + message + " a number from 1-"<<turnsLeft<<": "<<endl;;
                cin>>num;
                if(num<=turnsLeft && num>0){
                    sum+=num;
                    break;
                }
                else{
                    message="re-enter";
                }
            }
        }
        turnsLeft=100-sum;
        if(sum<100 && turnsLeft>=10){
            cout<<"Sum is "<<sum<<endl;
             message = "enter";

            while(true){
               string message="enter";
               cout<<"Player-2 please " + message + " a number from 1-10: "<<endl;
               cin>>num;

                if(num>0 && num<=10){
                    sum+=num;
                    break;
                }
                else{
                    message="re-enter";
                }
            }
        }
        else if(sum<100 && turnsLeft<10){
            cout<<"Sum is "<<sum<<endl;
            message = "enter";
            while(true){
                turnsLeft = 100 - sum;
                winner = "Player-2";
                cout<<"Player-2 please " + message + " a number from 1-"<<turnsLeft<<": "<<endl;;
                cin>>num;
                if(num<=turnsLeft && num>0){
                    sum+=num;
                    break;
                }
                else{
                    message="re-enter";
                }
            }
        }
    }


    cout<<winner;
    cout<<" Won";
    return 0;
}
