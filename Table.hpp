#ifndef TABLE_HPP_
#define TABLE_HPP_
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <map>
typedef std::vector <std::string> row;

class table
{
	private:
		char horizontalDelimiter;
		char verticalDelimiter;
		char cornerDelimiter;
		std::vector<row> rows;
		std::vector<int> widht;
		std::map<long long int,char> alignment;

	public:
		table(char h='-',char v='|',char c='+');
		std::string & toString();
		std::ofstream & toFile(std::string filename);

};

#endif /* TABLE_HPP_ */
