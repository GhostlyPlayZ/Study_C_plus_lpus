// 300 Bai_code.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Bai 1: Tính thể tích hình cầu biết diện tích:
/*
#include<iostream>
using namespace std;

double Ban_kinh_hinh_cau(double S)
{
	double pi = 3.14;
	double R;
	R = sqrt(S/(4*pi));
	return R;
}

double The_tich_hinh_cau(double pi, double R)
{
	double V = (4.0 / 3.0) * pi * (R*R*R);
	return V;
}

int main()
{
	double S;
	double pi = 3.14;
	cout << "Nhap dien tich hinh cau: ";
	cin >> S;

	double R = Ban_kinh_hinh_cau(S);
	double V = The_tich_hinh_cau(pi,R);
	cout << "The tich hinh cau: " << V << endl;
	return 0;
}
*/

// Bài 2: Nhập vào tọa độ 2 điểm A(xA, yA) và B(xB, yB). Tính khoảng cách AB.
/*
#include<iostream>
#include<cmath>
using namespace std;

double Khoang_cach_AB(double xA, double yA , double xB, double yB)
{
	double AB = sqrt(pow((xB*xA),2)+pow((yB*yA),2));
	return AB = abs(AB);
}

int main()
{
	double xA;
	double yA;
	double xB;
	double yB;
	cout << "Nhap toa do 2 diem: "<<endl;
	cout << "A"<<endl;
	cin >> xA;
	cin >> yA;

	cout << "B"<<endl;
	cin >> xB;
	cin >> yB;

	cout << "Toa do AB: "<< Khoang_cach_AB(xA, yA, xB, yB)<< endl;
	return 0;
}
*/

//Bài 3: Xác định một điểm nằm trong hay ngoài đường tròn biết tọa độ của tâm và bán kính
/*
#include<iostream>
#include<cmath>
using namespace std;

double Khoang_cach_tu_diem_diem_M_tam_C(double Cx, double Cy, double Mx, double My)
{
	return sqrt(pow((Mx - Cx),2) + pow((My - Cy),2));
}

int main()
{
	double Cx;
	double Cy;
	double Mx;
	double My;
	double R;
	cout << "Toa do tam:" << endl;
	cin >> Cx;
	cin >> Cy;
	cout << "Ban kinh: " << endl;
	cin >> R;
	cout << "Toa do diem: " << endl;
	cin >> Mx;
	cin >> My;

	Khoang_cach_tu_diem_diem_M_tam_C(Cx, Cy, Mx, My);

	if (Khoang_cach_tu_diem_diem_M_tam_C(Cx, Cy, Mx, My) < R)
	{
		cout << "Diem M nam trong duong tron";
	}
	if (Khoang_cach_tu_diem_diem_M_tam_C(Cx, Cy, Mx, My) == R)
	{
		cout << "Diem M nam tren duong tron";
	}
	if (Khoang_cach_tu_diem_diem_M_tam_C(Cx, Cy, Mx, My) > R)
	{
		cout << "Diem M nam ngoai duong tron";
	}
	return 0;
}
*/

