#include <stdio.h>
#include<stdlib.h>

void main()
{
#pragma region 동적 할당
	// 프로그램을 실행하는 중에 필요한 만큼 메모리를 할당하는 작업입니다.

	//int* pointer = malloc(sizeof(int));
	//
	//*pointer = 99;
	//
	//printf("%d\n", *pointer);
	//
	//free(pointer);
	//
	//printf("%d\n", *pointer);

	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를 변경할 수 있으며,
	// 동적으로 메모리의 크기를 할당할 때 바이트 단위로 지정합니다.

	// 동적으로 할당한 메모리는 HEAP 영역에 보관되므로,
	// 사용이 끝나면 직접 해제해야 합니다.

	//pointer = malloc(sizeof(int) * 3);
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	pointer[i] = (i + 1) * 10;
	//
	//	printf("%d\n", pointer[i]);
	//}
	//
	//free(pointer);

	// 메모리를 동적으로 할당한 상태에서 해제하지 않으면
	// 메모리 누수 현상이 일어나고 더 이상 메모리를 할당할 수 없게 됩니다.

#pragma endregion

}