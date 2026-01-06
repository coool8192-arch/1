#include <stdio.h>
#include <math.h>

struct enemy
{
	char Rarity;
	int HP;
	double EXP;
};

struct location
{
	double x;
	double y;
};

struct ability
{
	char rank;
	double mult;
	int stat;
};
int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화하여 하나의 객체를 생성하는 것입니다.

	//struct enemy slime = { 'D', 10, 2.25 };
	//
	//printf("green slime\nRarity : %c\nHP : %d\nEXP : %f\n\n", slime.Rarity, slime.HP, slime.EXP);

	// 구조체의 멤버 변수는 선언 시의 순서대로 초기화되며,
	// 초기화 목록의 값에서 왼쪽에서 오른쪽으로 표시됩니다.

	// 구조체는 선언하기 전에는 메모리 공간이 생성되지 않아 내부의 데이터를 초기화할 수 있습니다.

	//slime.Rarity = 'C';
	//slime.HP = 25;
	//slime.EXP = 4.625;
	//
	//printf("blue slime\nRarity : %c\nHP : %d\nEXP : %f\n", slime.Rarity, slime.HP, slime.EXP);

#pragma endregion

#pragma region 두 점 사이의 거리

//printf("%f\n", sqrt(16));

//printf("%f\n", pow(2, 5));

	//struct location player = { -3, 2 };
	//
	//struct location monster = { 4, 5 };
	//
	//if (sqrt(pow(player.x - monster.x, 2) + pow(player.y - monster.y, 2)) < 5)
	//{
	//	printf("monster is approaching!");
	//}
	//else
	//{
	//	printf("monster doesn't recognize you...");
	//}
#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한번에 읽을 수 있도록
	// 컴파일러가 레지스터의 블록에 맞춰 바이트를 패딩해주는 최적화 작업입니다.

	//struct enemy mob = { 'C', 10, 12.5 };
	//
	//printf("%d\n", sizeof(mob));

	// 구조체의 크기는 멤버 중 가장 크기가 큰 자료형의 배수가 되도록 설정합니다.

	// 구조체의 크기는 멤버의 순서에 따라 구성된 자료형이 같더라도 그 크기가 달라질 수 있습니다.

	//struct ability user = { 'A', 8.75, 15 };
	//
	//printf("%d\n", sizeof(user));

#pragma endregion

	return 0;
}