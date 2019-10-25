#include <iostream>
using namespace std;

int main()
{
	int x1;
	int y1;
	int r1;
	int x2;
	int y2;
	int r2;

	cout << " The numbers are: ";
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

	//Calculate the distance between the centers of the circles
	int distance;
	distance = (x1 - x2)* (x1 - x2) + (y1 - y2) * (y1 - y2);

	int rad;
	rad = (r1 + r2) * (r1 + r2);

	if (rad == distance) {
		cout << "The circles touch.";
	}
	else if (rad < distance) {
		cout << "The circles doesn't intersect.";
	}
	else {
		cout << "The circles intersect.";
	}

	return 0;
}