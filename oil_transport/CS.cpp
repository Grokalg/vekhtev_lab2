#include "CS.h"

using namespace std;

ostream& operator << (ostream& out, const cs& new_cs)
{
	out << "��������: " << new_cs.name << endl
		<< "����� �����: " << new_cs.rooms << endl
		<< "���� � ������: " << new_cs.active_rooms << endl
		<< "�������������: " << new_cs.efficiency << "\n\n";
	return out;
}