//Bài 4: Viết chương trình nhập vào ba số thực là ba cạnh của một tam giác. Kiểm tra 
//ba cạnh được nhập có hợp lệ hay không.Nếu hợp lệ, hãy cho biết loại tam giác và
//tính diện tích tam giác đó.
/*
#include<iostream>
using namespace std;

double Canh_lon_nhat(double a, double b, double c)
{
	return  std::max({ a, b, c });
}

void Loai_Tam_Giac(double a, double b, double c)
{
	if (a == b && b == c)
	{
		cout << "Tam giac deu" << endl;
	}
	else if((a==b && c!=a) || (a==c && b!=a) || (b==c && a!=b))
	{
		cout << "Tam giac can" << endl;
	}
	else
	{
		double maxCanh = Canh_lon_nhat(a, b, c);
		double x, y;

		if (a == maxCanh)
		{
			x = b;
			y = c;
		}
		else if (b == maxCanh)
		{
			x = a;
			y = c;
		}
		else
		{
			x = a;
			y = b;
		}

		if (pow(x, 2) + pow(y, 2) == pow(maxCanh, 2))
		{
			cout << "Tam giac vuong" << endl;
		}
		else if (pow(x, 2) + pow(y, 2) > pow(maxCanh, 2))
		{
			cout << "Tam giac nhon" << endl;
		}
		else if (pow(x, 2) + pow(y, 2) < pow(maxCanh, 2))
		{
			cout << "Tam giac tu" << endl;
		}
		else
		{
			cout << "Tam giac thuong" << endl;
		}
	}
}

//công thức Heron: sqrt( nửa chu vi * (nửa chu vi-a) * (nửa chu vi-b) * (nửa chu vi-c) )

double Nua_chu_vi(double a, double b, double c)
{
	return (a + b + c) / 2;
}

double Dien_tich_tam_giac(double a, double b, double c)
{
	double S = sqrt(Nua_chu_vi(a, b, c) * (Nua_chu_vi(a, b, c) - a) * (Nua_chu_vi(a, b, c) - b) * (Nua_chu_vi(a, b, c) - c));
	return S;
}

int main()
{
	double a;
	double b;
	double c;
	cout << "Nhap 3 canh cua tam giac:"<<endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "Khong phai la tam giac";
		return 0;
	}
	else
	{
		Loai_Tam_Giac(a, b, c);
		Nua_chu_vi(a, b, c);

		cout << "Dien tich tam giac la: " << Dien_tich_tam_giac(a, b, c) << endl;
	}
	return 0;
}
*/

//Bài 5: Viết chương trình nhập vào tọa độ các đỉnh của tam giác ABC và của điểm M.
//xác định điểm M nằm trong, nằm trên cạnh hay nằm ngoài tam giác ABC.
/*
#include<iostream>
using namespace std;

//Tính diện tích tam giác ABC khi biết tọa độ 3 đỉnh:
//S = 1/2 * |xA(yB-yC) + xB(yC-yA) + xC(yA-yB)|
double Dien_tich_tam_giac_ABC(int xA, int yA, int xB, int yB, int xC, int yC) //Tính diện tích tam giác ABC khi biết tọa độ 3 đỉnh:
{
	return (1.0 / 2) * abs(xA * (yB - yC) + xB * (yC - yA) + xC * (yA - yB));
}

//Tính diện tích 3 tam giác: AMB, BMC, CMA
double Dien_tich_tam_giac_AMB(int xA, int yA, int xB, int yB, int xM, int yM)
{
	return (1.0 / 2) * abs(xA * (yB - yM) + xB * (yM - yA) + xM * (yA - yB));
}

double Dien_tich_tam_giac_BMC(int xB, int yB, int xC, int yC, int xM, int yM)
{
	return (1.0 / 2) * abs(xB * (yC - yM) + xC * (yM - yB) + xM * (yB - yC));
}

double Dien_tich_tam_giac_CMA(int xC, int yC, int xA, int yA, int xM, int yM)
{
	return (1.0 / 2) * abs(xC * (yA - yM) + xA * (yM - yC) + xM * (yC - yA));
}
int main()
{
	int xA, yA, xB, yB, xC, yC, xM, yM;
	cout << "Nhap toa do 3 diem A, B, C: " << endl;
	cin >> xA >> yA >> xB >> yB >> xC >> yC;
	cout << "Nhap toa do diem M: " << endl;
	cin >> xM >> yM;

	double S = Dien_tich_tam_giac_ABC(xA, yA, xB, yB, xC, yC);
	double S1 = Dien_tich_tam_giac_AMB(xA, yA, xB, yB, xM, yM);
	double S2 = Dien_tich_tam_giac_BMC(xB, yB, xC, yC, xM, yM);
	double S3 = Dien_tich_tam_giac_CMA(xC, yC, xA, yA, xM, yM);

	cout << S << endl;
	cout << S1 << endl;
	cout << S2 << endl;
	cout << S3 << endl;


	//Nếu tổng 3 diện tích tam giác bằng diện tích tam giác ABC thì điểm M nằm trong tam giác ABC
	//Nếu 1 trong 3 diện tích tam giác bằng 0 thì điểm M nằm trên cạnh tam giác ABC
	//Nếu tổng 3 diện tích tam giác nhỏ hơn diện tích tam giác ABC thì điểm M nằm ngoài tam giác ABC
	if (S1 == 0 || S2 == 0 || S3 == 0)
	{
		cout << "Diem M nam tren canh tam giac ABC";
	}
	else if (S==S1+S2+S3)
	{
		cout << "Diem M nam trong tam giac ABC";
	}
	else
	{
		cout << "Diem M nam ngoai tam giac ABC";
	}
	return 0;
}
*/

