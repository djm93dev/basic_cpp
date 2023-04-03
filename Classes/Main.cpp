#include <iostream>


class Player
{
	public:
		int x, y;
		int speed = 1;

		void Move(int xa, int ya)
		{
			x += xa * speed;
			y += ya * speed;
		}
	
};


int main()
{
	Player player;
	player.x = 5;
	player.y = 5;
	
	player.Move(2, -2);

	std::cout << player.x << ", " << player.y << std::endl;
	
	std::cin.get();
}