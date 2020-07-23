#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    cout << "++++++++++++++++++++++++++++++++++++\n";
    cout << "            Iнформацiя:           \n";
    cout << "Група: IПЗ-I 18к                  \n";
    cout << "ПІБ: Соляной Александр Олегович\n";
    cout << "Номер теми: 1.3.2 \n";
    cout << "Номер завдання: 119 " << "\n";
    cout << "+++++++++++++++++++++++++++++++++++\n\n";


    {
        int arr[3][3];

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                arr[i][j] = rand() % 2;

        for (int i = 0; i < 3; i++)
        {
            cout << "\n";
            for (int k = 0; k < 3; k++)
                cout << " " << arr[i][k];
        }

        cout << "\n\n";
        for (int i = 0; i < 3; i++)
            for (int k = 0; k < 3; k++)
                if (arr[i][k] == 0)
                    for (int i1 = 0; i1 < 3; i1++)
                        arr[i][i1] = 0;

        for (int i = 0; i < 3; i++)
            for (int k = 0; k < 3; k++)
                if (arr[i][k] == 0)
                    for (int i1 = 0; i1 < 3; i1++)
                        arr[i1][k] = 0;

        for (int i = 0; i < 3; i++)
        {
            cout << "\n";
            for (int k = 0; k < 3; k++)
                cout << " " << arr[i][k];
        }
    }
}
