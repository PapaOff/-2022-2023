#include <iostream>

using namespace std;

/*
Тишко иска да си купи нов лаптоп.
Той е готов да даде от 1000 до 1500 лева за лаптоп с най-малко 3 USB порта, най-малко 8 GB RAM и SSD диск.
Ако обаче лаптопът няма SSD или има по-малко от 8 GB RAM, той не иска да даде повече от 800 лева.

Напишете булев израз, който по цена на лаптоп, брой USB портове, количество RAM и дали има SSD определя дали Тишко ще си купи лаптопа.
*/

int main()
{
	int price, usbPorts, ram;
	bool hasSSD;
	
	cout << "Price: ";
	cin >> price;
	cout << "USB ports: ";
	cin >> usbPorts;
	cout << "RAM: ";
	cin >> ram;
	cout << "Has SSD: ";
	cin >> hasSSD;
	
	bool willBuy = usbPorts >= 3 && ((ram >= 8 && hasSSD && price >= 1000 && price <= 1500) || 
									((ram < 8 || !hasSSD) && price <= 800));

	cout << (willBuy ? "Tishko has a new laptop" : "Tishko stays without a laptop");
}