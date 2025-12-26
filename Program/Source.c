#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한집합입니다.

	//int x[5];

	// 배열의 원소는 1이 아니라 0을 첫 번째 원소로 합니다.


	//for (int i = 0; i < 5; i++)
	//{
	//	x[i] = (i + 1) * 10;
	//
	//	printf("x[%d] : %d\n", i, x[i]);
	//}

	// 배열의 메모리 공간은 프로그램이 실행되는 동안
	// 변경할 수 없습니다.

	//int a[] = { 10,20,30,40,50 };
	//
	//int size = sizeof(a) / sizeof(a[0]);
	//
	//for (int i = 0; i < size; i++)
	//{
	//	printf("a[%d] : %d\n", i, a[i]);
	//}

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.

	//int* pointer = &a;
	//
	//printf ("%d\n", *pointer);
	//printf("%d\n", a[0]);
	//
	//pointer += 1;
	//
	//*pointer = 22;
	//
	//printf ("%d\n", *pointer);
	//printf ("%d\n", a[1]);

	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은
	// 배열의 시작 주소를 가리킵니다.

#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.

	//const char* character="archer";
	//
	//printf("%c\n", *character);
	//printf("%p\n", character);
	//printf("%s\n", character);
	//
	//character = "mage";
	//
	//printf("%s\n", character);
	//
	//char username[] = "username";
	//
	//printf("%s\n", username);
	//
	//username[1] = 'a';
	//
	//printf("%s\n", username);

	// 문자열은 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며, 
	// 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되므로 문자열의 값을 변경할 수 없습니다.

	// 문자열은 공백을 포함하여 메모리 공간의 크기가 결정되며,
	// 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.

	//character = "show\0er";
	//
	//printf("%s\n", character);

	// 문자열의 경우 연속된 메모리 공간으로 연결되어 있지만,
	// 중간에 무효인 문자를 넣게 되면 해당하는 문자까지만 출력됩니다.

#pragma endregion

#pragma region (2)차원 배열
	// 배열의 요소로 또다른 배열을 갖는 배열입니다.

	//int a2[3][3] =
	//{
	//	{1,2,3},{4,5,6},{7,8,9},
	//};
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%d", a2[i][j]);
	//	}
	//	printf("\n");
	//}

	// 2차원 배열은 행과 열로 구분되며, 앞의 배열이 열, 뒤의 배열이 행입니다.


#pragma endregion

#pragma region 아스키 코드
	// 미국 구립 표준 협회에서 표준화한 정보 교환용 7비트 부호 체계입니다.
	
	//char a = 'A';
	//
	//printf("%d\n", a);
	//
	//for (a = 'A'; a <= 'Z'; a++)
	//{
	//	printf("%c", a);
	//}
#pragma endregion

}