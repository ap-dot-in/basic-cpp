#include <iostream>
#include <ctime>

/*
An implementation of Tic-Tac-Toe where on running this program,
you play with the computer.
The computer in question is really a random number generator.
But it does the job! :)
*/

void drawBoard(char *board);
void playerMove(char *board, char marker);
void computerMove(char *board, char marker);
std::string checkWinner(char *board);
std::string checkTie(char *board);

int main(){
    std::cout << "============ TIC-TAC-TOE ============\n";

    char playerMarker = 'X';
    char computerMarker = 'O';
    char board[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    bool running = true;
    std::string result;

    drawBoard(board);
    while (running){
        playerMove(board, playerMarker);
        computerMove(board, computerMarker);
        drawBoard(board);
        result = checkWinner(board);
        if (result=="incomplete"){
            continue;
        }else{
            running = false;
        }
    }
    std::cout << "=====================================\n";
    return 0;
}

void drawBoard(char *board){
    std::cout << "         ▐     ▐     ▐     ▐\n";
    std::cout << "         ▐  " << board[0] << "  ▐ " << board[1] <<"   ▐  " << board[2] <<"  ▐\n";
    std::cout << "          ▬▬▬▬▬ ▬▬▬▬▬ ▬▬▬▬▬\n";
    std::cout << "         ▐     ▐     ▐     ▐\n";
    std::cout << "         ▐  " << board[3] << "  ▐ " << board[4] <<"   ▐  " << board[5] <<"  ▐\n";
    std::cout << "          ▬▬▬▬▬ ▬▬▬▬▬ ▬▬▬▬▬\n";
    std::cout << "         ▐  " << board[6] << "  ▐ " << board[7] <<"   ▐  " << board[8] <<"  ▐\n";
    std::cout << "         ▐     ▐     ▐     ▐\n";

}
void playerMove(char *board, char marker){
    int playerPosition;

    while(true){
        std::cout << "Enter your position (1-9):\n";
        std::cin >> playerPosition;
        playerPosition--;
        if (board[playerPosition]==' '){
            board[playerPosition] = marker;
            break;
        }
    };
}

void computerMove(char *board, char marker){
    int computerPosition;

    while(true){
        srand(time(NULL));
        computerPosition = rand() % 9;
        if (board[computerPosition]==' '){
            board[computerPosition] = marker;
            break;
        }
    };
}

std::string checkWinner(char *board){
    if (board[0] == board[1] && board[1] == board[2]){
        if (board[0] == 'X'){
            std::cout << "You WON! <3\n";
            return "player";
        }else if (board[0] == 'O'){
            std::cout << "You LOST. :(\n";
            return "computer";
        }else{
            return "incomplete";
        }
    }else if (board[3] == board[4] && board[4] == board[5]){
        if (board[3] == 'X'){
            std::cout << "You WON! <3\n";
            return "player";
        }else if (board[3] == 'O'){
            std::cout << "You LOST. :(\n";
            return "computer";
        }else{
            return "incomplete";
        }
    }else if (board[6] == board[7] && board[7] == board[8]){
        if (board[6] == 'X'){
            std::cout << "You WON! <3\n";
            return "player";
        }else if (board[6] == 'O'){
            std::cout << "You LOST. :(\n";
            return "computer";
        }else{
            return "incomplete";
        }
    }else if (board[0] == board[4] && board[4] == board[8]){
        if (board[0] == 'X'){
            std::cout << "You WON! <3\n";
            return "player";
        }else if (board[0] == 'O'){
            std::cout << "You LOST. :(\n";
            return "computer";
        }else{
            return "incomplete";
        }
    }else if (board[2] == board[4] && board[4] == board[6]){
        if (board[2] == 'X'){
            std::cout << "You WON! <3\n";
            return "player";
        }else if (board[2] == 'O'){
            std::cout << "You LOST. :(\n";
            return "computer";
        }else{
            return "incomplete";
        }
    }else{
        if (checkTie(board) == "tie"){
            return "tie";
        }
        return "incomplete";
    }
}

std::string checkTie(char *board){
    int c = 0; char val;
    for(int i =0; i < 9; i++){
        val = board[i];
        if (val == ' '){
            c++;
        }
    }
    if (c >= 0 && c<=2){
        return "tie";
    }else{
        return "incomplete";
    }
}
