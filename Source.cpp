//Tsvirko Nastya
#include<iostream>
using namespace std;
int main()
{
	/*Case1. Дано целое число в диапазоне 1–7. Вывести строку — название дня
недели, соответствующее данному числу (1 — «понедельник», 2 — «вторник» и т. д.).*/
	/*int a;
	cin >> a;
	switch (a) {
		case 1:cout << "monday" << endl; break;
		case 2:cout << "tuesday" << endl; break;
		case 3:cout << "wednsday" << endl; break;
		case 4:cout << "thesday" << endl; break;
		case 5:cout << "friday" << endl; break;
		case 6:cout << "saturday" << endl; break;
		case 7:cout << "sunday" << endl; break;
		default:cout << "error"; break;
	}*/
	/*Case2. Дано целое число K. Вывести строку-описание оценки, соответствующей числу K
(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно»,
4 — «хорошо», 5 — «отлично»). Если K не лежит в диапазоне 1–5,то вывести строку «ошибка».*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:cout << "bad" << endl; break;
	case 2:cout << "not good" << endl; break;
	case 3:cout << "good" << endl; break;
	case 4:cout << "very good" << endl; break;
	case 5:cout << "great" << endl; break;
	}*/
	/*Case3. Дан номер месяца — целое число в диапазоне 1–12
(1 — январь, 2 — февраль и т. д.). Вывести название соответствующего времени года
(«зима»,«весна», «лето», «осень»).*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
	case 2:
	case 12:cout << "winter"; break;
	case 3:
	case 4:
	case 5:cout << "spring"; break;
	case 6:
	case 7:
	case 8:cout << "summer"; break;
	case 9:
	case 10:
	case 11:cout << "automn"; break;
	default:cout<<"error";break;
	}*/
	/*Case4◦ Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 —
февраль и т. д.). Определить количество дней в этом месяце для невисокосного года.*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:cout << 31 << endl; break;
	case 4:
	case 6:
	case 9:
	case 11:cout << 30 << endl; break;
	case 2:cout << 28 << endl; break;
	default:cout << "error" << endl; break;
	}*/
	/*Case6. Единицы длины пронумерованы следующим образом: 1 — дециметр,
2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр. Дан номер
единицы длины (целое число в диапазоне 1–5) и длина отрезка в этих
единицах (вещественное число). Найти длину отрезка в метрах.*/
	/*int a;
	double b,d;
	cin >> a >> b;
	switch (a) {
	case 1:d = b * 10; break;
	case 2:d = b * 1000; break;
	case 3:d = b; break;
	case 4:d = b / 1000; break;
	case 5:d = b / 100; break;
	default:cout << "error" << endl; break;
	}
	cout << d;*/
	/*Case7. Единицы массы пронумерованы следующим образом: 1 — килограмм,
2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер. Дан номер единицы массы (целое число в диапазон
1–5) и масса тела в этих единицах (вещественное число). Найти массу тела в килограммах.*/
	/*int a;
	double b, d;
	cin >> a >> b;
	switch (a) {
	case 1:d = b; break;
	case 2:d = b / 1000000; break;
	case 3:d = b/1000; break;
	case 4:d = b * 1000; break;
	case 5:d = b * 100; break;
	default:cout << "error" << endl; break;
	}
	cout << d;*/
	/*Case8. Даны два целых числа: D (день) и M (месяц), определяющие правильную дату 
	невисокосного года. Вывести значения D и M для даты,предшествующей указанной.*/
	/*int a, m, d;
	cin >> d >> m;
	switch (d) {
	case 1:switch (m) {
	case 1:m = 12; d = 31; break;
	case 12:
	case 10:
	case 7:
	case 5:m--; d = 30; break;
	case :
	case :
	case :
	case :
	case :
	}
	}
	cout << m;*/
/*Case10. Робот может перемещаться в четырех направлениях («С» — север,
«З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево,
−1 — поворот направо. Дан символ C — исходное направление робота и целое число N — посланная ему команда.
Вывести направление робота после выполнения полученной команды.*/
/*char c;
int n;
cin >> c >> n;
switch (c) {
case'W':
	switch (n) {
	case -1:cout << "s"; break;
	case 1:cout << "n"; break;
	case 0:cout << "w"; break;
	}
case'E':
	switch (n) {
	case 1:cout << "s"; break;
	case -1:cout << "n"; break;
	case 0:cout << "e"; break;
	}
case'S':
	switch (n){
	case 1: cout << "w"; break;
	case -1:cout << "e"; break;
	case 0:cout << "s"; break;
	}
case 'N':
	switch (n) {
	case 1: cout << "e"; break;
	case -1:cout << "w"; break;
	case 0:cout << "n"; break;
	}
}
*/
/*Case12. Элементы окружности пронумерованы следующим образом: 1 — радиус R, 2 — диаметр D = 2·R, 3 — длина L = 2·π·R, 4 — площадь круга S = π·R^2 Дан номер одного из этих 
элементов и его значение. Вывестизначения остальных элементов данной окружности (в том же порядке). В качестве значения π использовать 3.14.*/
int n;
double a;
cin >> n >> a;
switch (n) {
case 1: 
}
	return 0;
}