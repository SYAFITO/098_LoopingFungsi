#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];

    for (i = 0; i < 5; i++)
    {
        cout << i << " : " "Syafito" << endl;
    }

    for (i = 0; i < 5; i++){
        cout << "Masukkan Nama = ";
        cin >> arr[i];
    }

    for (i = 0; i<5;i++) {
        cout << "Nama ke - " << i << " : " << arr[i] << endl;
    }

}