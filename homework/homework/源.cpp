#include <iostream>
#include <ios>
#include <algorithm>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

istream & read_hw(istream& in, vector<double> &hw) {
	if (in) {
		hw.clear();
		double x;
		while (in >> x) {
			hw.push_back(x);
		}
		in.clear();
	}
	return in;
}

double midian(const vector<double>& hw) {
	typedef vector<double>::size_type vce_size;
	vce_size size = hw.size();
	if (size == 0) {
		throw domain_error("midian of an empty vector");
	}
	vce_size mid = size / 2;
	return (size % 2) ? (hw[mid] + hw[mid + 1]) / 2 : hw[mid];
}

double grade(double midterm, double final, const vector<double>& hw) {
	if (hw.size() == 0) {
		throw(domain_error("Your homeowrk garde is empty~"));
	}
	return 0.4*midterm + 0.4*final + 0.2*midian(hw);
}

struct student_info {
	string name;
	double midterm, final;
	vector<double> homework;
};



int main() {
	cout << "please enter your name:";
	string name;
	cin >> name;
	cout << "hello " << name << " please enter your midterm and final exam grade:";
	double midterm, final;
	cin >> midterm >> final;
	cout << "please enter all the homework grades:";
	vector<double> homework;
	read_hw(cin, homework);
	try {
		streamsize pre = cin.precision();
		cout << "Student's grade is " << setprecision(3) << grade(midterm, final, homework) << setprecision(pre) << endl;
	}
	catch (domain_error) {
		cout << endl << "you must enter your grade "
			"please try again" << endl;
		return 1;
	}
	return 0;
}