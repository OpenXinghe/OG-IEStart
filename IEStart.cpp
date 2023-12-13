#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string vbs_code = "CreateObject(\"InternetExplorer.Application\").Visible=True";
	ofstream of("temp.vbs");
	of << vbs_code;
	of.close();

	system("cscript temp.vbs");

	return 0;
}