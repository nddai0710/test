// viet chuong trinh bang cac ham: mang tinh, thuc hien cac cong viec
// nhap vao 1 danh sach gom n san pham gom product(ID, Name, year, company, amount, price)
// dua danh sach cac san pham vua nhap ra man hinh
// nhap vao 1 hang san xuat dua ra danh sach cac san pham cua hang do
// nhap vao 1 hang san xuat va 1 nam san xuat dua ra danh sach cac san pham cua nxs trong nam do
// nhap vao 1 vi tri k, nhap vao 1 san pham moi chen san pham moi vua nhap vao sau san pham thu k trong ds
// sap xep ds cac san pham theo chieu giam dan tong tien 

#include <bits/stdc++.h>
using namespace std;

struct Product
{
	int year, amount;
	string id, name, company;
	double price;
};

void inputProducts(Product list[], int &n)
{
	do
	{
	cout << "Nhap N = "; cin >> n;
	}while(n <= 0);
	cout << "Input the list of products: \n";
	for(int i = 0; i < n; i++)
	{
		cout << "Input the "<< i + 1 << "-product: " << endl;
		cin.ignore();
		cout << "ID: "; getline(cin, list[i].id);
		cout << "Name: "; getline(cin, list[i].name);
		cout << "Year: "; cin >> list[i].year;
		cin.ignore();
		cout << "Company: "; getline(cin, list[i].company);
		cout << "Amount: "; cin >> list[i].amount;
		cout << "Price: "; cin >> list[i].price;
	}
}

void outputProducts(Product list[], int n)
{
	cout << "The list of products:" << endl;
	cout << "No\tID\tName\tYear\tCompany\tAmount\tPrice\tTotal" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << i + 1 << "\t";
		cout << list[i].id << "\t";
		cout << list[i].name << "\t";
		cout << list[i].year << "\t";
		cout << list[i].company << "\t";
		cout << list[i].amount << "\t";
		cout << list[i].price << "\t";
		cout << (list[i].amount * list[i].price) << endl;
	}
}
void timSanPham(Product list[], int n)
{
	cout << "Nhap san pham can tim: " << endl;
	string tim;
	getline(cin, list[i].tim);
}

int main()
{
	int n;
	Product list[100];
	inputProducts(list, n);
	outputProducts(list, n);
	return 0;
}
