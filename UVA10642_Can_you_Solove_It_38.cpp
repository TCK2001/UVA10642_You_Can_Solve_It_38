/*
Sample Input
3
0 0 0 1
0 0 1 0
0 0 0 2
Sample Output
Case 1: 1
Case 2: 2
Case 3: 3
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int x1,x2,y1,y2; //죄표 입력; 
	cin>>n; //횟수 입력; 
	for(int i=0;i<n;i++)
	{
		long long result1=0,result2=0,re; //길이는 long long 까지; 
		cin>>y1>>x1>>y2>>x2; //값 입력; 
		result1=(y1+x1)*(y1+x1+1LL)/2LL+y1; //ll => long long;  
		result2=(y2+x2)*(y2+x2+1LL)/2LL+y2;
		re=result2-result1; //좌표간의 길이 구하기; 
		if(re<0)
		{
			re*=-1; ///-면 +만들기; 
		}
		cout<<"Case "<<i<<": "<<re<<endl; //이 코드는 버그가 있음 길이에서 값이 너무 커지면 그냥 개 큰 값이 나옴.....; 
	}
return 0;
}

