#pragma once
#include <iostream>
using namespace std;

struct Job
{
	string jName;
	float healthMultiplier;
	float manaMultiplier;
	float defenseMultiplier;
	int armorClass;
};

struct Enemy
{
	string eName;
	float maxHealth;
	float maxMana;
	float defense;
	float armorClass;
	//virtual void attack()

};

Job Fighter{ "Fighter",1.5, 0.5, 2, 18 };
Job Mage{ "Mage",0.5,2,1,15 };


class Player
{
	string pName;
	Job pJob;
	enum Gender {Male, Female, Neutral};
	Gender pGender;

	float maxHealth;
	float currHealth;
	float maxMana;
	float currMana;
	float defense;

public: void statSetup()
{
	maxHealth = 100 * pJob.healthMultiplier;
	currHealth = maxHealth;
	maxMana = 10 * pJob.manaMultiplier;
	currMana = maxMana;
	defense = 4 * pJob.defenseMultiplier;
}

public :void setName(string newName)
	{
		pName = newName;
	}

public: string getName()
{
	return pName;
}

 
public:bool setJob(string newJob)
{
	bool valid;
	if (newJob == "a")
	{
		pJob = Fighter;
		valid = true;
	}
	else if (newJob == "b")
	{
		pJob = Mage;
		valid = true;
	}
	else
	{
		valid = false;
	}
	return valid;
}

public: string getJob()
{
	return pJob.jName;
}

public:bool setGender(string newGender)
{
	bool valid;
	if (newGender == "m")
	{
		pGender = Male;
		valid = true;
	}
	else if (newGender == "f")
	{
		pGender = Female;
		valid = true;
	}
	else if (newGender == "n")
	{
		pGender = Neutral;
		valid = true;
	}
	else
	{
		valid = false;
	}
	return valid;
}

	  enum pronounType {
		  Subject,
		  Object,
		  Possessive,
		  Reflexive
};



public: string getPronoun(pronounType type)
{
	switch(pGender)
	{
	case Male:
		switch (type)
		{
		case Subject:
			return "he";
			break;
		case Object:
		{
			return "him";
			break;
		}
		case Possessive:
			return "his";
			break;
		case Reflexive:
			return "himself";
			break;
		default:
			return "he";
			break;
		}
	case Female:
		switch (type)
		{
		case Subject:
			return "she";
			break;
		case Object:
		{
			return "her";
			break;
		}
		case Possessive:
			return "hers";
			break;
		case Reflexive:
		{
			return "herself";
		}
		default:
			return "he";
			break;
		}
	case Neutral:
		switch (type)
		{
		case Subject:
			return "they";
			break;
		case Object:
		{
			return "them";
			break;
		}
		case Possessive:
			return "theirs";
			break;
		case Reflexive:
		{
			return "themself";
		}
		default:
			return "they";
			break;
		}
	default:
		switch (type)
		{
		case Subject:
			return "they";
			break;
		case Object:
		{
			return "them";
			break;
		}
		case Possessive:
			return "theirs";
			break;
		case Reflexive:
		{
			return "themself";
		}
		default:
			return "they";
			break;
		}
	}
	
}
};

struct Spell
{
	float manaCost;
	
public:virtual void spellEffect()
	{
	cout << "Your spell does nothing. ";

	}
};

//list<Job> jList;

//Enemies (Name, Health, Mana, Defense, AC, Attack Function)
Enemy Goblin{ "Goblin", 5, 0, 1,10 };