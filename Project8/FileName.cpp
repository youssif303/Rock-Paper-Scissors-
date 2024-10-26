#include<iostream>
#include<string>
using namespace std;

std::string rps(const std::string& p1, const std::string& p2)
{
	std::string result = "";
	std::string m1 = "Player 1 won!";
	std::string m2 = "Player 2 won!";
	if (p1 == "rock")
	{
		if (p2 == "scissors")  result = m1;
		if (p2 == "paper")   result = m2;
	}
	
	if (p1 == "scissors") {
		if (p2 == "rock")  result = m2;
		if (p2 == "paper")   result = m1;
	}

	if (p1 == "paper") {
		if (p2 == "rock")  result = m1;
		if (p2 == "scissors")   result = m2;
	}
	if (p1 == p2)
			result = "Draw!";
	
	return result;
}

int main()
{
	cout << rps("rock", "scissors");

	return 0;
}