#include <stdio.h>

struct enemy
{
	char Rarity;
	int HP;
	double EXP;
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

	return 0;
}