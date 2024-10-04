#include <iostream>
#include <cstdlib> 
using namespace std;

int menuchonlua() {
    cout << "Lua chon mi den cua ban" << endl;
    cout << "1. Anh Ba Ke Chuyen" << endl;
    cout << "2. Cat Toc Mi Den" << endl;
    cout << "3. Nhac Vang Tuan Vu" << endl;
    cout << "4. Ricardo Milos" << endl;
    cout << "5. Nhac Kiem Hiep Moi Da Den" << endl;
    cout << "6. Trum Da Den Toi Da Den" << endl;
    cout << "7. Lien Khuc 7 Vat"<<endl;
    cout << "Nhap lua chon cua ban (0 de thoat): " << endl;
}

int main() {
    int n;

    do {
        menuchonlua();
        cin >> n;

        switch (n) {
            case 1:
                cout << "Ban da chon lua chon 1" << endl;
                system("start https://www.facebook.com/100075515920946/videos/1588185298799281?idorvanity=540438169976733"); 
                break;
            case 2:
                cout << "Ban da chon lua chon 2" << endl;
                system("start https://www.facebook.com/100074062532665/videos/1167471954524106/?idorvanity=540438169976733"); 
                break;
            case 3:
                cout << "Ban da chon lua chon 3" << endl;
                system("start https://www.youtube.com/watch?v=ln5h44icVZE&t=57s"); 
                break;
            case 4:
                cout << "Ban da chon lua chon 4" << endl;
                system("start https://www.youtube.com/watch?v=BpmWTyKt3hk"); 
                break;
            case 5:
                cout << "Ban da chon lua chon 5" << endl;
                system("start https://www.facebook.com/HoPhuongMay.2208/videos/891254506393733/?idorvanity=540438169976733"); 
                break;
            case 6:
                cout << "Ban da chon lua chon 6" << endl;
                system("start https://www.youtube.com/shorts/Dj1_KBb8EVY"); 
                break;
            case 7:
                cout << "Ban da chon lua chon 7" << endl;
                system("start https://www.facebook.com/100089475031916/videos/529790852946050?idorvanity=678725854079148"); 
                break;
                
            case 0:
                cout << "Thoat chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long thu lai." << endl;
        }
    } while (n != 0);

    return 0;
}
