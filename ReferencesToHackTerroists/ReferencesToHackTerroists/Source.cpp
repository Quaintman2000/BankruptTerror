#include <iostream>
#include <string>

using namespace std;

void ShowMoney(int GovMoney, int TerrorMoney);
void SwapMoney(int& GovMoney, int& TerrorMoney);
int main()
{
	cout << "\n\n\t\t ** Bankrupting Terroists ** \n\n";

	int ourMoney = 10;
	int terroristMoney = 10459;

	//keep looping until the player types quit
	while (ourMoney > 0)
	{
		string answer;
		cout << "\nPlease Enter a command: 'ShowBalances', 'Swap', 'Quit'."<<endl;
		
		//grabs answer
		getline(cin, answer);

		//capitalizes the answer
		for (int i = 0; i < answer.length(); i++)
		{
			answer[i] = toupper(answer[i]);
		}

		//if checks the answer
		if (answer == "SHOWBALANCES")
		{
			//shows balances
			ShowMoney(ourMoney, terroristMoney);
		}
		else if (answer == "SWAP")
		{
			//swaps balances
			SwapMoney(ourMoney, terroristMoney);
		}
		else if (answer == "QUIT")
		{
			//ends program
			return 0;
		}
		else 
		{
			//if the person inputs anything else
			cout << "Unidentified Command, please re-enter the command. \nMake sure it's spelled correctly with no spaces.";
		}
	}
	return 0;
}
// shows the current balances
void ShowMoney(int GovMoney, int TerrorMoney)
{
	cout << "\tGoverment's Balance:\tTerrorist's Balance:\n\n";
	cout << "\t\t$" << GovMoney << "\t\t\t$" << TerrorMoney<<"\n";
}
//swaps the balances
void SwapMoney(int& GovMoney, int& TerrorMoney)
{
	// do the local swap of the values
	int swapperScore = GovMoney;
	GovMoney = TerrorMoney;
	TerrorMoney = swapperScore;

	cout << "\n\t\t *Swapped*\n";
}