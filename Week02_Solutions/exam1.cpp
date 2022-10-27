#include <iostream>

using namespace std;

/*
След доста дълъг и изтощителен ден във ФМИ Трайчо бил изключително гладен.
Той не успял да намери време да яде от ученето по Алгебра и Геометрия.
Трайчо може да готви само някои ястия, но не знае дали има необходимите продукти.

Той знае от опит колко и какво му трябва за различните ястия, които може да направи.

Ако ще прави студентска салата, ще му трябват 1 домат,  2 чушки, 4 моркова, 3 маслини, 3  картофа и 150мл овкусители.
Ако ще прави студентска супа,   ще му трябват 2 домата, 3 чушки, 5 моркова, 6 маслини, 10 картофа и 200мл овкусители.
Ако ще прави студентски гювеч(и за приятели), ще му трябват 5 домата, 6 чушки, 12 моркова, 7 маслини, 12 картофа и 300мл овкусители.

Ако ще му трябват повече от един домат, както ще е ако прави студентска супа или студентски гювеч,
ще трябва да викне и един приятел с него за помощ.

По даден брой домати, брой чушки, брой моркови, брой маслини, брой картофи, мл. овкусители и дали ще дойде един приятел с него за помощ,
напишете булев израз, който определя дали Трайчо има продукти да си направи ястия и да се нахрани заслужено след Алгебрата и Геометрията.
*/

int main()
{
	int tomatoCount, pepperCount, carrotCount, oliveCount, potatoCount, flavoringMl;
	bool hasFriend;

	bool canMakeSalad, canMakeSoup, canMakeGuvech, willEat;
	
	cout << "Tomato count: ";
	cin >> tomatoCount;
	cout << "Pepper count: ";
	cin >> pepperCount;
	cout << "Carrot count: ";
	cin >> carrotCount;
	cout << "Olive count: ";
	cin >> oliveCount;
	cout << "Potato count: ";
	cin >> potatoCount;
	cout << "Flavoring ml: ";
	cin >> flavoringMl;
	cout << "Has friend: ";
	cin >> hasFriend;

	canMakeSalad  = tomatoCount >= 1 && pepperCount >= 2 && carrotCount >= 4 && oliveCount >= 3 && potatoCount >= 3 && flavoringMl >= 150;
	canMakeSoup   = tomatoCount >= 2 && pepperCount >= 3 && carrotCount >= 5 && oliveCount >= 6 && potatoCount >= 10 && flavoringMl >= 200 && hasFriend;
	canMakeGuvech = tomatoCount >= 5 && pepperCount >= 6 && carrotCount >= 12 && oliveCount >= 7 && potatoCount >= 12 && flavoringMl >= 300 && hasFriend;

	willEat = canMakeSalad || canMakeSoup || canMakeGuvech;

	cout << endl;
	if (!willEat)
	{
		cout << "Traicho will stay hungry...";
	}
	else
	{
		cout << "Traicho will eat and he "
			<< (canMakeSalad  ? "can" : "can't") << " make a salad, "
			<< (canMakeSoup   ? "can" : "can't") << " make a soup and "
			<< (canMakeGuvech ? "can" : "can't") << " make a guvech.";
	}
}