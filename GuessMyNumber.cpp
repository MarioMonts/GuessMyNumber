


#include <iostream>
#include <cstdlib> // Trabaja con numeros random

using namespace std;

int GuessParams(int a, int b);

int main()
{
    

    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 100) + 1;
    int guess;
    int tries = 0;
    int veryClose;


    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el numero en el menor numero de intentos posibles" << endl;
     // Depurar 

    cout << secretNumber;
    do
    {

        guess = GuessParams(50, 200);
        

        tries++;

        veryClose = secretNumber - guess;
        
        if (veryClose <= 5 && veryClose >= -5 && veryClose != 0)

        {
            cout << "Muy cerca!!\n";
        }

        if (guess > secretNumber) {
            cout << "Muy alto \n\n";
        }

        else if (guess < secretNumber) {
            cout << "Muy bajo \n\n";

        }
        else
        {

            cout << "Excelente lo hiciste en -- " << tries << "intentos";

        }


    } while (guess != secretNumber);




    return 0;

}


int GuessParams(int a, int b)
{
    int num;
   

    do {

        cout << "\n ingresa un numero (1-100): " << endl;
        cin >> num;

    } while (num > a || num < b); //el OR aqui no funcionaba porque no era posible. Se usa un AND

    return num;

}