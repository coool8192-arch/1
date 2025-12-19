#include <stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로
	// 수행하는 명령문입니다.

#pragma region 증감연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때
	// 사용하는 연산자입니다.

	//int x = 0;
	//
	//int y = ++x;
	//
	//printf("x : %d\n", x);
	//
	//printf("y : %d\n", y);
	//
	//y = --x;
	//
	//printf("x : %d\n", x);
	//
	//printf("y : %d\n", y);

	// 전위 증감 연산자는 변수의 값을 증감시킨 후에
	// 연산을 수행합니다.

	//int x = 0;
	//
	//int y = x++;
	//
	//printf("x : %d\n", x);
	//
	//printf("y : %d\n", y);
	//
	//y = x--;
	//
	//printf("x : %d\n", x);
	//
	//printf("y : %d\n", y);

#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 횟수만큼 반복하는 반복문입니다.

	//for (int i = 0; i < 5; ++i)
	//{
	//	printf("yes\n");
	//}

	// 반복문은 초기화→조건 검사→증감의 순서로 동작합니다.
#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문입니다.

	//int level = 1;
	//
	//while (level <= 5)
	//{
	//	printf("level : %d\n", level);
	//	level++;
	//}

	// 반복문은 순차적으로 실행하면서 조건 분기(branch)를 만나면, 어느 쪽으로 
	// 실행 흐름이 갈지 예측(branch prediction)합니다.
#pragma endregion

#pragma region do while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음
	// 조건에 따라 명령문을 실행하는 반복문입니다.

	//do
	//{
	//	printf("hello\n");
	//} while (1 > 2);

#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고, 반복문은 이어서
	// 실행하는 제어문입니다.

	//for (int x = 1; x <= 5; x++)
	//{
	//	if (x == 3)
	//	{
	//		continue;
	//	}
	//	printf("%d\n", x);
	//}
#pragma endregion

#pragma endregion

}