//Bài 6: Viết chương trình nhập vào ba số nguyên.Hãy in ba số này ra màn hình theo thứ tự tăng dần
/*
#include<iostream>
using namespace std;

void Sap_xep_tang_dan(int a, int b, int c)
{
	if (a > b)
	{
		swap(a, b);
	}
	if (a > c)
	{
		swap(a, c);
	}
	if (b > c)
	{
		swap(b, c);
	}
	cout << "3 so nguyen theo thu tu tang dan: " << a << " " << b << " " << c << endl;
}
int main()
{
	int a, b, c;
	cout << "Nhap 3 so nguyen: " << endl;
	cin >> a >> b >> c;
	Sap_xep_tang_dan(a, b, c);
	return 0;
}
*/

//Bài 7: Giải phương trình bậc 1:ax + b = 0
/*
#include<iostream>
using namespace std;

void Giai_phuong_trinh_bac_1(double a, double b)
{
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "Phuong trinh vo so nghiem" << endl;
		}
		else
		{
			cout << "Phuong trinh vo nghiem" << endl;
		}
	}
	else
	{
		cout << "Phuong trinh co nghiem duy nhat: " << -b / a << endl;
	}
}

int main()
{
	double a, b;
	cout << "Nhap 2 so a, b: " << endl;
	cin >> a >> b;

	Giai_phuong_trinh_bac_1(a, b);
	return 0;
}
*/

//Bài 8: Giải phương trình bậc 2: ax^2 + bx + c = 0
/*
#include<iostream>
using namespace std;

void Giai_phuong_trinh_bac_2(double a, double b, double c)
{
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "Phuong trinh vo so nghiem" << endl;
			}
			else
			{
				cout << "Phuong trinh vo nghiem" << endl;
			}
		}
		else
		{
			cout << "Phuong trinh co nghiem duy nhat: " << -c / b << endl;
		}
	}
	else
	{
		double delta = b * b - 4 * a * c;
		if (delta < 0)
		{
			cout << "Phuong trinh vo nghiem" << endl;
		}
		else if (delta == 0)
		{
			cout << "Phuong trinh co nghiem kep: " << -b / (2 * a) << endl;
		}
		else
		{
			cout << "Phuong trinh co 2 nghiem phan biet: " << (-b + sqrt(delta)) / (2 * a) << " va " << (-b - sqrt(delta)) / (2 * a) << endl;
		}
	}
}

int main()
{
	double a, b, c;
	cout << "Nhap 3 so a, b, c: " << endl;
	cin >> a >> b >> c;
	Giai_phuong_trinh_bac_2(a, b, c);
	return 0;
}
*/

