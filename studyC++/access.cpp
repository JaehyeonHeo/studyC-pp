#include <stdio.h>

struct SHuman {
// 접근제한자 private -> 외부에서 값을 변경 불가(캡슐화)
private:
	char name[12]; 
	int age; 

public:
	void intro() {
		printf("이름 : %s, 나이 = %d\n", name, age); 
	}
};

int main()
{
	SHuman kim; 
	//kim.age = 286; 
	kim.intro(); 
}