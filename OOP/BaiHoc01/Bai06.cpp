//
// Created by ViKa on 4/9/2025.
//
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    // Hàm kiểm tra năm nhuận
    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    // Hàm trả về số ngày trong tháng
    int daysInMonth(int m, int y) {
        int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (m == 2 && isLeapYear(y))
            return 29;
        return days[m];
    }

    // Hàm kiểm tra ngày hợp lệ
    bool isValidDate() {
        if (year < 1 || month < 1 || month > 12 || day < 1)
            return false;
        return day <= daysInMonth(month, year);
    }

public:
    // Constructor
    Date(int d = 1, int m = 1, int y = 1) {
        day = d;
        month = m;
        year = y;
    }

    // Nhập ngày
    void input() {
        do {
            cout << "Nhap ngay (dd mm yyyy): ";
            cin >> day >> month >> year;
            if (!isValidDate())
                cout << "Ngay khong hop le! Vui long nhap lai.\n";
        } while (!isValidDate());
    }

    // Xuất ngày
    void output() {
        cout << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }

    // Tìm ngày kế tiếp
    Date nextDay() {
        Date next = *this;
        next.day++;

        if (next.day > daysInMonth(next.month, next.year)) {
            next.day = 1;
            next.month++;
            if (next.month > 12) {
                next.month = 1;
                next.year++;
            }
        }
        return next;
    }
int main() {
    Date date;
    cout << "=== Chuong trinh tim ngay ke tiep va ngay hom qua ===\n";
    cout << "\nNhap ngay de tim ngay ke tiep:\n";
    date.input();
    cout << "Ngay hien tai: ";
    date.output();
    cout << "Ngay ke tiep: ";
    Date next = date.nextDay();
    next.output();
    return 0;
}