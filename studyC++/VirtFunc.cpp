#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
protected:
	char name[12]; 
	int age; 
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname); 
		age = aage; 
	}
	// 자식 객체의 멤버함수를 사용하게 해주는 virtual
	virtual void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age); 
	}
	
};

class Student : public Human {
protected:
	int stunum; 
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum; 
	}
	void intro() {
		printf("%d학번, %s입니다.\n", stunum, name); 
	}
	void study() {
		printf("이이는 사, 이삼은 육, 이사 팔,,,\n");
	}
};

int main()
{
	Human h("김사람", 10); 
	Student s("이학생", 15, 1234567); 
	Human* pH; 
	Student* pS;

	pH = &h; 
	pH->intro(); 
	pH = &s; 
	pH->intro(); 

	return 0; 
}