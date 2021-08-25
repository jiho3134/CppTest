#include <iostream>

using namespace std;

class person
{
private:
	char name[300];  //이름 
	int age;		//나이

public:
	person(char* stname, int stage) : age(stage) {
		strcpy(name, stname);
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
	double kor;
	double eng;
	double avg;
	double tot;
public:

};

int main()
{
	
	return 0;
}