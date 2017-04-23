// MoneyBorrow.cpp : Defines the entry point for the console application.
//

#include <iostream>
double moneyIntrestFunction(double money_, double percent_);


int main()
{
	std::cout << "Enter initial amount: ";
	double money;
	std::cin >> money;
	std::cout << "Enter number of years: ";
	int years;
	std::cin >> years;
	std::cout << "Enter interest rate: ";
	double percent;
	std::cin >> percent;
	
	system("cls");
	
	std::cout << "Confirmation of your choices: " << std::endl;
	std::cout << "Deposit: " << money << std::endl;
	std::cout << "Period: " << years << std::endl;
	std::cout << "Intrest: " << percent << std::endl;


	for (int i = 0; i < years; i++)
	{
		double totalMoney = moneyIntrestFunction(money, percent);

		std::cout << "Money after " << i + 1 << " year " << totalMoney << std::endl;
		money = totalMoney;
	}
		


	system("pause");
    return 0;
}
double moneyIntrestFunction(double money_, double percent_)
{
	double total;
	total = ((money_ / 100) * percent_) + money_;
	
	return total;
}

