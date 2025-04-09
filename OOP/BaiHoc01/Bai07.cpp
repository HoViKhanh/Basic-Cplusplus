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

    // Tìm ngày hôm qua
    Date previousDay() {
        if (day == 1 && month == 1 && year == 1) {
            cout << "Ngay 1/1/1 khong co ngay hom qua!\n";
            return *this;
        }

        Date prev = *this;
        prev.day--;

        if (prev.day == 0) {
            prev.month--;
            if (prev.month == 0) {
                prev.month = 12;
                prev.year--;
            }
            prev.day = daysInMonth(prev.month, prev.year);
        }
        return prev;
    }
};

int main() {
    Date date;
    cout << "=== Chuong trinh tim ngay ke tiep va ngay hom qua ===\n";
    cout << "\nNhap ngay de tim ngay hom qua:\n";
    date.input();
    cout << "Ngay hien tai: ";
    date.output();
    cout << "Ngay hom qua: ";
    Date prev = date.previousDay();
    prev.output();
    return 0;
}
