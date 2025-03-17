#include<iostream>
using namespace std;

int main(){
    int n, m, k, p;
    cin >> n >> m >> k >> p;
    
    int bitmask = 0;

    // Bật bit thứ n
    bitmask |= (1 << n);
    bitmask |= (1 << m);

    // Kiểm tra bit thứ m
    if (bitmask & (1 << m))
        cout << "Bit " << m << " đang bật\n";
    else
        cout << "Bit " << m << " đang tắt\n";

    // Tắt bit thứ k
    bitmask &= ~(1 << k);

    // Kiểm tra xem bit k đã bị tắt chưa
    if (!(bitmask & (1 << k))) {
        cout << "Bit " << k << " đang tắt\n";
    }

    // Đảo trạng thái bit thứ p
    bitmask ^= (1 << p);

    // Xuất kết quả
    cout << "Bitmask cuối cùng: " << bitmask << endl;

    return 0;
}