// Bài 9: Viết chương trình nhập vào số x chỉ số đo của một góc, tính bằng phút.Cho
// biết nó thuộc góc vuông thứ bao nhiêu của vòng tròn lượng giác. (1 độ = 60 phút)
// 0-90: góc vuông thứ 1
//90-180: góc vuông thứ 2
//180-270: góc vuông thứ 3
//270-360: góc vuông thứ 4
/*
#include<iostream>
using namespace std;

int Chuyen_tu_do_sang_phut(int x)
{
	return x * 60;
}

void Goc_vuong_thu(double x)
{
	if (x >=0 && x<= 360)
	{
		cout << x << " Thuoc goc vuong thu: " << x / 90 << endl;
	}
	else
	{
		cout << x << " Khong thuoc goc vuong nao cua vong tron lượng giác" << endl;
	}
}

int main()
{
	int x;
	cout << "Nhap so do cua goc: " << endl;
	cin >> x;

	Chuyen_tu_do_sang_phut(x);
	Goc_vuong_thu(x);
	return 0;
}
*/

//Bài 10:Số bảo hiểm xã hội của Canada (SIN - Canadian Social Insurance Number)  
//là một số có 9 chữ số, được kiểm tra tính hợp lệ như sau : 
//- Số phải nhất(vị trí là 1, tính từ phải sang), là số kiểm tra(check digit). 
//- Trọng số được tính từ phải qua trái(không tính check digit), bằng s1 + s2 :
//+ s1 là tổng các số có vị trí lẻ.
//+ Các số có vị trí chẵn nhân đôi.Nếu kết quả nhân đôi có hai chữ số thì kết quả là tổng của hai chữ số này.s2 là tổng các kết quả.
//SIN hợp lệ có tổng trọng số với số kiểm tra chia hết cho 10.
//Ví dụ : SIN 193456787 - Số kiểm tra là 7 (màu xanh tô đậm). - Trọng số là tổng của s1 và s2, với: +s1 = 1 + 3 + 5 + 7 = 16
//+ Các số có vị trí chẵn nhân đôi : (9 * 2) (4 * 2) (6 * 2) (8 * 2)  18 8 12 16
//s2 = (1 + 8) + 8 + (1 + 2) + (1 + 6) = 27
//Trọng số bằng s1 + s2 = 16 + 27 = 43.
//Vì tổng trọng số với số kiểm tra 43 + 7 = 50 chia hết cho 10 nên số SIN hợp lệ.
//Viết chương trình nhập một số SIN.Kiểm tra xem số SIN đó có hợp lệ hay không.
//Nhập 0 để thoát.
/*
#include<iostream>
#include<string>
#include<vector> //Thư viện mảng động vector
using namespace std;

bool Check(int SIN)
{
	int element=0;
	while (SIN != 0)
	{
		SIN = SIN / 10;
		element++;
	}
	if (element != 9)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int Check_number(int number) // Số ngoài cùng nằm bên phải
{
	return number % 10;
}

int Sum_odd(int number) // Tổng các số ở vị trí lẻ
{
	string str = to_string(number);
	int sum = 0;
	for (int i = 0; i < str.length(); i++) //Mảng bắt đầu từ 0 
	{
		if (i % 2 == 0) // Bắt đầu từ 0
		{
			sum = sum + (str[i]-'0'); //Chuyển kí tự sang số
		}
	}
	return sum;
}

int Sum_even(int number)
{
	string str = to_string(number);
	int sumNum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (i % 2 != 0)
		{
			int doubleNum = (str[i] - '0') * 2;
			if (doubleNum >= 10)
			{
				sumNum = sumNum + (doubleNum / 10) + (doubleNum % 10);
			}
			else
			{
				sumNum = sumNum + doubleNum;
			}
		}
	}
	return 0;
}
/*
vector<int> Even_number(int number) // Các số ở vị trí chẵn(Theo mảng)
{
	string str = to_string(number);
	vector<int> arr_result; //Khai báo mảng động
	for (int i = 0; i < str.length(); i++) //Mảng bắt đầu từ 0
	{
		if (i % 2 == 0)
		{
			int sumMutiply;
			sumMutiply =(str[i] - '0') * 2; //Chuyển kí tự sang số
			arr_result.push_back(sumMutiply); //Đẩy giá trị vào mảng
		}
	}
	return arr_result;
}

int Sum_even(vector<int> arr) // Tổng các số ở vị trí chẵn
{
	int sum = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sum = sum + (arr[i] / 10) + (arr[i] % 10);
	}
	cout << sum << endl;
	return sum;
}

int main()
{
	int SIN;
	cout << "Nhap 0 de thoat" << endl;
	cout << "Nhap so SIN: ";
	cin >> SIN;

	while (SIN != 0) {
		if (Check(SIN)==true) {
			int S1 = Sum_odd(SIN);
			int S2 = Sum_even(SIN);
			int S = S1 + S2;
			if ((S + Check_number(SIN)) % 10 == 0)
			{
				cout << "So SIN hop le" << endl;
			}
			else
			{
				cout << "So SIN khong hop le" << endl;
			}
		}
		else {
			cout << "So SIN khong hop le" << endl;
		}
		cout << endl;
		cout << "Nhap 0 de thoat" << endl;
		cout << "Nhap so SIN: ";
		cin >> SIN;
	}
	return 0;
}
*/

