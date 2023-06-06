#ifndef NEWSED_HPP
#define NEWSED_HPP

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::ifstream;
using std::ofstream;

class NewSed {
	private:
		string _infile;
		string _outfile;

	public:
		NewSed(string fileName);
		~NewSed();

		void replace(string s1, string s2);
};

#endif