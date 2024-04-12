#include <iostream>

using namespace std;

int main() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	if(n==a*3600+b*60+c) 
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
