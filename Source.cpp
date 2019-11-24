#include <iostream>
#include <fstream>
#include<sstream>

using namespace std;

int main(){
	ofstream myfile;
	int n, b = 1, c = 2;
	string common = "First side\n";

	cout << "Number of papers : ";
	cin >> n;

	if (n % 4 != 0){
		cout << "Number of Papers should be divided by 4 " << endl;
		system("pause");
		return 0;
	}

	for (int i = n; i >= n / 2 + 2; i -= 2){
		stringstream iss, bss;
		string is, bs;
		iss << i;
		bss << b;
		bss >> bs;
		iss >> is;
		common.append(is + "," + bs + ",");
		b += 2;
	}

	common.erase(common.length() - 1, 1);
	common.append("\n\nSecond Size\n");

	c = n / 2 + 1;
	for (int i = n / 2; i >= 2; i -= 2){
		stringstream iss, bss;
		string is, bs;
		iss << i;
		bss << c;
		bss >> bs;
		iss >> is;
		common.append(is + "," + bs + ",");
		c += 2;
	}
	common.erase(common.length() - 1, 1);
	myfile.open("sides.txt");
	myfile << common;
	myfile.close();
	cout << "Ready!!!\nLook at sides.txt file in your folder" << endl;
	system("pause");
	return 0;
}
