#include <iostream>

using namespace std;

int win(int comp, int user)
{
    if (user-comp == 0){
        cout<<"DRAW!"<<endl;
        return 0;
    }
    else if(user-comp == +1 || user-comp == -2){
        cout<<"WIN!"<<endl;
        return 1;
    }
    else{
        cout<<"LOSE!"<<endl;
        return -1;
    }
}

int main()
{
    string choices[] = {"Rock", "Paper", "Scissors"};
    cout<<"         Welcome to Rock, Paper, Scissors"<<endl;
    int points = 0;
    while (true){
    int user, result;
    cout<<"\n Choose from the following: Rock(1), Paper(2), Scissors(3)"<<"\n Enter the number corresponding to choice: ";
    cin>>user;
    if(user < 1 or user > 3)
    {
        cout<<"Enter Valid Input!";
        continue;
    }
    user--;
    int comp = rand()%3;
    result = win(user, comp);
    if(result == 0)
    {
        cout<<"You chose "<<choices[user]<<" and Computer chose "<<choices[comp]<<endl;
        cout<<points;
        continue;
    }
    else if(result == 1)
    {
        cout<<"You chose "<<choices[user]<<" and Computer chose "<<choices[comp]<<endl;
        points+=10;
        cout<<points;
    }
    else if(result == -1)
    {
        cout<<"You chose "<<choices[user]<<" and Computer chose "<<choices[comp]<<endl;
        cout<<points;
        points = 0;
        int cont;
        cout<<"\nEnter 1 to continue or 0 to exit"<<endl;
        cin>>cont;
        if(cont == 0){
            break;
        }
        else
        {
            continue;
        }
    }
    }
    cout<<"Thanks for Playing !";
return 0;
}