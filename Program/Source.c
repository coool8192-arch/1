#include <stdio.h>

#define size 5

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형의 변수끼리 연산이 이루어질 때, 기존에 지정했던
	// 자료형을 다른 자료형으로 변환하는 과정입니다.

#pragma region 암묵적 형 변환
	// 서로 다른 자료형으로 연산이 이루어질 때, 자료형의
	// 크기가 더 큰 자료형으로 변환되는 과정입니다.

	//int a = 7;
	//
	//float b = 4.25f;
	//
	//printf("%f", a + b);

	// 표현 범위가 작은 자료형에 표현 범위가 큰 자료형의 데이터를
	// 저장하게 되면 암묵적으로 데이터 손실이 발생합니다.

#pragma endregion

#pragma region 명시적 형 변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을
	// 변환하는 과정입니다.

	//int x = 10;
	//
	//int y = 3;
	//
	//float z = (float)x / y;
	//
	//printf("%f", z);

	// 정수형 변수끼리 연산을 수행하게 되면 결과값 역시 정수값으로 출력됩니다.
#pragma endregion

#pragma region 단축 평가 계산
	// 계산을 진행하는 도중에 결과가 이미 확정된 경우,
	// 나머지 계산을 생략하는 과정입니다.

	//int x = 0;
	//int y = 0;

	//if (x != 0 && y++)
	//{
	//	printf("short circuit");
	//}
	//
	//printf("y1 : %d\n", y);
	//
	//if (x < 1 || y--)
	//{
	//	printf("y2 : %d\n", y);
	//}
	//
	//if (x != 0 || y++)
	//{
	//	printf("did");
	//}
	//
	//printf("y3 : %d\n", y);

#pragma endregion

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로 정의되고
	// 처리되는 과정입니다.

	//printf("매크로 size의 값 : %d\n", size);

	// 매크로는 자료형이 존재하지 않아 메모리 공간을 갖지 않습니다.

	// ex) size = 20;

	// 매크로의 과정은 컴파일 이전에 실행되며, 각 매크로가 실행될 때
	// 매크로의 대체 목록을 넣어야 하므로 프로그램의 크기가 커지게 됩니다.
#pragma endregion

#pragma endregion

}