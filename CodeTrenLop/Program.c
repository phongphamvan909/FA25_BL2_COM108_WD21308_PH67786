#include <stdio.h>
#include <string.h>

void demoString() {
	char mangKyTu[100];

	while (getchar() != '\n');

	printf("Nhap du lieu: ");
	fgets(mangKyTu, 100, stdin);

	printf("%s", mangKyTu);
	printf("\n");

	printf("Kich thuoc chuoi la: "); // ?? dài chu?i không g?m ký t? xu?ng dòng '\n'
	printf("%d\n", strlen(mangKyTu) - 1);

	printf("Reverse chuoi: ");
	printf("%s", strrev(mangKyTu));
	printf("\n");
}


void demoMang2Chieu() {
	char kyTu = 'A';
	// string - "string.h"
	char mangKyTu[10] = "Anh";
	for (int i = 0; i < 3; i++)
	{
		scanf(" %c", &mangKyTu[i]);
	}
	/*for (int i = 0; i < 3; i++)
	{
		printf(" %c", mangKyTu[i]);
	}*/
	puts(mangKyTu);

	int array[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int J = 0; J < 3; J++)
		{
			printf("Nhap mang [%d][%d]: ", i, J);
			scanf("%d,", &array[i][J]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int J = 0; J < 3; J++)
		{
			printf("%d,", array[i][J]);
		}
		printf("\n");
	}
}

void bai1();
void bai2();
void nhapMang(float a[], int n);
void xuatMang(float a[], int n);
int demDiemTb(float a[], int n);
int viTriMax(float a[], int n);
void bai3();

int main() {
    int chon;
    do {
		printf("\nChon chuc nang\n");
        printf("1. Thong tin sinh vien\n");
        printf("2. Tinh tong so le\n");
        printf("3. Thong tin diem lab\n");
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

// ================== BÀI 1 ====================
void bai1() {
    char ten1[50], ten2[50];
    int tuoi1, tuoi2;

    printf("\nNhap ten nguoi thu 1: ");
    fflush(stdin);
    gets(ten1);

    printf("Nhap tuoi nguoi thu 1: ");
    scanf("%d", &tuoi1);

    printf("\nNhap ten nguoi thu 2: ");
    fflush(stdin);
    gets(ten2);

    printf("Nhap tuoi nguoi thu 2: ");
    scanf("%d", &tuoi2);

    printf("\n--- Thong tin vua nhap \n");
    printf("Nguoi 1: %s - %d tuoi\n", ten1, tuoi1);
    printf("Nguoi 2: %s - %d tuoi\n", ten2, tuoi2);
}

// ================== BÀI 2 ====================
void bai2() {
    int n;
    printf("\nNhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac so < %d chia het cho 5: ", n);
    for (int i = 0; i < n; i++)
        if (i % 5 == 0) printf("%d ", i);

    int tong = 0;
    for (int i = 0; i < n; i++)
        if (i % 5 == 0) tong += i;

    printf("\nTong cac so < %d chia het cho 5 = %d\n", n, tong);
}

// ================== HÀM DÙNG CHO BÀI 3 ====================
void nhapMang(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap diem SV thu %d: ", i + 1);
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
        if (a[i] > a[vt]) vt = i;
    return vt;
}

// ================== BÀI 3 ====================
void bai3() {
    int n;
    float diem[100];

    printf("\nNhap so luong sinh vien: ");
    scanf("%d", &n);

    nhapMang(diem, n);

    printf("\n--- Xuat thong tin sinh vien ---\n");
    printf("So luong SV: %d\n", n);

    printf("Danh sach diem: ");
    xuatMang(diem, n);

    printf("So SV diem >= 5: %d\n", demDiemTb(diem, n));

    int vt = viTriMax(diem, n);
    printf("Vi tri diem cao nhat: %d (diem = %.2f)\n", vt + 1, diem[vt]);
}