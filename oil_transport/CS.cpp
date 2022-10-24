#include "CS.h"

using namespace std;

ostream& operator << (ostream& out, const cs& new_cs)
{
	out << "Название: " << new_cs.name << endl
		<< "Всего цехов: " << new_cs.rooms << endl
		<< "Цехи в работе: " << new_cs.active_rooms << endl
		<< "Эффективность: " << new_cs.efficiency << "\n\n";
	return out;
}