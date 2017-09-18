
#include<fstream>
#include<iostream>
#include<string>

using std::ifstream;
using std::ofstream;
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

	
int main() {
	string file1String;
	string file2String;
	double file1Number1, file1Number2, file1LastNumber, file1SecondLastNumber;
	double file2Number1, file2Number2, file2LastNumber, file2SecondLastNumer;
	int count1, count2;
	ifstream file1, file2;
	cout << "Please give me two filenames." << endl <<
		"I'll read the first, second, second to last, last and amount of numbers from each" << endl;
		//close both files 
	file1.close(); 
	file2.close();
		//open file one
	getline(cin, file1String);
	file1.open(file1String);
		//open file two
	getline(cin, file2String);
	file2.open(file2String);
	//Check if both files opened
		if (!file1 && !file2)
		{
			cout << "Could not open: " << file1String << endl;
			cout << "Could not open: " << file2String << endl;
		}

		else if (!file1)
		{
			cout << "Could not open: " << file1String << endl;
			file1.close();
			file1.clear();

		}
		else if (!file2)
		{
			cout << "Could not open: " << file2String << endl;
			file2.close();
			file2.clear();
		}
	
	double a;
	count1 = 0;
	file1Number1 = 0;
	file1Number2 = 0;
	file1SecondLastNumber = 0;
	file1LastNumber = 0;
	while (file1 >> a) {
		//go through file one
		count1++;
		if (count1 == 1) {
			file1Number1 = a;
		}
		else if (count1 == 2) {
			file1Number2 = a;
		}
		file1SecondLastNumber = file1LastNumber;
		file1LastNumber = a;
	}
	count2 = 0;
	file2Number1 = 0;
	file2Number2 = 0;
	file2SecondLastNumer = 0;
	file2LastNumber = 0;

	while (file2 >> a) {
		//go through file two
		count2++;
		if (count2 == 1) {
			file2Number1 = a;
		}
		else if (count2 == 2) {
			file2Number2 = a;
		}
		file2SecondLastNumer = file2LastNumber;
		file2LastNumber = a;
	}

	cout << file1Number1 << " " << file1Number2 << " " << count1 << " " << file1LastNumber << " " << file1SecondLastNumber << " " << file2Number1 << " " <<
		file2Number2 << " " << count2 <<  " " << file2LastNumber << " " << file2SecondLastNumer  << endl;;
	int j;
	file1.close();
	file2.close();
	//Stop point to display info
		cin >> j;

	

	return 0;
}