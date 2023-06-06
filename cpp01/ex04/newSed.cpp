#include "newSed.hpp"

NewSed::NewSed(string fileName) :_infile(fileName) {
	this->_outfile = _infile + ".replace";
}

NewSed::~NewSed() {
}

void NewSed::replace(string toFind, string replace) {
	std::ifstream instr(this->_infile);
	string buffer;

	if (!instr.is_open()) {
		cout << "couldn't open given file named '" << this->_infile << "'" << endl;
		return;
	}
	if (!getline(instr, buffer, '\0')) {
		cout << "the given file is empty : '" << this->_infile << "'" << endl;
		instr.close();
		return;
	}
	size_t pos;
	std::ofstream outstr(this->_outfile);
	while ((pos = buffer.find(toFind)) != string::npos)
	{
		buffer.erase(pos, toFind.length());
		buffer.insert(pos, replace);
	}
	outstr << buffer;
	outstr.close();
}