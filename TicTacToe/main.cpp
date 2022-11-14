#include <iostream>
#include <string>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void initGameBoard(string gameBoard[ROWS][COLS]);
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]);
bool cellOccupied(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoardFull(string gameBoard[ROWS][COLS]);


int main()
{
    runGame();


    return 0;
}

void runGame()
{
    string arrayBoard[ROWS][COLS];
    bool xTurn = true;
    string winner = " ";


    initGameBoard(arrayBoard);
    printCurrentBoard(arrayBoard);

    while (winner == " ")
    {
        if (xTurn)
        {
            getUserInput(xTurn, arrayBoard);
            printCurrentBoard(arrayBoard);
            winner = getWinner(arrayBoard);
            xTurn = false;
        }
        else
        {
            getUserInput(xTurn, arrayBoard);
            printCurrentBoard(arrayBoard);
            winner = getWinner(arrayBoard);
            xTurn = true;
        }

        if (isBoardFull(arrayBoard))
        {
            winner = "C";
        }
    
    }

    if (winner != "C")
    {
        cout<<"The winner is "<<winner<<endl;
    }
    else
    {
        cout<<"It's a cat game"<<endl;
    }
}

void initGameBoard(string gameBoard[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            gameBoard[i][j] = " ";
        }
    }
}

void printCurrentBoard(string gameBoard[ROWS][COLS])
{
    cout<<gameBoard[0][0]<<" | "<<gameBoard[0][1]<<" | "<<gameBoard[0][2]<<endl;
    cout<<"---------"<<endl;
    cout<<gameBoard[1][0]<<" | "<<gameBoard[1][1]<<" | "<<gameBoard[1][2]<<endl;
    cout<<"---------"<<endl;
    cout<<gameBoard[2][0]<<" | "<<gameBoard[2][1]<<" | "<<gameBoard[2][2]<<endl;
}

void getUserInput(bool xTurn, string gameBoard[ROWS][COLS])
{
    int row;
    int col;
     
    if (xTurn)
    {
        cout<<"It is X's turn"<<endl;
        cout<<"Please enter the row Then the column, each from 0,1 and 2, seperated by a space"<<endl;
        cin>>row>>col;
        while (cellOccupied(row, col, gameBoard))
        {
            cout<<"That cell is already occupied!"<<endl;
            cout<<"Please enter the row Then the column, each from 0,1 and 2, seperated by a space"<<endl;
            cin>>row>>col;
        }
        gameBoard[row][col] = "X";
    }
    else
    {
        cout<<"It is O's turn"<<endl;
        cout<<"Please enter the row Then the column, each from o,1 and 2, seperated by a space"<<endl;
        cin>>row>>col;
        while (cellOccupied(row, col, gameBoard))
        {
            cout<<"That cell is already occupied!"<<endl;
            cout<<"Please enter the row Then the column, each from 0,1 and 2, seperated by a space"<<endl;
            cin>>row>>col;
        }
        gameBoard[row][col] = "O";
    }
}


bool cellOccupied(int row, int col, string gameBoard[ROWS][COLS])
{
    
    return gameBoard[row][col] != " ";
}

string getWinner(string gameBoard[ROWS][COLS])
{
    string result = " ";


    for (int i = 0; i < ROWS; i++)
    {
        if (gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][1] == gameBoard[i][2])
        {
            result = gameBoard[i][0];
        }
        else if (gameBoard[0][i] == gameBoard[1][i] && gameBoard[i][1] == gameBoard[2][i])
        {
            result = gameBoard[0][i];
        }
    }
    
    if ((gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2]) || (gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0]))
    {
        result = gameBoard[1][1];
    }


    return result;
}

bool isBoardFull(string gameBoard[ROWS][COLS])
{
    bool isFull = true;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (gameBoard[i][j] == " ")
            {
                isFull = false;
                break;
            }
        }
    }

    return isFull;
}