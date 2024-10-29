#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    float fileSize, internetSpeed;

    cout << "Укажите размер файла для скачивания: ";
    cin >> fileSize;
    cout << "Какова скорость вашего соединения? ";
    cin >> internetSpeed;

    float downloaded = 0;
    int sec = 0;

    while (downloaded < fileSize) {
        downloaded += internetSpeed;
        sec++;
        int percent = (int)((downloaded / fileSize) * 100);

        if (percent > 100) {
            percent = 100;
        }

        cout << "Прошло " << sec << " сек. Скачано " << downloaded << " из " << fileSize << " МБ (" << percent << "%)." << endl;
    }   
}

