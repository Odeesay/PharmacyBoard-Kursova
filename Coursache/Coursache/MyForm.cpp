#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace Coursache;

[STAThreadAttribute]

int main(int argc, char* argv[]) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Coursache::MyForm form;
	Application::Run(% form);
	return 0;

}