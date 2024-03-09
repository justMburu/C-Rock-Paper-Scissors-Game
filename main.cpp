#include <iostream>
#include <cstdlib> // We will need the C stdlib library file for the rand() funtion
#include <ctime> // We will need the C time library file for random function

using namespace std;

int main()
{
    srand ((unsigned int) time(NULL)); // Here we are using srand function for randomisation
    cout << "Hello world!" << endl;
    cout << "Today we will be creating a rock paper scissors game" << endl;

    // Variable initialization

    // string choice[3] = {"Rock", "Paper", "Scissors"};
    int player_throw = 0;
    int ai_throw = 0;
    int draw = 0;
    int playerWin = 0;
    int aiWin = 0;
    bool game_cont = true;
    // string w_choice = (int)choice[player_throw] -1;

    // Taking user input
    cout << "Please choose your choice." << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "4. Terminate game" << endl;
    cout << "What's your pick: ";
    cin >> player_throw;
    cout << endl;

    // Generating random input for the computer throw
    ai_throw = (rand() % 3) +1;

    // Creating a loop for user input until we terminate the game by the input 4
    while (game_cont){
        // Using if statements to compare and increase input for later determining the winner
        if (player_throw == ai_throw){
            cout << "It's a tie." << endl;
            cout << "You threw " << player_throw << " and AI threw " << ai_throw << endl;
            draw++;
        } else if (player_throw == 1 && ai_throw == 3) {
            cout << "You win." << endl;
            cout << "You threw " << player_throw << " and AI threw " << ai_throw << endl;
            cout << "You got lucky" << endl;
            playerWin++;
        } else if (player_throw == 3 && ai_throw == 2) {
            cout << "You win." << endl;
            cout << "You threw " << player_throw << " and AI threw " << ai_throw << endl;
            cout << "You got lucky" << endl;
            playerWin++;
        } else if (player_throw == 2 && ai_throw == 1) {
            cout << "You win." << endl;
            cout << "You threw " << player_throw << " and AI threw " << ai_throw << endl;
            cout << "You got lucky" << endl;
            playerWin++;
        } else if (player_throw == 3 && ai_throw == 1) {
            cout << "You lose." << endl;
            cout << "You threw " << player_throw << " and AI threw " << ai_throw << endl;
            cout << "You are always a loser!!!" << endl;
            aiWin++;
        } else if (player_throw == 1 && ai_throw == 2) {
            cout << "You lose." << endl;
            cout << "You threw " << player_throw << " and AI threw " << ai_throw << endl;
            cout << "You are always a loser!!!" << endl;
            aiWin++;
        } else if (player_throw == 2 && ai_throw == 3) {
            cout << "You lose." << endl;
            cout << "You threw " << player_throw << " and AI threw " << ai_throw << endl;
            cout << "You are always a loser!!!" << endl;
            aiWin++;
        }
        // Some statements for terminating game or continuing with game
        if (player_throw == 4) {
            if (aiWin > playerWin) {
                cout << "You couldn't stand the heat I was bringing so you quit like the looser you are haha" << endl;
            } else if (playerWin > aiWin){
                cout << "I was just getting started and you quit? Not fair...." << endl;
            } else if (aiWin == playerWin){
                cout << "You quit early mate...." << endl;
                cout << endl;
            }
            game_cont = false;
            cout << endl;

        } else {
            cout << "Please choose your choice (1. Rock or 2. Paper or 3. Scissors or 4. Terminate game)" << endl;
            cout << "What's your throw: ";
            cin >> player_throw;
            cout << endl;

            ai_throw = (rand() % 3) +1;
        }
    }

    // Displaying the final scores
    cout << "The number of wins and ties for all players are: " << endl;
    cout << "AI won " << aiWin << endl;
    cout << "You won " << playerWin << endl;
    cout << "Tie " << draw << endl;

    // Just some outputs for the loser and winner
    if (aiWin > playerWin){
        cout << "You can't win against me. You are my minion...haha" << endl;
    } else if (playerWin > aiWin){
        cout << "You got lucky this time. I'll not be soft next time." << endl;
    } else {
        cout << "You read my mind you minion. ";
    }

    cout << endl;
    cout << "Thank you for enjoying my code. I'll be waiting for your challenge." << endl;
    cout << "Don't forget to share the game and love to the world." << endl;
    cout << endl;
    cout << ".........................................................................................." << endl;
    cout << ".........................................................................................." << endl;
    cout << ".........................................................................................." << endl;


    return 0;
}
