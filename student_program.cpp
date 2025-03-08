#include <iostream>

using namespace std;

void GetMatrix(int *value, int row, int col);
void PrintMatrix(int *value, int row, int col);

int main() {
    int m = 3, n = 3;
    int *data = new int[m * n];  // จองหน่วยความจำแบบ 1 มิติแทน 2 มิติ

    GetMatrix(data, m, n);
    PrintMatrix(data, m, n);

    delete[] data;  // ลบหน่วยความจำที่จองไว้
    return 0;
}

// ฟังก์ชันรับค่าจากผู้ใช้
void GetMatrix(int *value, int row, int col) {
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> value[i * col + j];  // คำนวณ index ตามอาร์เรย์ 1 มิติ
        }
    }
}

// ฟังก์ชันแสดงค่าใน Matrix
void PrintMatrix(int *value, int row, int col) {
    cout << "Matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << value[i * col + j] << " ";
        }
        cout << endl;
    }
}
