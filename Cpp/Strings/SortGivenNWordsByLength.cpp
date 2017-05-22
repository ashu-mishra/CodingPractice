// given n words:: sort them in order of their length and if same length then alphabetically 

#include<iostream>
#include<string> 
#include<vector>
#include<algorithm>
using namespace std;

bool func(const string &a, const string &b)
{
	if (a.length() == b.length())
		return a < b;
	if (a.length() < b.length())
		return true;

	return false;
}

int main()
{  
	vector <string> v;
	int n, i = 0;
	string val;
	// no of words to be entered:
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> val;
		v.push_back(val);
	}
	//sort then based on given condition
	sort(v.begin(), v.end(), func);


	for (auto x : v)
	{
		cout << x << endl;
	}

	 
    return 0;
}

