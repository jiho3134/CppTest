#include <iostream>

using namespace std;

class person
{
private:
	char name[300];  //이름 
	int age;		//나이

public:
	person(char* name, int age) : age(age) {
		strcpy(name, name);
	}
	void whatname() const {
		cout << "학생 이름은 ? " << name << endl;
	}
	void howage() const {
			cout << "학생 나이는 ? " << name << endl;
	}
};

class student : public person
{
private:
	double kor, eng;
	double avg, tot;
public:
	student(char* name, int age, double kor, double eng, double avg, double tot)
		:person(name,age)
	{

	}
};

int main(char* name, int age)
{
	
	return 0;
}