#include <iostream>
using namespace std;
int main() {
	char ten[] = "Le Nguyen Tuan Minh";
	char s[100] = {};
		int k = 0
		for (int i = 0; char c = ten[i]; i++) {
			if (ten[i] != ' ') {
				s[k++] = c;
			}
		}
		cout << s << endl;
}
