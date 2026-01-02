#include <stdio.h>

int health = 5;

void render()
{
	if (health > 0)
	{
		for (int i = 0; i < health; i++)
		{
			printf("♥ ");
		}
	}
	else
	{
		printf("continue?");
	}
}

void increment()
{
	static int score = 0;

	score++;

	printf("score : %d\n", score);
}

void main()
{
#pragma region 메모리 영역

#pragma region CODE 영역
	// 프로그램을 실행하기 위해 필요한 코드가 저장되는 영역으로
	// 함수의 주소와 상수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region DATA 영역
	// 프로그램의 시작과 함께 메모리에 저장되며
	// 프로그램이 종료되면 메모리가 해제되는 영역입니다.

#pragma endregion

#pragma region BSS 영역
	// 프로그램이 실행될 때 초기화되지 않은 전역 변수와 정적 변수가 저장되는 메모리 영역입니다.

#pragma endregion

#pragma region STACK 영역
	// 프로그램이 자동으로 사용하는 임시 메모리 영역으로
	// 함수 호출 시 생성되는 지역 변수와 매개 변수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region HEAP 영역
	// 사용자가 직접 메모리 공간을 할당해주는 메모리 영역으로,
	// 사용하지 않는 경우 사용자가 직접 메모리를 해제해야하는 메모리 영역입니다.
#pragma endregion

#pragma endregion

#pragma region 지역 변수
	// 함수 내부에서 선언된 변수로 함수 내부에서만 접근할 수 있으며,
	// 함수가 종료되면 메모리에서 사라지는 변수입니다.

	//int x = 10;
	//
	//{
	//	int x = 20;
	//
	//	printf("%d\n", x);
	//}
	//
	//printf("%d\n", x);

#pragma endregion

#pragma region 전역 변수
	// 함수 외부에서 선언된 변수로 프로그램이 실행될 때 메모리에 올라가고,
	// 프로그램이 종료되면 메모리에서 해제되는 변수입니다.

	health -= 1;

	//render();

#pragma endregion

#pragma region 정적 변수
	// 지역 변수와 전역 변수의 특성을 가지는 변수로
	// 단 한 번만 초기화가 이루어지며, 프로그램이 실행될 때
	// 메모리에서 생성되고 프로그램이 종료되면 메모리에서 해제됩니다.

	//increment();
	//increment();
	//increment();

#pragma endregion

}