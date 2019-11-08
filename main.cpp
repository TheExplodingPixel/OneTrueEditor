#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::cout << "File?" << std::endl;
  std::string fileToOpen;
  std::cin >> fileToOpen;
  std::cout << "Opening:" << fileToOpen << std::endl;
  std::ofstream editingFile;
  editingFile.open(fileToOpen, std::ofstream::out | std::ofstream::trunc);
  bool quitProgram = false;
  char askLine;
  while(quitProgram == false)
    {
      std::cout << "Would you like to write a line? (Y/N):";
      std::cin >> askLine;
      if((askLine == 'Y') || (askLine == 'y'))
	{
	  std::string lineToWrite;
	  std::cin.ignore();
	  std::getline(std::cin, lineToWrite);
	  editingFile << lineToWrite << std::endl;
	}
      else if((askLine == 'N') || (askLine == 'n'))
	{
	  std::cout << std::endl << "Really? Wow, fine then. See if I care." << std::endl;
	  quitProgram = true;
	  editingFile.close();
	}
      else
	{
	  std::cout << std::endl << "Answer me properly!" << std::endl;
	}
    }
  return 0;
}