//Viết trò chơi bao - đá - kéo với luật chơi: bao thắng đá, đá thắng kéo, kéo (kéo-búa-bao)
//thắng bao.Người dùng nhập vào một trong ba ký tự b(bao), d(đá), k(kéo); máy
//tính sinh ngẫu nhiên một trong ba ký tự trên, thông báo kết quả chơi.
/*
#include<iostream>
using namespace std;

char computer_choice()
{
	srand(time(NULL)); //Hàm sinh số ngẫu nhiên ngoài null có thể để là 0 hoặc bất kỳ số nào (NULL tương đương với 0)
	int random = rand() % 3; //Sinh số ngẫu nhiên từ 0-2
	char computer_choice[] = {'b', 'd', 'k'};
	return computer_choice[random];
}

int main()
{
	char human_choice;
	cout << "Nhap item hoac nhap 0 de thoat: ";
	cin >> human_choice;

	int h = 0;
	int c = 0;
	
	while (human_choice != 0)
	{
		if (human_choice == 'g')
		{
			cout << "Computer said: WTF dude ?!";
			break;
		}
		if (human_choice != 'b' && human_choice != 'd' && human_choice != 'k')
		{
			cout << "item khong hop le" << endl;
			cout << "Nhap item hoac nhap 0 de thoat: ";
			cin >> human_choice;
			cout << endl;
		}
		else
		{
			char cc = computer_choice();
			cout <<"Computer choice: "<< cc << endl;

			if ((human_choice == 'b' && cc == 'd') || (human_choice == 'd' && cc == 'k') || (human_choice == 'k' && cc == 'b'))
			{
				h++;
				cout << "H: " << h << " - " << "C: " << c << endl;
			}
			else
			{
				c++;
				cout << "H: " << h << " - " << "C: " << c << endl;
			}

			if (h == 3 || c == 3)
			{
				if (h == 3)
				{
					cout << "Human win" << endl;
				}
				else
				{
					cout << "Computer win" << endl;
				}
				break;
			}
			cout << "Nhap item hoac nhap 0 de thoat: ";
			cin >> human_choice;
			cout << endl;
		}
	}
	return 0;
}
*/

//Bài 12: Viết chương trình giải hệ phương trình 2 ẩn: 
//a1x + b1y = c1
//a2x + b2y = c2

//Phương pháp Cramer:
//D=a1*b2-a2*b1
//Dx=c1*b2-c2*b1
//Dy=a1*c2-a2*c1
//x=Dx/D
//y=Dy/D

