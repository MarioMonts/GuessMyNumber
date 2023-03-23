


#include <iostream>
#include <cstdlib> // Trabaja con numeros random
#include <string>

using namespace std;

int GuessParams(string question, int a, int b); //siempre se pone la funcion prototipada aqui y ABAJO del std; de arribita

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

        guess = GuessParams("\nIngresa un numero ", 300, 50); //Aqui hay un error logico porque si el random no esta dentro de este rango,nunca voy a salir de este loop. el profe dijo que esta ok
      
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




    

}


int GuessParams(string question, int a, int b)
{
    int num = 0; /// Esta variable solo existe dentro de la funcion. Por lo tanto no puede usarse en el main
    //si quisiera una variable global (que funcione en todos lados), tendria que ir arriba del main. Pero esto no es buena practica
    //nunca hacer globales. Hay que hacer variables constantes. 
   
    //Funciona al revés tambié, si pusiera una variable de main aquí, no la reconocería la función

    do {

        cout << question << "entre " << b << " y " << a << endl;
        cin >> num;

    } while (num > a || num < b); //el AND aqui no funcionaba porque no era posible. Se usa un OR

    return num;

}