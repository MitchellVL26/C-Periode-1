#pragma once
#include <string>
class Item
{
	public:
	Item(std::string aName);
	~Item();

	std::string GetName();
	void SetName(std::string aName);

protected:
	std::string name;

};

