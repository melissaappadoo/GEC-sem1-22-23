#include "Pet.h"
#include <iostream>

using namespace std;

Pet::Pet(int hunger, int boredom)
{
	Pet* petPtr = new Pet(0, 0);
	cout << "a new pet has arrived" << endl;
	m_hunger = hunger;
	m_bored = boredom;
}

Pet::~Pet()
{
}

void Pet::Talk()
{
	int mood = petPtr->GetMood();
	if (mood > 15) 
	{
		cout << "I am your pet and I feel mad" << endl;
	}
	else if (mood > 10 && mood < 15)
	{
		cout << "I am your pet and I feel frustrated" << endl;
	}
	else if (mood > 5 && mood < 10)
	{
		cout << "I am your pet and I feel okay" << endl;
	}
	else
	{
		cout << "I am your pet and I feel happy" << endl;
	}
	PassingTime();
}

void Pet::Feed(int food)
{
	cout << "Burp!" << endl;
	m_hunger -= food;
	if (m_hunger < 0)
	{
		m_hunger = 0;
	}
	PassingTime();
}

void Pet::Play(int fun)
{
	cout << "Your pet is having fun!" << endl;
	m_bored -= fun;
	if (m_bored < 0)
	{
		m_bored = 0;
	}
}

void Pet::PassingTime(int time)
{
	m_hunger += time;
	m_bored += time;
}