/*
#include<iostream>
using namespace std;

int D(int a1, int b1, int a2, int b2)
{
	return a1 * b2 - a2 * b1;
}

int Dx(int c1, int b1, int c2, int b2)
{
	return c1 * b2 - c2 * b1;
}

int Dy(int a1, int c2, int a2, int c1)
{
	return a1 * c2 - a2 * c1;
}

int main()
{
	int a1, b1, c1, a2, b2, c2;
	cout << "Nhap a1, b1, c1: ";
	cin >> a1 >> b1 >> c1;
	cout << "Nhap a2, b2, c2: ";
	cin >> a2 >> b2 >> c2;

	int x;
	int y;

	cout << "He phuong trinh co nghiem: " << endl;
	if (D(a1, b1, a2, b2) != 0)
	{
		x = Dx(c1, b1, c2, b2) / D(a1, b1, a2, b2);
		y = Dy(a1, c2, a2, c1) / D(a1, b1, a2, b2);
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	else
	{
		cout << "He phuong trinh vo nghiem" << endl;
	}
	return 0;
}
*/

//: Viết chương trình nhập vào ngày, tháng, năm. Kiểm tra ngày và tháng nhập có hợp lệ hay không.Tính thứ trong tuần của ngày đó.
//(1) Chủ nhật
//(2) Thứ hai
//(3) Thứ ba
//(4) Thứ tư
//(5) Thứ năm
//(6) Thứ sáu
//(7) Thứ bảy
/*
#include<iostream>
#include<string>
using namespace std;
void Kiem_tra_ngay_trong_thang(int day, int month)
{
	if (day == 31)
	{
		switch (month)
		{
		case 2:
			cout << "Thang 2 chi co 28 ngay tru nam nhuan la 29 ngay" << endl;
			break;
		case 4:
			cout << "Thang 4 chi co 30 ngay" << endl;
			break;
		case 6:
			cout << "Thang 6 chi co 30 ngay" << endl;
			break;
		case 9:
			cout << "Thang 9 chi co 30 ngay" << endl;
			break;
		case 11:
			cout << "Thang 11 chi co 30 ngay" << endl;
			break;
		}
	}
}

int Lay_2_chu_so_cuoi_cua_nam(int year)
{
	return year % 100;
}

int Lay_cacl_chu_so_dau_cua_nam(int year)
{
	return year / 100;
}
int main()
{
	int day, month, year;
	cout << "Nhap ngay, thang, nam: ";
	cin >> day >> month >> year;

	if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1)
	{
		cout << "Ngay thang nam khong hop le" << endl;
	}
	else
	{
		Kiem_tra_ngay_trong_thang(day, month);

		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // Năm nhuận chia hết cho 4 và không chia hết cho 100 hoặc chia hết cho 400
		{
			cout << year << " la nam nhuan" << endl;
		}
		else
		{
			cout << year << " khong phai la nam nhuan" << endl;
			if (month == 2 && day == 29)
			{
				cout << "Thang 2 chi co 28 ngay tru nam nhuan la 29 ngay" << endl;
				return 0;
			}
		}

		//Công thức zeller tính thứ trong tuần biết ngày, tháng, năm
		//day:ngày
		//mont:háng
		//K: năm thế kỷ(2 chữ số cuối)
		//J: thế kỷ(các chữ số đầu)
		//h: thứ trong tuần

		if (month == 2) //theo quy tắc của Zeller, tháng 1 và 2 được coi là tháng 13 và 14 của năm trước
		{
			month = 14;
			year = year - 1;
		}

		int K = Lay_2_chu_so_cuoi_cua_nam(year);
		int J = Lay_cacl_chu_so_dau_cua_nam(year);

		int h = (day + (13 * (month + 1) / 5) + K + (K / 4) + (J / 4) - (2*J)) % 7;

		switch (h)
		{
		case 1:
			cout << "Chu nhat" << endl;
			break;
		case 2:
			cout << "Thu 2" << endl;
			break;
		case 3:
			cout << "Thu 3" << endl;
			break;
		case 4:
			cout << "Thu 4" << endl;
			break;
		case 5:
			cout << "Thu 5" << endl;
			break;
		case 6:
			cout << "Thu 6" << endl;
			break;
		case 7:
			cout << "Thu 7" << endl;
			break;
		default:
			cout << "Thu trong tuan khong hop le" << endl;
			break;
		}
	}
	return 0;
}
*/


