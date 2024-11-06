#include <iostream>
#include <cmath>
using namespace std;

enum enPrime{NotPrime=0,Prime=1};

int ReadPositiveNumber()
{
    int N;
    do
    {
        cout << "Please enter a Positive Numnber: ";
        cin >> N;
    } while (N < 0);

    return N;
}

enPrime CheckPrime(int N)
{

    int K = round(N / 2);
    for (int i = 2; i <= K; i++)
    {
        if (N%i== 0)
        {
            return enPrime::NotPrime;
        }
    }
    return enPrime::Prime;
}

void PrintPrimeNumbers()
{    
    int N = ReadPositiveNumber();
    cout << "\nPrime Number from 1 to " << N << " are : \n";

    for (int i = 1; i <= N; i++)
    {
        if (CheckPrime(i)==enPrime::Prime)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintPrimeNumbers();

    return 0;
}


