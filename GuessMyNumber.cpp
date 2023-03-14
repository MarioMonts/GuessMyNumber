


#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{

    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 200) + 1;
    int guess;
    int tries = 0;

    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el numero en el menor numero de intentos posibles" << endl;
     // Depurar 

    cout << secretNumber;
    do
    {

        cout << "\n ingresa un numero (1-200): " << endl;
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Muy alto \n\n";
        }

        else if (guess < secretNumber) {
            cout << "Muy bajo \n\n";

        }
        else
        {

            cout << "Lo adivinaste!! " << "en" << tries << "intentos";

        }


    } while (secretNumber != guess);




    return 0;

}

