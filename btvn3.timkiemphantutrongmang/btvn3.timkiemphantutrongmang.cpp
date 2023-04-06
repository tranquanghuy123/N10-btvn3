#include<iostream>
using namespace std;

// Ham nhap
void Nhapmang(int arr[], int& n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " Nhap gia tri phan tu: " << "a[" << i << "] = ";
		cin >> arr[i];
	}
}

// Ham xuat
void Xuatmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Gia tri cua phan tu:";
		cout << "a[" << i << "] = " << arr[i] << endl;
	}
}

// Ham tim kiem phan tu
int Timkiem(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			return i;
	}
	return -1;
}

int main()
{
	int a[100];
	int n, x;
	Nhapmang(a, n);
	Xuatmang(a, n);
	cout << " Nhap gia tri: ";
	cin >> x;
	int index = Timkiem(a, n, x);
	if (index == -1)
	{
		cout << "Khong tim thay phan tu" << endl;
	}
	else
	{
		cout << "index = " << index << endl;
	}
	return 0;
}