#include "Main.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Media;
[STAThread]

void Main(array<String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PHRMA::Main form;
	//Media::SoundPlayer("C:\\Users\ASUS\Desktop\a.mp3");
	Application::Run(%form);


}

