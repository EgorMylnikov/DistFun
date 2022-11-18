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
	cout << "\tВычисление расстояния между точкой -A- и точкой -B-" << endl;
	double Ax = 0;
	double Ay = 0;
	double Bx = 0;
	double By = 0;
		cout << "\tВведите координату -х- точки -A- " << endl;
		cin >>Ax;
		cout << "\t Вы ввели значение координаты Ax:" << Ax << endl;
		cout << "\t Введите координату -у- точки -А- " << endl;
		cin >> Ay;
		cout << "\t Вы ввели значение координаты Ay:" << Ay << endl;
		cout << "\tВведите координату -х- точки -B- " << endl;
		cin >> Bx;
		cout << "\t Вы ввели значение координаты Bx:" << Bx << endl;
		cout << "\t Введите координату -у- точки -B- " << endl;
		cin >> By;
		cout << "\t Вы ввели значение координаты By:" << By << endl;
	    double dist =   distance( Ax, Ay, Bx, By);
		 cout << "\t Расстояние между точками А и В равно: " << dist <<endl;
		


		

		


}
