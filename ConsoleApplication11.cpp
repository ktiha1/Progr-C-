﻿

#include <iostream>
using namespace std;
int main()
{
	int n,s;
	cin >> n;
	s = 1;
	for (int i = 1; i < n+1; i++) {
		s = s * i;
	}
	cout << s;
}

