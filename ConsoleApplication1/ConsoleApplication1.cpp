// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// Задание 1
//#include <iostream>
//
//using namespace std;
//int Max(int first, int second)
//{
//	while (first != second)
//	{
//		if (first > second) first -= second;
//		else second -= first;
//	}
//	return first;
//}
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	int first, second;
//	cout << "Введите первое значение" << endl;
//	cin >> first;
//	cout << "Введите второе значение" << endl;
//	cin >> second;
//	cout << "(" << first << ", " << second << ")=" << Max(first, second) << endl;
//	system("pause");
//}
//Задание 4
//#include <iostream>
//using namespace std;
//double Power(int A, int N)
//{
//    if (N == 0)
//        return 1;
//    else if (N > 0)
//        return A * Power(A, N - 1);
//    else
//        return 1 / Power(A, -N);
//}
//
//int main()
//{
//    int A, N;
//    cin >> A >> N;
//    cout << Power(A, N) << endl;
//    system("pause");
//    return 0;
//}
//Задание 5
//#include <iostream>
//using namespace std;
//void zvezdy(int n)
//{
//    if (!n)
//    {
//        cout << endl;
//        return;
//    }
//    cout << '*';
//    zvezdy(n - 1);
//}
//void main()
//{
//    int n;
//    cout << "N:";
//    cin >> n;
//    zvezdy(n);
//Задание 6
//#include <iostream>
//#include <string>
//#include <ctime>
//using namespace std;
//
//int summa(int a, int b) {
//
//    if (b == a - 1) return 0;
//    return b + summa(a, b - 1);
//}
//
//int main()
//{
//    setlocale(0, "");
//    int a, b;
//    cout << "Введите 1-ое число: ";
//    cin >> a;
//    cout << "Введите 2-ое число: ";
//    cin >> b;
//
//    cout << summa(a, b);
//
//    return 0;
//}

