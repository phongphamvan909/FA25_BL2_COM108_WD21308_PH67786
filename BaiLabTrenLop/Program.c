#include <stdio.h>
void bai1() {
	char tenBan1[30], tenBan2[30];
	int tuoiBan1, tuoiBan2;
	printf("Moi nhap thong tinh cua ban thu nhat:\n");
	printf("Ten la: ");
	scanf("%s", &tenBan1[30]);
	printf("\n");
	printf("Tuoi la:");
	scanf("%d", &tuoiBan1);
	printf("\n");
	printf("Moi nhap thong tinh cua ban thu hai:\n");
	printf("Ten la: ");
	scanf("%s", &tenBan2[30]);
	printf("\n");
	printf("Tuoi la:");
	scanf("%d", &tuoiBan2);
	printf("\n");
	printf("\n--- Thong tin vua nhap \n");
	printf("Nguoi 1: %s - %d tuoi\n", tenBan1, tuoiBan1);
	printf("Nguoi 2: %s - %d tuoi\n", tenBan2, tuoiBan2);
}
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
int main() {
	int chon;
	do {
		printf("1. Thong tin gia dinh\n");
		printf("2. So chia het cho 5\n");
		printf("3. Thong tin sinh vien thi Lap Trinh\n");
		printf("0. Thoat\n");

		printf("Moi chon: ");
		scanf("%d", &chon);

		switch (chon) {
		case 1: bai1(); break;
		case 2: bai2(); break;
		case 0: printf("Thoat chuong trinh...\n"); break;
		default: printf("Lua chon khong hop le vui long ch tu 1-3 !\n");
		}
	} while (chon != 0);
}