#include<iostream>
#include"functions.cpp"
using namespace std;

int main() {
    int opcion;
    do {
        cout << "Select an option:" << endl;
        cout << "1. Verify if a number is prime" << endl;
        cout << "2. Det. how many numbers are pair, odd and neutral" << endl;
        cout << "3. Print the following 10 numbers multiples of 3" << endl;
        cout << "4. Exit" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int num;
                cout << "Insert a number: ";
                cin >> num;

                if (primeNumber(num)) {
                    cout << num << " is a prime number." << endl;
                } else {
                    cout << num << " is not a prime number." << endl;
                }
                break;
            }
            case 2: {
                int n;
                cout << "How many nums u want to add? ";
                cin >> n;

                int pares = 0;
                int impares = 0;
                int neutros = 0;

                for (int i = 0; i < n; i++) {
                    int num;
                    cout << "Insert a number " << i+1 << ": ";
                    cin >> num;

                    addNums(num, pares, impares, neutros);
                }

                cout << "There are " << pares << " pair nums, " << impares << " odd nums and " << neutros << " neutral nums." << endl;
                break;
            }
            case 3: {
                  int num;
                  cout << "Insert a number: ";
                   cin >> num;
                multiple3(num);
            }
            case 4:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "ERROR: Invalid option" << endl;
                break;
        }

    } while (opcion != 4);

    return 0;
}