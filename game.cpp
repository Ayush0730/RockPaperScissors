#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    char ch;
    int choice;
    int comp_choice;
    int C_score = 0, Y_score = 0;
    srand(time(0));
    cout<<"Welcome to rock paper scissors\n\n";
    cout<<"Enter 1 for rock, 2 for paper and 3 for scissors\n\n";

    do{
        cout<<"Enter your choice (1 for rock, 2 for paper and 3 for scissors). To see current score, press 7\n\n";
        cin>>choice;

        if(choice == 7){
            cout<<"Computer  : "<<C_score<<endl;
            cout<<"You       : "<<Y_score<<endl;
            cout<<"Do you want to Play again?? (Y/N)\n";
            cin>>ch;
            if(ch == 'N' || ch == 'n'){
                break;
            }
            else{
                continue;
            }
        }
        comp_choice = rand()%3 + 1;
        switch(choice)
        {
        case 1:
            cout<<"You choose rock\n";
            break;
        case 2:
            cout<<"You choose paper\n";
            break;
        case 3:
            cout<<"You choose scissors\n";
            break;
        default:
            cout<<"Invalid choice\n";
        }

        if(choice > 0 && choice < 4){
            switch(comp_choice)
            {
            case 1:
                cout<<"Computer choose rock\n";
                break;
            case 2:
                cout<<"Computer choose paper\n";
                break;
            case 3:
                cout<<"Computer choose scissors\n";
                break;
            default:
                cout<<"Invalid choice\n";
            }

            if(choice == comp_choice){
                cout<<"Game is Tied\n";
            }
            else if((choice+1)%4 == comp_choice){
                cout<<"You Lose\n";
                C_score++;
            }
            else{
                cout<<"You won\n";
                Y_score++;
            }

            cout<<"Do you want to Play again?? (Y/N)\n";
            cin>>ch;
        }
    }while(!(ch == 'n' || ch == 'N'));

    cout<<"\n\nBye!! See you soon";
    exit(0);
}
