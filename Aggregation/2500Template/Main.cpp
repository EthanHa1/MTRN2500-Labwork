#include <iostream>
#include "header.h"
#include <string.h>
#include <vector>

class Passenger {
public:
	Passenger(std::string const& name) : mName{ name } {}
	friend bool operator==(Passenger const& a, Passenger const& b) {
		int areEqual{ a.mName.compare(b.mName) };
		if (areEqual == 0) {
			return true;
		}
		else {
			return false;
		}

	}

	friend std::ostream& operator<<(std::ostream& stream, Passenger const& a) {
		stream << a.mName;
		return stream;
	}
private:
	std::string mName{};
};

class Train : public Passenger {
public:
	Train(std::vector<Passenger> const&) : mName{}
private:

};

int main(void) {
	Passenger p("Peter");
	std::cout << p << "\n";

	return 0;
}