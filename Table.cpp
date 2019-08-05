#include "Table.hpp"
#include <string>
Table::Table(char h,char v,char c)
{
	horizontalDelimiter = h;
	verticalDelimiter = v;
	cornerDelimiter = c;
}
void Table::add(std::string cellValue)
{
		currentRow.push_back(cellValue);
}
void Table::endRow(void)
{
	rows.push_back(currentRow);
	currentRow.clear();
}
void Table::setAlignment(long long int cell, char type)
{
	if(type == 'R' || type == 'L' || type == 'C')
		alignment[cell] = type;
}
char Table::getAlignment(long long int cell)
{
	return alignment.find(cell)->second;
}
void Table::setWidht(long long int column,int widht)
{
	if(widhts.size()>column)
	{	std::vector<int>::iterator it;
		it = widhts.begin()+column;
		widhts.insert(it,widht);
	}
}
int	 Table::getWidht(long long int column)
{
	if(widths.size()>column)
		return widhts[column];
}
std::string & Table::toString()
{
	//to do
}
void Table::toFile(std::string filename)
{
	//to do
}