//Bonus: Tham chiếu
/*
#include <iostream>
using namespace std;

void f(int& x) //x là tham chiếu được gán địa chỉ của a
{
	x = x-1;
}

int main()
{
	int a = 10;
	f(a);
	cout << a << endl; //a = 9 vì a được truyền vào hàm f và thực hiện phép trừ 1
	return 0;
}
*/


//Bài 14: Viết chương trình nhập vào ngày, tháng, năm. Tìm ngày, tháng, năm của ngày tiếp theo. 
//Tương tự, tìm ngày, tháng, năm của ngày ngay trước đó
/*
#include<iostream>
#include<ctime> //Thư viện thời gian
#include<iomanip> //Thư viện cung cấp các hàm để định dạng đầu ra
#include<string>
using namespace std;

void Nhap_ngay_thang_nam(int& day, int& month, int& year)
{
	cout << "Nhap ngay: ";
	cin >> day;

	cout << "Nhap thang: ";
	cin >> month;

	cout << "Nhap nam: ";
	cin >> year;

	cout << endl;
}

bool Kiem_tra_dinh_dang(int day, int month, int year)
{
	if (day < 1 || day > 31 || month < 1 || month > 12)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool Kiem_tra_nam_nhuan(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // Năm nhuận chia hết cho 4 và không chia hết cho 100 hoặc chia hết cho 400
	{
		return true;
	}
	else
	{
		return false;
	}
}

string print_year(int year)
{
	if (year < 0)
	{
		year = year * -1;
		return (to_string(year) + " TCN");
	}
	return to_string(year);
}

void Ngay_tiep_theo(int &day, int &month, int &year)
{
	if (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
	{
		day = 1;
		if (month == 12)
		{
			month = 1;
			year++;
		}
		else
		{
			month++;
		}
	}
	else if (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11))
	{
		day = 1;
		month++;
	}
	else if (Kiem_tra_nam_nhuan(year) == true && month == 2 && day == 29)
	{
		day = 1;
		month++;
	}
	else if (Kiem_tra_nam_nhuan(year) == false && month == 2 && day == 28)
	{
		day = 1;
		month++;
	}
	else
	{
		day++;
	}
}

void Ngay_hom_qua(int& day, int& month, int& year)
{
	if (day == 1)
	{
		if (month == 1)
		{
			day = 31;
			month = 12;
			year--;
		}
		else
		{
			month--;
			if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				day = 30;
			}
			else if(Kiem_tra_nam_nhuan(year) == true && month == 2)
			{
				day = 29;
			}
			else if (Kiem_tra_nam_nhuan(year) == false && month == 2)
			{
				day = 28;
			}
			else
			{
				day = 31;
			}
		}
	}
	else
	{
		day--;
	}
}

int main() {
	int day, month, year;

	do
	{
		cout << "Nhap ngay thang nam = 0 de thoat" << endl;
		cout << endl;
		Nhap_ngay_thang_nam(day, month, year);

		if (Kiem_tra_dinh_dang(day, month, year)==false)
		{
			cout << "Du lieu ngay thang nam nhap vao khong dung" << endl;
			continue;
		}
		else
		{
			if (Kiem_tra_nam_nhuan(year) == false)
			{
				if (month == 2 && day > 28)
				{
					cout << "Thang 2 chi co 28 ngay tru nam nhuan la 29 ngay" << endl;
					continue;
				}
				else
				{
					int curent_day = day;
					Ngay_tiep_theo(day, month, year);
					
					cout << "Ngay tiep theo: " << day << "/" << month << "/" << print_year(year) << endl;
					cout << endl;
					day=curent_day;
					Ngay_hom_qua(day, month, year);
					cout << "Ngay hom qua: " << day << "/" << month << "/" << print_year(year) << endl;
					cout << endl;
					continue;
				}
			}
			else
			{
				if (month == 2 && day > 29)
				{
					cout << "Thang 2 chi co 28 ngay tru nam nhuan la 29 ngay" << endl;
					continue;
				}
				else
				{
					int curent_day = day;
					Ngay_tiep_theo(day, month, year);
					cout << "Ngay tiep theo: " << day << "/" << month << "/" << year << endl;
					cout << endl;
					day = curent_day;
					Ngay_hom_qua(day, month, year);
					cout << "Ngay hom qua: " << day << "/" << month << "/" << year << endl;
					cout << endl;
					continue;
				}
			}
		}
	} while (day != 0 && month != 0 && year != 0);
	return 0;
}
*/

