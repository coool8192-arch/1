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

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int absolute(int x)
{
	//if (x >= 0)
	//{
	//	return x;
	//}
	//else
	//{
	//	return -x;
	//}
	(x > 0) ? x : -x;
}

void function(int x)
{
	//printf("%d\n", x);
	//x--;
	//if (x > 0)
	//{
	//	function(x);
	//}
	if (x <= 0)
	{
		return;
	}
	printf("%d\n", x);

	function(x - 1);
}

inline int square(int x)
{
	return x * x;
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

	//int m = 10;
	//int n = 20;

	//int u = m;
	//
	//m = n;
	//
	//n = u;

	//printf("m : %d\nn : %d\n", m, n);
	//
	//swap(&m, &n);
	//
	//printf("m : %d\nn : %d\n", m, n);

#pragma endregion

#pragma region 반환형
	// 함수가 실행을 마치고 호출한 쪽으로
	// 어떤 자료형의 값을 반환할지 미리 알려주는 형식입니다.

	//int x = 50;
	//int y = -36;
	//
	//printf("x의 절댓값 : %d\n", absolute (x));
	//printf("y의 절댓값 : %d\n", absolute(y));
	//printf("절댓값 : %d\n", absolute (-5));

	// 함수의 경우 자료형과 반환하는 값의 형태가
	// 일치하지 않으면 원하는 값을 얻을 수 없습니다.

#pragma endregion

#pragma region 재귀함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수입니다.

	//function(3);

	// 재귀함수는 함수를 계속 호출하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되어 스택 오버플로우가 발생합니다.

#pragma endregion

#pragma region 인라인 함수
	// 함수를 호출하는 대신 함수가 호출되는 위치마다
	// 함수의 코드를 복사해 전달하는 함수입니다.

	printf("%d\n", square(3));

	// 인라인 함수는 함수를 호출하는 과정이 없어 처리 속도가 빠르지만,
	// 사용할 때마다 코드가 복사되어 파일의 크기가 커지게 됩니다.

#pragma endregion

}