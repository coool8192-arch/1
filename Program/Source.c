#include <stdio.h>

void initialize()
{
	printf("initialize\n");
}

void coordinate(int x, int y)
{
	printf("x : %d\ny : %d\n", x, y);
}

void reset(char grade, int level, float experience)
{
	printf("grade : %c\nlevel : %d\nexp : %f\n", grade, level, experience);
}

void swap(int*a, int*b)
{
	int*t = a;
	a = b;
	b = t;
}
void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다.

	//initialize();

#pragma endregion

#pragma region 매개변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.

	//coordinate(15, 24);

	// 매개변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 해제됩니다.

	// 하나의 함수에 서로 다른 자료형의 매개변수를 함께
	// 정의할 수 있으며, 여러 개의 매개변수를 생성할 수 있습니다.

	//reset('A', 30, 12.25f);
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개변수에 실제로 전달되는 값입니다.

	// 인수의 경우 함수에 있는 매개변수에 따라 전달할 수 있는
	// 인수의 수가 결정되며, 값을 전달하는 인수와
	// 전달받는 매개변수의 자료형이 일치해야 합니다.

	int m = 10;
	int n = 20;

	//int u = m;
	//
	//m = n;
	//
	//n = u;

	printf("m : %d\nn : %d\n", m, n);

	swap(m, n);

	printf("m : %d\nn : %d\n", m, n);

#pragma endregion

}