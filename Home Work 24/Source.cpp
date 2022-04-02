#include <iostream>
#include <string>
using namespace std;

bool Palindrom(string str);
int PunctMarks(string str);

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "������ 1.\n������:";
	string str = "Hello!!!!!!!";
	cout << str << endl;
	cout << "������� ������:";
	char sym;
	cin >> sym;
	string newStr;
	string res;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym)
			res += str[i];
	cout << endl << res << "\n\n";

	cout << "������ 2.\n";
	string str2 = "Woooow";
	cout << "����� " << str2 << endl;
	cout << Palindrom(str2) << "\n\n";

	cout << "������ 3.C�����:\n";
	string str3 = "Hi, I'm Max! What's up? Great weather, isn't it? I think it's worth going for a walk.";
	cout << str3 << endl;
	cout << PunctMarks(str3);


	return 0;
}
bool Palindrom(string str) {
	for (int i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
	if (str[0] == str[5] && str[1] == str[4] && str[2] == str[3])
		return 1;
	else
		return 0;
}
int PunctMarks(string str) {
	int sum = 0, index = 0;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?')
			sum += 1;
	return sum;
}