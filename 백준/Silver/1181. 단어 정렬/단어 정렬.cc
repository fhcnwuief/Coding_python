#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//길이 비교
bool compare(string a, string b)
{
	int i = 0;
	if (a.length() == b.length())
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != b[i])
				return a[i] < b[i];
			//return : 실행되는 즉시 해당 함수 실행 종료
		}
	}
	return a.length() < b.length();
}
int main()
{
	int num;
	string str;
	cin >> num;
	//벡터 형식으로 배열 만들기
	vector<string> arr;
	for (int i = 0; i < num; i++) {
		cin >> str;
		//벡터에 문자열 넣기
		arr.push_back(str);
	}
	//사전순으로 정렬+길이 비교 함수 호출
	sort(arr.begin(), arr.end(),compare);
	cout << arr[0] << endl;
	for (int i = 1; i < num; i++) 
	{
		//중복 제거
		if (arr[i - 1] == arr[i])
			continue;
		//단어 출력
		cout << arr[i] << endl;
	}
}