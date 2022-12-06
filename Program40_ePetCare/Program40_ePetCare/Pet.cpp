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
}
