#include <stdio.h>

class Some {
public:
	const int total;
	Some(int atotal) : total(atotal){} // 초기화 리스트 방식
	/*Some(int atotal) { 일반적인 대입연산을 통한 초기화 방식은 안된다.
		total = atotal; 
	}*/
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	Some S(5);
	S.OutTotal();
}