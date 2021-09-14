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
	int x1,x2,y1,y2; //��ǥ �Է�; 
	cin>>n; //Ƚ�� �Է�; 
	for(int i=0;i<n;i++)
	{
		long long result1=0,result2=0,re; //���̴� long long ����; 
		cin>>y1>>x1>>y2>>x2; //�� �Է�; 
		result1=(y1+x1)*(y1+x1+1LL)/2LL+y1; //ll => long long;  
		result2=(y2+x2)*(y2+x2+1LL)/2LL+y2;
		re=result2-result1; //��ǥ���� ���� ���ϱ�; 
		if(re<0)
		{
			re*=-1; ///-�� +�����; 
		}
		cout<<"Case "<<i<<": "<<re<<endl; //�� �ڵ�� ���װ� ���� ���̿��� ���� �ʹ� Ŀ���� �׳� �� ū ���� ����.....; 
	}
return 0;
}

