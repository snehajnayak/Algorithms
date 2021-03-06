/*
* AUTHOR: Ganesh S Kudva
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <stack>

typedef long long int ull;

#define MEM(a, b, c, d) memset(a, (b), c * sizeof(d))
#define CLR(a) memset(a, 0, sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(X) ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X) ( (X) * (X) )
#define SZ(V) (int )V.size()
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)
#define ALL(V) V.begin(), V.end()

#if 0
typedef pair<int,int> PII;
typedef pair<double, double> PDD;
typedef vector<int> VI;
#endif

#define IN(A, B, C) assert( B <= A && A <= C)

using namespace std;

#define DEBUG 0

int main()
{
	ull t = 0,i,j, size;
	string str, res;
	stack<char> temp;
	char c;
#if DEBUG 
	srand((unsigned)time(0));
	t = (rand()%10)+1; 
	cout <<t<<endl;
#else 
	cin >> str;
#endif 

	size = str.size();
	FORN(i, size)
	{
		if (i && !temp.empty())
		{
			c = temp.top();
			if (c == str[i])
			{
				temp.pop();
			}
			else
			{
				temp.push(str[i]);
			}
		}
		else
		{
			temp.push(str[i]);
		}
	}

	if (temp.size() == 0)
	{
		cout << "Empty String" << endl;
	}
	else
	{
		while (!temp.empty())
		{
			c = temp.top();
			res.push_back(c);
			temp.pop();
		}

		for(std::string::reverse_iterator rit = res.rbegin(); rit != res.rend(); ++rit)
		{
			cout << *rit;
		}
		cout << endl;
	}

	return 0;
}
