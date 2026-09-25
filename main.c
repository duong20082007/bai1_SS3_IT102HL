#include <stdio.h>

int main() {
    int maPhim, tuoi, loaiGhe, doiTuong;
    int gia_co_ban = 80000;
    int phu_thu = 0;
    int tong_truoc_giam, tien_giam, tong_tien_thanh_toan;

    printf("=== HỆ THỐNG BÁN VÉ PHIM CGV / LOTTE ===\n");
    printf("Nhập mã loại phim (1: Phim P, 2: Phim C18): ");
    scanf("%d", &maPhim);
    
    printf("Nhập tuổi của khán giả: ");
    scanf("%d", &tuoi);
    
    printf("Nhập loại ghế (1: Ghế Thường, 2: Ghế VIP): ");
    scanf("%d", &loaiGhe);
    
    printf("Nhập đối tượng (1: Khách thông thường, 2: HSSV): ");
    scanf("%d", &doiTuong);
    
    printf("\n");

    if (maPhim == 2 && tuoi < 18) {
        printf("[THÔNG BÁO] Từ chối bán vé: Khán giả chưa đủ 18 tuổi để xem phim mác C18!\n");
        return 0; 
    }

    switch (loaiGhe) {
        case 1:
            phu_thu = 0;
            break;
        case 2:
            phu_thu = 15000;
            break;
        default:
            printf("[LỖI] Mã loại ghế không hợp lệ! Vui lòng chọn 1 (Thường) hoặc 2 (VIP).\n");
            return 0;
    }

    tong_truoc_giam = gia_co_ban + phu_thu;
    tien_giam = 0;

    if (doiTuong == 2) {
        tien_giam = tong_truoc_giam * 20 / 100;
    } else {
        tien_giam = 0;
    }

    tong_tien_thanh_toan = tong_truoc_giam - tien_giam;

    printf("=== HÓA ĐƠN THANH TOÁN VÉ PHIM ===\n");
    printf("Giá vé chuẩn: %d VNĐ\n", gia_co_ban);
    if (phu_thu > 0) {
        printf("Phụ thu ghế VIP: %d VNĐ\n", phu_thu);
    }
    printf("Tổng phí dịch vụ: %d VNĐ\n", tong_truoc_giam);
    if (tien_giam > 0) {
        printf("Giảm giá HSSV (20%%): %d VNĐ\n", tien_giam);
    }
    printf("-----------------------------------\n");
    printf("TỔNG TIỀN PHẢI THANH TOÁN: %d VNĐ\n", tong_tien_thanh_toan);

    return 0;
}