
#pragma once
#include "������� ��������� �����.h"

using namespace System;
using namespace System::Windows::Forms;

int wWinMain() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Calcship::MyForm());
	return 0;
}

