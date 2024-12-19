#include <stdio.h>
#include <math.h>

int main() {
    float tien_gui, lai_suat_thang, so_thang, tien_lai, tien_nhan;
    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &tien_gui);
    printf("Nhap lãi suat hàng tháng (%): ");
    scanf("%f", &lai_suat_thang);
    lai_suat_thang /= 100;

    printf("Nhap so tháng gui: ");
    scanf("%f", &so_thang);
    tien_nhan = tien_gui * pow(1 + lai_suat_thang, so_thang);
    tien_lai = tien_nhan - tien_gui;
    printf("So tien lãi nhan ducc: %.2f\n", tien_lai);
    printf("Tong so tien nhan duoc: %.2f\n", tien_nhan);
    return 0;
}
