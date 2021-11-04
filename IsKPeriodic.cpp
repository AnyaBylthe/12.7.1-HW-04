#include <iostream>

using namespace std;

bool isprefix(string str, int len, int i, int k)
{
	if (i + k > len)
		return false;
	for (int j = 0; j < k; j++)
	{
		if (str[i] != str[j])
			return false;
		i++;
	}
	return true;
}

bool iskperiodic(string str, int len, int k)
{
	for (int i = k; i < len; i += k)
		if (!isprefix(str, len, i, k))
			return false;
	return true;
}

int main()
{
	string str = "abcabcabcabc";
	int len = str.length();
	int k = 3;

	if (iskperiodic(str, len, k))
		cout << ("yes");
	else
		cout << ("no");
}
