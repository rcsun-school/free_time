#include <iostream>
#include <string>
using namespace std;
class animal
{
public:
	void getSound() {

	}
};
class cat: public animal
{
	string sound = "meow";
public:
		string getSound() {
			return this->sound;
	}
};

class dog: public animal
{
	string sound = "woof";
public: 
	string getSound() {
		return this->sound;
	}
};
int main()
{
	cat Chad;
	dog Rufus;
	animal[2] choir;
	cout << Chad.getSound() << endl; 
	string response;
	cin >> response; 
	cout << "I see " << response;
}