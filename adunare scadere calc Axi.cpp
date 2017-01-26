//the header conio, which include library functions for performing "console input and output"
#include <conio.h>
//the header iostream, which supports the C++ I/O system
#include <iostream>
//tells the compiler to use the std namespace
using namespace std;

//begin program execution
int main()
{
    //declare variables
    int firstNumber, secondNumber, result = 0;
    char operationSign;
    bool correctInput = true;
    
     //display message on the screen
    cout<<"Introduceti primul numar:"<<endl;
    //read from keyboard
    cin>>firstNumber;
    cout<<"Introduceti al doilea numar:"<<endl;
    cin>>secondNumber;
    cout<<"Introduceti semnul operatiei:"<<endl;
    cin>>operationSign;

    switch(operationSign)
    {
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
        case '*':
            result = firstNumber * secondNumber;
            break;
        case '/':
            if(secondNumber != 0)
                result = firstNumber / secondNumber;
            else
                ////division by zero, program will end
                return 0;
            break;
        default:
            correctInput = false;
    }
    
    //if the user uses correct operation signs
    if(correctInput)
        cout<<"Rezultatul operatiei de "<<operationSign<<" intre numerele "<<firstNumber<<" si "<<secondNumber<<" calculatorul lui Axi spune ca este:"<<result;
    else
        cout<<"Rezultatul nu a fost calculat de calculatorullui Axi din cauza unei operatii invalide";

    //terminates main and return value to the calling process
    system("pause");
    return 0;
}
