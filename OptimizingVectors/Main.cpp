#include <iostream>
#include <string>
#include <vector>



struct Vertex
{
	float x, y, z;
	
	Vertex(float x, float y, float z)
		: x(x), y(y), z(z)
	{
	}
	
	Vertex(const Vertex& vertex) // Copy constructor
		: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};


int main()
{

	std::vector<Vertex> vertices;
	vertices.reserve(3); // Reserve 3 elements in the vector
	vertices.emplace_back(1, 2, 3); // Construct a Vertex in-place at the end of the vector
	vertices.emplace_back(4, 5, 6);
	vertices.emplace_back(7, 8, 9);

	for (const Vertex& vertex : vertices)
		std::cout << vertex.x << ", " << vertex.y << ", " << vertex.z << std::endl;

	std::cin.get();
}