#include<iostream>
using namespace std;

double distance(double Ax, double Ay, double Bx, double By)
{
	double Dx = Ax - Bx;
	double Dy = Ay - By;
	double dist = sqrt(Dx * Dx + Dy * Dy);
	return dist;
}


void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "\t���������� ���������� ����� ������ -A- � ������ -B-" << endl;
	double Ax = 0;
	double Ay = 0;
	double Bx = 0;
	double By = 0;
		cout << "\t������� ���������� -�- ����� -A- " << endl;
		cin >>Ax;
		cout << "\t �� ����� �������� ���������� Ax:" << Ax << endl;
		cout << "\t ������� ���������� -�- ����� -�- " << endl;
		cin >> Ay;
		cout << "\t �� ����� �������� ���������� Ay:" << Ay << endl;
		cout << "\t������� ���������� -�- ����� -B- " << endl;
		cin >> Bx;
		cout << "\t �� ����� �������� ���������� Bx:" << Bx << endl;
		cout << "\t ������� ���������� -�- ����� -B- " << endl;
		cin >> By;
		cout << "\t �� ����� �������� ���������� By:" << By << endl;
	    double dist =   distance( Ax, Ay, Bx, By);
		 cout << "\t ���������� ����� ������� � � � �����: " << dist <<endl;
		


		

		


}