//Bài 15: Viết chương trình nhập vào ngày, tháng, năm. Tìm xem ngày đó là ngày thứ bao nhiêu trong năm.
/*
#include <iostream>
#include <string>
using namespace std;

void Input_date(int &day, int &month, int &year)
{
	cout << "Intput time data: " << endl;
	cout << "Input date: ";
	cin >> day;
	cout << "Input month: ";
	cin >> month;
	cout << "year: ";
	cin >> year;
}

bool Check_valid_input(int day, int month, int year)
{
	if (day <= 0 || day > 31 || month <= 0 || month > 12)
	{
		return false;
	}
	return true;
}

bool Check_leap_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0))
	{
		return true;
	}
	return false;
}

string Calculate_date_in_year(int day, int month, int year)
{
	int result=0;
	for (int i = 1; i < month; i++)
	{
		if (Check_leap_year(year) == true)
		{
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			{
				result = result + 31;
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11)
			{
				result = result + 30;
			}
			else
			{
				result = result + 29;
			}
		}
		else
		{
			if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			{
				result = result + 31;
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11)
			{
				result = result + 30;
			}
			else
			{
				result = result + 28;
			}
		}
	}
	result = result + day;

	if (result == 1 || result % 10 == 0 || result % 10 == 1)
	{
		return(to_string(result) + "st");
	}
	else if (result == 2 || result % 10 == 2)
	{
		return(to_string(result) + "nd");
	}
	else if (result == 3 || result % 10 == 3)
	{
		return(to_string(result) + "rd");
	}
	else
	{
		return(to_string(result) + "th");
	}
}

string add_post(int day)
{
	if (day == 1 || day % 10 == 0 || day % 10 == 1)
	{
		return(to_string(day) + "st");
	}
	else if (day == 2 || day % 10 == 2)
	{
		return(to_string(day) + "nd");
	}
	else if (day == 3 || day % 10 == 3)
	{
		return(to_string(day) + "rd");
	}
	else
	{
		return(to_string(day) + "th");
	}
}

string define_month(int month)
{
	switch (month)
	{
	case 1:
		return "January";
		break;
	case 2:
		return "February";
		break;
	case 3:
		return "March";
		break;
	case 4:
		return "April";
		break;
	case 5:
		return "May";
		break;
	case 6:
		return "June";
		break;
	case 7:
		return "July";
		break;
	case 8:
		return "August";
		break;
	case 9:
		return "September";
		break;
	case 10:
		return "October";
		break;
	case 11:
		return "November";
		break;
	case 12:
		return "December";
		break;
	}
}

string Define_year(int year)
{
	if (year < 0)
	{
		year = year * (-1);
		return(to_string(year) + "BC");
	}
	return(to_string(year));
}

int main()
{
	int type = 0;
	cout << "Type 1 when you ready ";
	cin >> type;
	do
	{
		int day, month, year;
		Input_date(day, month, year);
		if (Check_valid_input(day, month, year) == false)
		{
			cout << "Date input not valid" << endl;
			break;
		}
		else
		{
			cout<<define_month(month) <<" "<<add_post(day)<<" "<< Define_year(year) << " is the " << Calculate_date_in_year(day, month, year) << " day of the year" << endl;
		}
		cout << "Type 0 to exit ";
		cin >> type;
	} while (type != 0);

	return 0;
}
*/