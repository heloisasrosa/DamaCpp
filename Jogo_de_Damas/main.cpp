#include "GameLogic.h"

int main(int argc, char *argv[])
{
	if (argc < 5)
	{
		cout << "Invalid Parameters" << endl;
		return 0;
	}
	int col = atoi(argv[1]);
	int row = atoi(argv[2]);
	int k = atoi(argv[3]);
	string mode = argv[4];
	int order = 0;
    if (mode == "m" or mode == "manual")
    {
        order = atoi(argv[5]);
    }
	GameLogic main(col,row,k, mode, order);
	main.Run();

	return 0;
}
