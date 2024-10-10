
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

#define MAX 100
#define MAX_STUDENT 200

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

typedef struct
{
	char ID[MAX];
	char Name[MAX];
	char point_PPLT[MAX];
	char point_DSTT[MAX];
	char point_GTUD[MAX];
	char classification[MAX];
	double average_point;

} sinhVien;

void enter_info(sinhVien sinhVienList[], int n);
void print_info(sinhVien sinhVienList[], int n);
void calculate_average_point(sinhVien sinhVienList[], int n);


int main() 
{
    int n;
	printf("Enter number of students: ");
		scanf("%d", &n);
	
	char temp; 
	scanf("%c",&temp);
	
	sinhVien sinhVienList[MAX_STUDENT];
	
	enter_info(sinhVienList,n);
	print_info(sinhVienList,n);
	
	calculate_average_point(sinhVienList,n);
    return 0;
}

void enter_info(sinhVien sinhVienList[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nEnter information of the student number %d", i+1);	
		printf("\nEnter student's ID: "); 
			fgets(sinhVienList[i].ID, MAX, stdin);
		printf("Enter student's full name: "); 
			fgets(sinhVienList[i].Name, MAX, stdin);
		printf("Enter the Programming methodology's point: "); 
			fgets(sinhVienList[i].point_PPLT, MAX, stdin);
		printf("Enter the Linear algebra's point: "); 
			fgets(sinhVienList[i].point_DSTT, MAX, stdin);
		printf("Nhap diem Applied calculus for IT's point: "); 
			fgets(sinhVienList[i].point_GTUD, MAX, stdin);
	}
}

void print_info(sinhVien sinhVienList[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nThong tin sinh vien thu %d",i+1);
		printf("\nMSSV: %s",sinhVienList[i].ID); 
		printf("Ho va ten: %s",sinhVienList[i].Name); 
		printf("Diem phuong phap lap trinh: %s",sinhVienList[i].point_PPLT); 
		printf("Diem Dai so tuyen tinh: %s",sinhVienList[i].point_DSTT); 
		printf("Diem Toan cho tin hoc: %s",sinhVienList[i].point_GTUD); 
	}
}

void calculate_average_point(sinhVien sinhVienList[], int n)
{
	double sum;
	double ave;
	
	int i;
	for(i = 0; i < n; i++)
	{
		sum = 0;
		sum += (atof(sinhVienList[i].point_PPLT) + atof(sinhVienList[i].point_DSTT) + atof(sinhVienList[i].point_GTUD));
		ave = sum / 3;
		sinhVienList[i].average_point = ave;
	}
	
	for(i = 0; i < n; i++)
	{
		printf("\nDiem trung binh tich luy cua sinh vien thu nhat: %lf",sinhVienList[i].average_point);
	}
}
