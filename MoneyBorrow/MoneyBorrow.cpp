// MoneyBorrow.cpp : Defines the entry point for the console application.
//

#include <iostream>
double moneyInterestFunction(double money_, double percent_);


int main()
{
	// user prvides deails for the caluclation
	std::cout << "Enter initial amount: ";
	double money;
	std::cin >> money;
	std::cout << "Enter number of years: ";
	int years;
	std::cin >> years;
	std::cout << "Enter interest rate: ";
	double percent;
	std::cin >> percent;
	
	system("cls"); // clean screan
	
	//confirmation of the user choices
	std::cout << "Confirmation of your choices: " << std::endl;
	std::cout << "Deposit: " << money << std::endl;
	std::cout << "Period: " << years << std::endl;
	std::cout << "Interest: " << percent << std::endl;


	for (int i = 0; i < years; i++) // loop for increasing amount for every year
	{
		double totalMoney = moneyInterestFunction(money, percent); // function call

		std::cout << "Money after " << i + 1 << " year " << totalMoney << std::endl;
		money = totalMoney;
	}
		


	system("pause");
    return 0;
}
double moneyInterestFunction(double money_, double percent_) // function returning double, with two variables size of deposit and interest
{
	double total;
	total = ((money_ / 100) * percent_) + money_;
	
	return total;
}

