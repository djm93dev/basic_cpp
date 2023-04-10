#include <iostream>
#include <string>

class Entity
{
public:
	virtual void PrintName() {}

};

class Player : public Entity
{

};

class Enemy : public Entity
{

};

int main()
{

	Entity* e = new Player; // create a new entity on the heap
	Entity* e1 = new Enemy; // create a new entity on the heap
	
	Player* p = dynamic_cast<Player*>(e); // cast the entity to a player, this will succeed and return a pointer to the player
	//Player* en = dynamic_cast<Enemy*>(e1); // cast the entity to an enemy, this will fail and return a nullptr
	


}