#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
	// 1이라는 값으로 나타내는 연산자입니다.

	int accuracy = 10;
	int attack = 20;

	//printf("accuracy < attack : %d\n", accuracy < attack);

	//printf("accuracy > attack : %d\n", accuracy > attack);

	//printf("accuracy <= attack : %d\n", accuracy <= attack);

	//printf("accuracy >= attack : %d\n", accuracy >= attack);

	//printf("accuracy != attack : %d\n", accuracy != attack);

	//printf("accuracy == attack : %d\n", accuracy == attack);

	//printf("30 < 50 : %d\n", 30 < 50);

	// 관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
	// 조건이 틀릴 때 0이라는 값으로 반환됩니다.

#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	// 명령문입니다.

	//int health = 0;

	//if(health <= 0)
	//{
	//	printf("destroyed");
	//}

	// if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.
#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 조건이
	// 맞다면 실행되는 명령문입니다.

	//int level = 30;
	//
	//if (level < 30)
	//{
	//	printf("You can't enter here.");
	//}
	//else if (level >= 30)
	//{
	//	printf("Welcome to dungeon.");
	//}
	//
	// else if문은 여러번 정의할 수 있으며, if문이
	// 존재할 때 사용할 수 있습니다.

#pragma endregion

#pragma region else문
	// if문과 else if문의 조건이 다 틀리면
	// 실행되는 명령문입니다.

	//int integer = 0;
	//
	//if (integer > 0)
	//{
	//	printf("positive");
	//}
	//else if (integer < 0)
	//{
	//	printf("negative");
	//}
	//else
	//{
	//	printf("zero");
	//}

	// if문에 연결된 모든 조건문의 조건이 맞을 때
	// 가장 위에 있는 조건문만 실행됩니다.

#pragma endregion

#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	//char grade = 'K';

	// switch문은 해당 조건이 완료되었을 때, break문이 없으면 
	// 그 밑의 case문을 모두 실행시키고 종료됩니다.

	//switch (grade)
	//{
	//case 'A' : printf("100~90\n");
	//	break;
	//case 'B' : printf("89~80\n");
	//	break;
	//case 'C' : printf("79~70\n");
	//	break;
	//case 'D' : printf("69~60\n");
	//	break;
	//case 'F' : printf("<60\n");
	//	break;
	//default: printf("exception\n");
	//	break;
	//}

	// switch문의 경우 조건에 해당하는 값에 따라 조건의
	// 위치로 이동합니다.

#pragma endregion

#pragma region 논리 연산자

#pragma region AND 연산자
// 두 개의 조건이 다 성립될 때 실행되는 연산자입니다.

//int score = 92;
//
//if (score >= 90 && score < 100)
//{
//	printf("great\n");
//}
// 조건문에서 둘 이상의 조건이 있다면 왼쪽부터 조건을 검사합니다.
#pragma endregion

#pragma region OR 연산자
// 두 개의 조건 중 하나라도 조건이 성립되면 실행되는 연산자입니다.

//int AD = 70;
//int AP = 100;
//
//if (AD >= 60 || AP > 120)
//{
//	printf("activated\n");
//}

// 조건문의 논리 표현식을 평가하는 도중에 결과가 이미 확정이 났다면,
// 그 이후의 평가는 생략합니다.
#pragma endregion

#pragma region NOT 연산자
// 하나의 조건을 반전시키는 연산자입니다.

//int power = 1;
//
//if (!power)
//{
//	printf("off");
//}
//else
//{
//	printf("on");
//}
#pragma endregion


#pragma endregion

#pragma region 사분면

//int x = 1;
//int y = 2;
//
//if (x > 0 && y > 0)
//{
//	printf("제1사분면\n");
//}
//else if (x < 0 && y > 0)
//{
//	printf("제2사분면\n");
//}
//else if (x < 0 && y < 0)
//{
//	printf("제3사분면\n");
//}
//else if (x > 0 && y < 0)
//{
//	printf("제4사분면\n");
//}
//else if (x != 0 && y == 0)
//{
//	printf("x절편 : %d\n",  x);
//}
//else if (x == 0 && y !=0)
//{
//	printf("y절편 : %d\n", y);
//}
//else
//{
//	printf("원점\n");
//}

#pragma endregion


#pragma endregion

}