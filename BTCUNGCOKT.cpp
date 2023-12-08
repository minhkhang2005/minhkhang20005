#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
    struct  sinhvien 
   {
   	char Masv[20];
   	char Hotensv[30];
   	char Phai[20];
   	float Diemtoan,DiemAV,KQHT;
   	char Xeploai[30];
   };
   typedef struct sinhvien SV;
   void nhapsv(SV &x);
int main()
{   SV x,a[50];
	int n,key;
	while(true)
	{
		system("cls");
		printf("\t\t\t*********************************\n");
		printf("\t\t\t**     CHUONG TRINH CUNG CO    **\n");
		printf("\t\t\t**      1. Nhap ds sinh vien   **\n");
		printf("\t\t\t**      2. In ds sinh vien     **\n");
		printf("\t\t\t**      3. Nhap chuoi va chuan hoa chuoi              **\n");
		printf("\t\t\t**      4. Nhap va dem ki tu               **\n");
		printf("\t\t\t**      5. Nhap xuat mang 2 chieu              **\n");
		printf("\t\t\t**      6. Sap xep mang              **\n");
		printf("\t\t\t**      7. Tinh tong NT                                  **");
		printf("\t\t\t**      0. Thoat                                  **");
		printf("\t\t\t*********************************\n");

	fflush(stdin);
	printf("\n\t\t\t\t  AN PHIM DE CHON:");
	scanf("%d",&key);
	switch(key)
	{
		case 1:
			do{
			printf("\n Nhap so luong sinh vien: ");
			scanf("%d",&n);}
			while(n<1);
			printf("\n Nhan phim bat ki de tiep tuc !");
			getch();
			break;
		case 2:
			printf("nhan phim bat ki de tiep tuc !");
			getch();
			break;
		case 3:
				printf("nhan phim bat ki de tiep tuc !");
			getch();
			break;
		case 4:
		     	printf("nhan phim bat ki de tiep tuc !");
			getch();
			break;
		case 5:
			printf("nhan phim bat ki de tiep tuc !");
			getch();
			break;
		case 0:
		    exit(1);
		default:
		   printf("\n Khong co chuc nang nay");
		   printf("\nNhan phim bat ki de tiep tuc !");
		   getch();
		   break;	 
	}
	
}
}
void nhapsv(SV &x)
{
fflush(stdin);
printf("\n Nhap ma so sinh vien");
gets(x.Masv);
fflush(stdin);
printf("\n Nhap ho ten sinh vien");
gets(x.Hotensv);
fflush(stdin);
printf("\n Nhap phai");
gets(x.Phai);
fflush(stdin);
do
{
printf("\n Nhap diem toan:");
scanf("%d",&x.Diemtoan);
}
while(0<x.Diemtoan||x.Diemtoan>10);
fflush(stdin);
do
{
printf("\n Nhap diem toan:");
scanf("%d",&x.DiemAV);
}
while(0<x.DiemAV||x.DiemAV>10);
do
{
	printf("\n nhap KQHT:");
	scanf("%d",x.KQHT);
	}
	while(0<x.KQHT||x.KQHT>4);

}
void Nhapsv1(int )

   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	

