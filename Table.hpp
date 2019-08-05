#ifndef TABLE_HPP_
#define TABLE_HPP_
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <map>
typedef std::vector <std::string> row;

class Table
{
	private:
		char horizontalDelimiter;
		char verticalDelimiter;
		char cornerDelimiter;
		row currentRow;
		std::vector<row> rows;
		std::vector<int> widhts;
		std::map<long long int,char> alignment;
		void setAlignment(long long int cell, char type);
		char getAlignment(long long int cell);
		void setWidht(long long int column,int widht);
		int	 getWidht(long long int column);

	public:
		Table(char h='-',char v='|',char c='+');
		void add(std::string cellValue);
		void endRow(void);
		std::string & toString();
		void toFile(std::string filename);
};

#endif /* TABLE_HPP_ */
