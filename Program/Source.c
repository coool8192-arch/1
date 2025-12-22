#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	//int data = 10;
	//
	//printf("%p", &data);

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를
	// 의미하며, 메모리의 공간은 1바이트의 크기로 나누어 표현합니다.

#pragma endregion

#pragma region 표준 입력 함수
	// 여러 종류의 데이터를 다양한 서식에 맞추어
	// 입력해주는 함수입니다.

	//int x = 0;
	//
	//// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로
	//// 넘어갈 수 없습니다.
	//
	//printf("x의 값을 입력하세요 : ");
	//
	//scanf_s("%d", &x);
	//
	//// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	//// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.
	//
	//printf("%d\n", x);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를
	// 보관하였다가 입력하는 순간 그 내용을 프로그램에 전송합니다.

#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	int storage = 10;

	int* pointer = &storage;

	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로
	// 이를 선언해주어야 합니다.

	printf("%p\n", &storage);

	printf("%p\n", pointer);

	printf("%p\n", &pointer);

	*pointer = 99;

	printf("%d\n", storage);

	printf("%d\n", *pointer);

	int room = 20;

	pointer = &room;

	*pointer = 77;

	printf("%d\n", room);

	printf("%p\n", &room);

	printf("%p\n", pointer);

#pragma endregion

}