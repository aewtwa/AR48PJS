#include <iostream>


struct Player
{
	int hp;

	Player(/*Player* this*/)
		: hp(100)
	{
		/*this->hp = 100;*/
	}

	void Damaged(/*Player* this*/)
	{
		/*this->*/hp -= 10;
	}
};

void Damaged(Player* _this)
{
	_this->hp -= 10;
}

// 객체지향 프로그래밍 Oriented object programming
// 항상 구조체나 클래스를 설계할때는
// 변수에 집중하는 것이 아닌 행동, 기능 (함수)에 집중하다보면
// 거기에 변수가 자동으로 머리속에 떠오른다.
//class Player
//{
//    void FireBall(Monster* monster)
//    {
//
//    }
//    void Run()
//    {
//
//    }
//
//    int speed;
//    int stamina;
//    int mp;
//};
//
//struct Monster
//{
//    void Damged(Player* player)
//    {
//
//    }
//    void Attack(Player* player)
//    {
//
//    }
//
//    int att;
//    int hp;
//};

int main()
{
	Player warrior;
	Player archer;

	Damaged(&warrior);
	Damaged(&warrior);
	Damaged(&archer);

	archer.Damaged();
	warrior.Damaged();
	return 0;
}