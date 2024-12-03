#define SIZE 10
#include <stdio.h>
void nhapmang (float a[], int n);
void xuatmang (float a[], int n);
float tonggio(float a[], int n);
float tb(float a[], int n);
float max(float a[], int n);
int main()
{
	float A[SIZE];
	int n=9;
	nhapmang(A,n);
	printf("thoi gian hoc tap cua tung ngay theo thu tu tu Thu 2 den Chu Nhat la\t");
	xuatmang(A,n);	
	
	int kq1=tonggio(A,n);
	printf("\ntong so gio hoc trong tuan la:%d",kq1);
	
	printf("\ntb so gio hoc trong tuan la:%d",tb(A,n));
	printf("\ntb so gio hoc nhieu nhar trong tuan la:%d",max(A,n));
	
	return 0;
}
float max(float a[], int n)
{
	int max=0;
	for (int i=0;i<n;++i)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
}
float tb(float a[], int n)
{
	int tongg=0;
	for (int i=0;i<n;++i)
	{
		
		tongg==tonggio(a,n);
		tongg=tongg/7;
	}
}

float tonggio(float a[], int n)
{
	int tong=0;
	for (int i = 0; i<n; i++)
	{
		tong=tong+a[i];
	}
	return tong;
}

void xuatmang (float a[], int n)
{
	int i;
	
	for(i=2; i<n; i++)
	{
		printf("%8.f", a[i]);
	}
}

void nhapmang (float a[], int n)
{
	int i;
	i = 2;
	while(i<n)
	{
		printf("\nSo gio ngay thu %d: ", i,n);
		scanf("%f", &a[i]); 
		i++;
	}
}
