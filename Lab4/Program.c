#include <stdio.h>
#include <string.h>
void nhapMang(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap can nang thu cung %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}

void xuatMang(float a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%.2f  ", a[i]);
    printf("\n");
}

int demDiemTb(float a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] >= 5) dem++;
    return dem;
}

int viTriMax(float a[], int n) {
    int vt = 0;
    for (int i = 1; i < n; i++)
        if (a[i] < a[vt]) vt = i;
    return vt;
}

void bai3() {
    int n;
    float diem[100];

    printf("\nNhap so luong thu cung: ");
    scanf("%d", &n);

    nhapMang(diem, n);

    printf("\nHien thi thong tin thu cung\n");
    printf("So luong thu cung: %d\n", n);
    printf("Danh sach can nang thu cung: ");
    xuatMang(diem, n);
    printf("So thu cung nang duoi muc trung binh la: %d\n", demDiemTb(diem, n));
    int vt = viTriMax(diem, n);
    printf("Can nang thap nhat la: %d (can nang = %.2f)\n", vt + 1, diem[vt]);
}
void bai2() {
    int n, sum = 0;
    printf("\nNhap so nguyen duong n lon hon 3: ");
    scanf("%d", &n);
    for (int i = 3; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    if (n % 5 == 0)
    {
        printf("n la so chia het cho 5");
    }
    if (n % 5 != 0)
    {
        printf("n la so khong chia het cho 5");
    }
    else
    {
		printf("n khong hop le!, moi nhap so n la so nguyen");
    }
    printf("\nTong cac so le tu 3 den %d la: %d", n, sum);
}
void bai1() {
    char mon1[10], mamon1[10], mon2[10], mamon2[10], mon3[10], mamon3[10];
    int tinchi1, tinchi2, tinchi3;
    printf("\nNhap ten thu cung: ");
    fflush(stdin);
    scanf("%s", &mon1);
    printf("\nNhap ma thu cung: ");
    fflush(stdin);
    scanf("%s", &mamon1);
    printf("\nNhap nam sinh: ");
    scanf("%d", &tinchi1);
    printf("\nNhap ten thu cung: ");
    fflush(stdin);
    scanf("%s", &mon2);
    printf("\nNhap ma thu cung: ");
    fflush(stdin);
    scanf("%s", &mamon2);
    printf("\nNhap nam sinh: ");
    scanf("%d", &tinchi2);
    printf("\nNhap ten thu cung: ");
    fflush(stdin);
    scanf("%s", &mon3);
    printf("\nNhap ma thu cung: ");
    fflush(stdin);
    scanf("%s", &mamon3);
    printf("\nNhap nam sinh: ");
    scanf("%d", &tinchi3);
    printf("\n--- Thong tin vua nhap \n");
    printf("\nTen thu cung: %s", mon1);
    printf("\nMa thu cung: %s", mamon1);
    printf("\nNam sinh thu cung: %d", tinchi1);
    printf("\nTuoi thu cung: %d", 2025 - tinchi1);
    printf("\n");
    printf("\nTen thu cung: %s", mon2);
    printf("\nMa thu cung: %s", mamon2);
    printf("\nNam sinh thu cung: %d", tinchi2);
    printf("\nTuoi thu cung: %d", 2025 - tinchi2);
    printf("\n");
    printf("\nTen thu cung: %s", mon3);
    printf("\nMa thu cung: %s", mamon3);
    printf("\nNam sinh thu cung: %d", tinchi3);
    printf("\nTuoi thu cung: %d", 2025 - tinchi3);
}
	
int main() {
    int chon;
    do {
		printf("\nChon chuc nang\n");
        printf("1. Thong tin thu cung\n");
        printf("2. tinh tong\n");
        printf("3. Thong tin cua hang\n");
        printf("0. Thoat\n");

        printf("Moi chon: ");
        scanf("%d", &chon);

        switch (chon) {
        case 1: bai1(); break;
        case 2: bai2(); break;
        case 3: bai3(); break;
        case 0: printf("Thoat chuong trinh...\n"); break;
        default: printf("Lua chon khong hop le!\n");
        }
    } while (chon != 0);

    return 0;
}
