import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class sinhVien{
    int masv;
    String ten;
    String lop;
    int diem;
    public sinhVien(int masv, String ten, String lop, int diem){
        this.masv = masv;
        this.ten = ten;
        this.lop = lop;
        this.diem = diem;
    }

    public String toString() {
        return masv + " - " + ten + " - " + lop + " - " + diem;
    }
}

public class DSLK {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int soluong = sc.nextInt();
        List<sinhVien> sinhVien = new ArrayList<>();
        for(int i = 0; i < soluong; i++){
            int sinhvien = sc.nextInt();
            sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            int diem = sc.nextInt();
            sinhVien.add(new sinhVien(sinhvien, ten, lop, diem));
        }
        for(int i = 0; i < soluong; i++){
            System.out.println(sinhVien.get(i));
        }
        sc.close();
    }
}
