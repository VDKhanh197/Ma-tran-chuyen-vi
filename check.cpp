#include <iostream>
using namespace std;

// Hàm nhập mảng 2 chiều
void Nhap(int A[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << " A[" << i << "][" << j << "]: ";
            cin >> A[i][j];

        }
        cout << "\n";
    }

}

// Hàm xuất mảng 2 chiều
void Xuat(int A[][100], int m, int n) {
    cout << "\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}



void chuyenvi(int A[][100], int m, int n, int B[][100]){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            B[j][i] = A[i][j];
        }
    }
}

int main() {
    int m, n;
    int A[100][100];
    int B[100][100];

    // Nhập số hàng và số cột của mảng
    cout << "Nhap so hang va so cot cua bang: ";
    cin >> m >> n;

    // Gọi hàm nhập mảng
    Nhap(A, m, n);

    // Gọi hàm xuất mảng
    Xuat(A, m, n);

    chuyenvi(A, m, n ,B);
     Xuat(B, n, m);


    return 0;
}
