#include "Tube.h"

using namespace std;

ostream& operator << (ostream& out, const tube& new_tube)
{
	out << "����� �����: " << new_tube.length << endl
		<< "������� �����: " << new_tube.diameter << endl
		<< "���������: " << new_tube.condition << "\n\n";
	return out;
}