// This program calculates the user's pay.

#include <iostream>

int main()
{
  double samples, rate, pay;

  // Get the number of samples sold.
  std::cout << "How many samples did you sell? ";
  std::cin >> samples;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn for each bar sold? ";
  std::cin >> rate;

  // Calculate the pay.
  pay = samples * rate;

  // Display the pay.
  std::cout << "You have earned $" << pay << std::endl;

  return 0;
}
