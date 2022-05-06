#include "ProcEnum.h"
#include "WindowHook.h"

void compile(const char* procName)
{
	// Get a reference to the GMS IDE
	processInfo* IDE = getIDE(IDEname);
	// Check if struct is valid
	bool valid = is_valid(IDE);
	std::cout << (valid == true ? "[OK] Struct seems valid." : "[!] Struct is invalid.") << std::endl;

	if (valid) {
		std::cout << (sendCompileSignal(IDE) == true ? "[OK] Success on sending signal." : "[!] Could not send signal.") << std::endl;
	}
	
}


int main(int argc, char* argv[])
{
	std::cout << "[OK] Compiling executable" << std::endl;
	compile(GMSname);
	compile(IDEname);

	return 0;
}
