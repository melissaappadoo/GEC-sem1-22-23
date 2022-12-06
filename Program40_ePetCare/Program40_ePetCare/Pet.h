#pragma once
#ifndef PET_H
#define PET_H

class Dog
{

};

class Cat
{

};

class Hamster 
{

};

class Pet
{
public:
	Pet(int hunger = 0, int boredom = 0);
	~Pet();
	virtual void Talk();
	void Feed(int food = 4);
	void Play(int fun = 4);
private:
	int m_hunger = 0;
	int m_bored = 0;
protected:
	void GetMood() const { m_hunger + m_bored; }
	void PassingTime(int time = 1);
};

#endif // !PET_H

