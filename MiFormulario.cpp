#include "MiFormulario.h"
using namespace System;
using namespace System::Windows::Forms; [STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Hito2::MiFormulario()); //Project 1 es el nombre del proyecto
}

