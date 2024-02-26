#include <iostream>
using namespace std;

int tinhtong(int so1, int so2) {
    // int sotong = so1 + so2;
    // return sotong;
    return so1 + so2;
}
int tinhhieu(int so1, int so2) {
    // int sotong = so1 + so2;
    // return sotong;
    return so1 - so2;
}
int tinhtich(int so1, int so2) {
    // int sotong = so1 + so2;
    // return sotong;
    return so1 * so2;
}
int tinhthuong(int so1, int so2) {
    // int sotong = so1 + so2;
    // return sotong;
    return so1 / so2;
}

int main() {
 // khai bao bien
    int so1, so2, tong;

 // nhap du lieu vao bien
    cout << "CHUONG TRINH TINH TONG 2 SO\n";
    cout << " nhap so thu nhat:";
    cin >> so1;
    cout << "nhap so thu hai";
    cin >> so2;
    //tinh toan
    tong = tinhtong(so1, so2);
    cout << so1 << "+" << so2 << "=" << tong << endl;
    tong = tinhhieu(so1, so2);
    cout << so1 << "-" << so2 << "=" << tong << endl;
    tong = tinhtich(so1, so2);
    cout << so1 << "*" << so2 << "=" << tong << endl;
    tong = tinhthuong(so1, so2);
    cout << so1 << "/" << so2 << "=" << tong << endl;
    // xuat du lieu
    return 0;
}