#include <iostream>
#include <conio.h> // For _getch() function

using namespace std;

class SnakeGame
{
private:
    const int width = 50;
    const int height = 10;

    int snakeX, snakeY;
    int fruitX, fruitY;
    int score;
    bool gameOver;
    int tailX[100], tailY[100];
    int nTail;

public:
    SnakeGame() : snakeX(width / 2), snakeY(height / 2), fruitX(rand() % width), fruitY(rand() % height), score(0), gameOver(false), nTail(0) {}

    void Draw()
    {
        system("cls");
        for (int i = 0; i < width + 2; i++)
        {
            cout << "#";
        }
        cout << endl;

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (j == 0)
                    cout << "#";
                if (i == snakeY && j == snakeX)
                    cout << "O"; // Snake head
                else if (i == fruitY && j == fruitX)
                    cout << "F"; // Fruit
                else
                {
                    bool printTail = false;
                    for (int k = 0; k < nTail; k++)
                    {
                        if (tailX[k] == j && tailY[k] == i)
                        {
                            cout << "o"; // Snake tail
                            printTail = true;
                        }
                    }
                    if (!printTail)
                        cout << " ";
                }

                if (j == width - 1)
                    cout << "#";
            }
            cout << endl;
        }

        for (int i = 0; i < width + 2; i++)
        {
            cout << "#";
        }
        cout << endl;

        cout << "Score:" << score << endl;
    }

    void Input()
    {
        if (_kbhit())
        {
            switch (_getch())
            {
            case 'a':
                snakeX--;
                break;
            case 'd':
                snakeX++;
                break;
            case 'w':
                snakeY--;
                break;
            case 's':
                snakeY++;
                break;
            case 'x':
                gameOver = true;
                break;
            }
        }
    }

    void Logic()
    {
        int prevX = tailX[0];
        int prevY = tailY[0];
        int prev2X, prev2Y;
        tailX[0] = snakeX;
        tailY[0] = snakeY;

        for (int i = 1; i < nTail; i++)
        {
            prev2X = tailX[i];
            prev2Y = tailY[i];
            tailX[i] = prevX;
            tailY[i] = prevY;
            prevX = prev2X;
            prevY = prev2Y;
        }
        switch (_getch())
        {
        case 'a':
            snakeX--;
            break;
        case 'd':
            snakeX++;
            break;
        case 'w':
            snakeY--;
            break;
        case 's':
            snakeY++;
            break;
        case 'x':
            gameOver = true;
            break;
        }

        if (snakeX < 0 || snakeX >= width || snakeY < 0 || snakeY >= height)
            gameOver = true;

        for (int i = 0; i < nTail; i++)
            if (tailX[i] == snakeX && tailY[i] == snakeY)
                gameOver = true;

        if (snakeX == fruitX && snakeY == fruitY)
        {
            score += 10;
            fruitX = rand() % width;
            fruitY = rand() % height;
            nTail++;
        }
    }

    bool IsGameOver() const
    {
        return gameOver;
    }
};

int main()
{
    SnakeGame snakeGame;

    while (!snakeGame.IsGameOver())
    {
        snakeGame.Draw();
        snakeGame.Input();
        snakeGame.Logic();
    }

    return 0;
}
