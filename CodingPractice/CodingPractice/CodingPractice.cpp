#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

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

#pragma region Coding Test 2026-04-20
/*
* 코드업 1008 번 유니코드
cout << "\u250c" << "\u252c" << "\u2510" << endl;

cout << "\u251c" << "\u253c" << "\u2524" << endl;

cout << "\u2514" << "\u2534" << "\u2518" << endl;
*/
#pragma endregion

#pragma region Coding Test 2026-04-22
/*
* 코드업 1012번 실수 그대로 출력하기
float a;
cin >> a;
cout << fixed;
cout << a << setprecision(6) << endl;
*/

/*
* 코드업 1013번 정수 2개 입력받아 그대로 출력하기
int a, b;
cin >> a >> b;
cout << a << " " << b;
*/

/*
* 코드업 1014번 문자 2개 입력받아 순서 바꿔 출력하기
char a, b;
cin >> a >> b;
cout << b << " " << a;
*/

/*
* 코드업 1015번 소수점 둘째 자리 까지 출력하기
float a;
cin >> a;
cout << fixed;
cout << setprecision(2) << a << endl;

*/
#pragma endregion

#pragma region Coding Test 2026-04-27

/*
* 코드업 1017번
int a;
cin >> a;
cout << a << " " << a << " " << a << endl;
*/

/*
* 코드업 1019번
int y, m, d;
char dot;

cin >> y >> dot >> m >> dot >> d;
cout << setfill('0')
<< setw(4) << y << '.'
<< setw(2) << m << '.'
<< setw(2) << d;
*/

#pragma endregion

#pragma region Coding Test 2026-04-28

/*
* 프로그래머스 0레벨 입문 문제
int a, b;

cin >> a >> b;

cout << a + b << endl;

return 0;
*/
#pragma endregion

#pragma region Coding Test 2026-05-07
/*
* 코드업 1020번 주민등록번호
string num;
	cin >> num;

	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] != '-')
		{
			cout << num[i];
		}
	}
*/
#pragma endregion

#pragma region  Coding Test 2026-05-11
/*
* 코드업 1021번
*char data[30] = "";

cin >> data;

cout << data << endl;
*/

/*
* 코드업 1022번
string str;

// c++에서 공백을 포함하는 문자열을 출력할 땐 getline 함수를 사용할 것
getline(cin, str);
cout << str << endl;
*/
#pragma endregion

#pragma region Coding Test 2026-05-19
/*
 두수의 나눗셈
 int a, b;
 cin >> a >> b;

 int sum = (a * 1000) / b;

 cout << sum << endl;
*/
#pragma endregion

#pragma region Coding Test 2026-05-20
/*
* 프로그래머스 배열 만들기 1
* vector<int> solution(int n, int k) 
{
    vector<int> answer;
    
    for(int i = 1; i <= n; i++)
    {
        if(i % k == 0)
        {
            answer.push_back(i);
        }
    }
    return answer;
}
*/

/*
* 프로그래머스 - 배열만들기2
* vector<int> solution(int l, int r)
{
	vector<int> answer;

	for (int i = l; i <= r; i++)
	{
		string num = to_string(i);

		bool isRight = true;

		for (int j = 0; j < num.size(); j++)
		{
			if (num[j] != '0' && num[j] != '5')
			{
				isRight = false;
				break;
			}
		}

		if (isRight)
		{
			answer.push_back(i);
		}
	}


	if (answer.empty())
	{
		answer.push_back(-1);
	}

	return answer;

}

*/
#pragma endregion

#pragma region Coding Test 2026-05 23
/*
* 프로그래머스 덧셈식 출력하기
int a, b;

cin >> a >> b;

cout << a << " + " << b << " = " << a + b << endl;
*/

/*
* 프로그래머스 특수문자 출력하기
cout << "!@#$%^&*(\\\'\"<>?:;" << endl;
*/
#pragma endregion

#pragma region Coding Test 2026-05-22
/*
* 프로그래머스 조건 문자열
*/
#pragma endregion

}
