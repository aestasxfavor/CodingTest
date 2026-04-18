#include <iostream>
using namespace std;

int main()
{
#pragma region Coding Test 2026_04_05
	/*
	백준 18108번: 1998년생인 내가 태국에서는 2541년생?!

	int a;
	int b;

	cin >> a;
	b = a - 543;

	cout << b << endl;

	*/

	/*
	백준 10430번: 나머지

	int a;
	int b;
	int c;

	cin >> a;
	cin >> b;
	cin >> c;

	cout << (a + b) % c << endl;
	cout << ((a % c) + (b % c)) % c << endl;
	cout << (a * b) % c << endl;
	cout << ((a % c) * (b % c)) % c << endl;

*/

#pragma endregion

#pragma region Coding Test 2026_04_06
/*
* 백준 2588번: 곱셈
int a;
int b;

cin >> a;
cin >> b;

int c = b % 10;
int d = (b / 10) % 10;
int e = b / 100;

cout << a * c << endl;
cout << a * d << endl;
cout << a * e << endl;
cout << a * b << endl;
*/
#pragma endregion

#pragma region Coding Test 2026_04_12
/*
백준: 11382번 꼬마 정민

long long a, b, c, sum;

cin >> a >> b >> c;

sum = a + b + c;

cout << sum << endl;

*/
#pragma endregion

#pragma region Coding Test 2026_04_13
/*
백준: 10172번 고양이
cout << "\\    /\\" << endl;
cout << " )  ( ')" << endl;
cout << "(  /  )" << endl;
cout << " \\(__)|" << endl;

*/

/*
백준 10172번 강아지
cout << "|\\_/|" << endl;
cout << "|q p|   /}" << endl;
cout << "( 0 )\"\"\"\\" << endl;
cout << "|\"^\"`    |" << endl;
cout << "||_/=\\\\__|" << endl;

*/
#pragma endregion

#pragma region Coding Test 2026-04-14
/*
백준 1330번 두 수 비교하기

int a, b;
cin >> a >> b;

if (a > b)
{
	cout << ">";
}
else if (a < b)
{
	cout << "<";
}
else
{
	cout << "==";
}
*/

/*
백준 9498 시험 성적
	int a;
	cin >> a;

	if (a >= 90)
	{
		cout << "A";
	}
	else if (a >= 80)
	{
		cout << "B";
	}
	else if (a >= 70)
	{
		cout << "C";
	}
	else if (a >= 60)
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}
*/

/*
백준 2753번 윤년

	int a;
	cin >> a;

	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
*/
#pragma endregion

#pragma region Coding Test 2026-04-15
/*
* 백준 14681 사분면 고르기
	int a, b;

	cin >> a;
	cin >> b;

	if (a > 0 && b > 0)
	{
		cout << "1";
	}
	else if (a < 0 && b > 0)
	{
		cout << "2";
	}
	else if (a < 0 && b < 0)
	{
		cout << "3";
	}
	else
	{
		cout << "4";
	}
*/
#pragma endregion

#pragma region Coding Test 2026-04-18
/*
* 백준 2884번 알람 시계
	int h;	// 시간
	int m;	// 분

	cin >> h >> m;

	// 시간이 자정이고 분이 45분보다 작을 때
	if(h == 0 && m < 45)
	{
		h = 23;
		m = m + 15;
	}
	// 분이 45분보다 작을 때
	else if (m < 45)
	{
		h = h - 1;
		m = m + 15;
	}
	// 분이 45분보다 클 때
	else
	{
		m = m - 45;
	}

	cout << h << " " << m << endl;
*/

/*
* 백준 2525번 오븐 시계
int a, b, c;
	cin >> a >> b;		// a: 시간, b: 분 1시간 => 60분
	cin >> c;			// c: 요리하는 데 필요한 시간(분)

	int t = a * 60 + b + c;
	if (t >= 1440)
	{
		t = t - 1440;
		a = t / 60;		// 시간 = 전체 시간(분) / 60
		b = t % 60;		// 분 = 전체 시간(분) % 60
	}
	else
	{
		a = t / 60;
		b = t % 60;
	}

	cout << a << " " << b << endl;
*/
#pragma endregion



	
}
