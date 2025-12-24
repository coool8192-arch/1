#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한집합입니다.

	int x[5];

	// 배열의 원소는 1이 아니라 0을 첫 번째 원소로 합니다.


	//for (int i = 0; i < 5; i++)
	//{
	//	x[i] = (i + 1) * 10;
	//
	//	printf("x[%d] : %d\n", i, x[i]);
	//}

	// 배열의 메모리 공간은 프로그램이 실행되는 동안
	// 변경할 수 없습니다.

	int a[] = { 10,20,30,40,50 };

	int size = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < size; i++)
	{
		printf("a[%d] : %d\n", i, a[i]);
	}

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.

	int* pointer = &a;

	printf ("%d\n", *pointer);
	printf("%d\n", a[0]);

	pointer += 1;

	*pointer = 22;

	printf ("%d\n", *pointer);
	printf ("%d\n", a[1]);

#pragma endregion

}