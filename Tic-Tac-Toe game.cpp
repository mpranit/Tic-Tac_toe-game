#include <iostream>
using namespace std;

char number[10] = {'o','1','2','3','4','5','6','7','8','9'};
char symbols[6]={'X','O','@','#','$','&'};
int j, k;
void display();
int progress()                                                                //FUNCTION TO RETURN GAME STATUS
{
    if (number[1] == number[2] && number[2] == number[3])

        return 1;
    else if (number[4] == number[5] && number[5] == number[6])

        return 1;                                                              //1 FOR GAME IS OVER WITH RESULT
    else if (number[7] == number[8] && number[8] == number[9])

        return 1;
    else if (number[1] == number[4] && number[4] == number[7])

        return 1;
    else if (number[2] == number[5] && number[5] == number[8])

        return 1;
    else if (number[3] == number[6] && number[6] == number[9])

        return 1;
    else if (number[1] == number[5] && number[5] == number[9])

        return 1;
    else if (number[3] == number[5] && number[5] == number[7])

        return 1;
    else if (number[1] != '1' && number[2] != '2' && number[3] != '3' 
                    && number[4] != '4' && number[5] != '5' && number[6] != '6' 
                  && number[7] != '7' && number[8] != '8' && number[9] != '9')

        return 0;                                                                           // O GAME IS OVER and Draw
    else
        return -1;                                                                         //-1 FOR GAME IS IN PROGRESS
}

int main()
{
	int player = 1,i=-1,choice;

cout<<"0 'X'"<<endl;
cout<<"1 'O'"<<endl;
cout<<"2 '@'"<<endl;
cout<<"3 '#'"<<endl;
cout<<"4 '$'"<<endl;
cout<<"5 '&'"<<endl;

    char mark;
cout<<"choose your symbol player 1 ";
cin>>j;
cout<<endl;
cout<<"choose your symbol player 2 ";
cin>>k;
cout<<endl<<endl;
    while(i==-1){
     display();
        if(player%2==1){
            player=1;
        }
        else{
            player=2;
        }

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        if(player==1){
            mark=symbols[j];
        }
        else{
            mark=symbols[k];
        }

        if (choice == 1 && number[1] == '1')

            number[1] = mark;
        else if (choice == 2 && number[2] == '2')

            number[2] = mark;
        else if (choice == 3 && number[3] == '3')

            number[3] = mark;
        else if (choice == 4 && number[4] == '4')

            number[4] = mark;
        else if (choice == 5 && number[5] == '5')

            number[5] = mark;
        else if (choice == 6 && number[6] == '6')

            number[6] = mark;
        else if (choice == 7 && number[7] == '7')

            number[7] = mark;
        else if (choice == 8 && number[8] == '8')

            number[8] = mark;
        else if (choice == 9 && number[9] == '9')

            number[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
        }
        i=progress();

        player++;
    }
    display();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw,please try again ";
    return 0;
}
void display()                                                       //FUNCTION TO DRAW board OF TIC TAC TOE WITH PLAYERS MARK
{
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 "<<symbols[j] << " -  Player 2 "<<symbols[k] << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << number[1] << "  |  " << number[2] << "  |  " << number[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << number[4] << "  |  " << number[5] << "  |  " << number[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << number[7] << "  |  " << number[8] << "  |  " << number[9] << endl;

    cout << "     |     |     " << endl << endl;
}





