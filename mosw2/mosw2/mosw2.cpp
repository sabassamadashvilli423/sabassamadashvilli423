#include <iostream>
#include "student.h"
#include<vector>
using namespace std;
void getGrade(vector<student> &a){
	int max = 0, min = 11, k, j;
	for (int i = 0; i < a.size(); i++) {
		if (a[i].grade > max) {
			max = a[i].grade;
			k = i;
		}
	}
	cout << "yvelaze magali sashvalo qula aqvs " << a[k].name << " " << a[k].lastname << " " << a[k].number << " " << a[k].university << " " << a[k].corse << endl;
	for (int i = 0; i < a.size(); i++) {
		if (a[i].grade < min) {
			min = a[i].grade;
			j = i;
		}
	}
	cout << "yvelaze dabali sashvalo qula aqvs " << a[k].name << " " << a[k].lastname << " " << a[k].number << " " << a[k].university << " " << a[k].corse << endl;
}
int main()
{
	vector<student> a;
	vector<student> grade;
	student t;
	int k;
	while (cin >> t.name >> t.lastname >> t.number >> t.university >> t.corse) {
		cout << " sheitanet am moswavlis nishnebi" << endl;
		cin >> t.biology >> t.geography >> t.physics >> t.math >> t.history;
		t.grade = (t.biology + t.geography + t.physics + t.math + t.history) / 5;
		a.push_back(t);
	}
	getGrade(a);
	
}
   