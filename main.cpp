#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Создаем двумерный вектор размерностью 3x5 и заполняем его
    vector<vector<double>> matrix(3, vector<double>(5));

    for (int i = 0; i < 3; ++i) {
        cout << "Введите элементы строки " << i+1 << ":" << endl;
        for (int j = 0; j < 5; ++j) {
            cout << "Введите элемент: ";
            cin >> matrix[i][j];
        }
    }

    // Вычисляем среднее арифметическое для каждой строки и выводим результаты
    for (int i = 0; i < 3; ++i) {
        double rowSum = 0.0;
        for (int j = 0; j < 5; ++j) {
            rowSum += matrix[i][j];
        }
        double rowAvg = rowSum / 5;
        cout << "Среднее арифметическое элементов строки " << i+1 << ": " << rowAvg << endl;
    }

    return 0;
}
