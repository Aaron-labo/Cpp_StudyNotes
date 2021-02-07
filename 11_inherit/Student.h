#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(string nn, int aa, float ss);
	void dis();
private:
	string name;
	int age;
	float score;
};

