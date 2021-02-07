#include "Student.h"

Student::Student(string nn, int aa, float ss)
	:name(nn), age(aa), score(ss){}

void Student::dis()
{
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "score:" << score << endl;
}
