#include <iostream>
int main (){
    using namespace std;
    
    char player[20];
    srand(time(NULL));
    int a;
    bool flag = true;
    
    do {
        cout << "Enter Rock, Scissors or Paper: ";
        a = rand()%10;
        cin >> player;
        
        if (a >= 1 && a <= 3)           // нічия
            cout << "Try again!\n";
        
        else if (a >= 4 && a <= 6){
            cout << "Looser!\n";
            flag = false;
        }
        
        else if(a >= 7){
            cout << "You win!\n";
            flag = false;
        }
            
    } while (flag);
}

