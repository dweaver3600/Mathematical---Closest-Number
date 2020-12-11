//Prompt

//Print the multiplication table of a given number N up to the 10th term


#include <iostream>
#include <vector>

#define PAUSE std::cout << "\n\n"; system("pause");


//User function Template for C++
class Solution
{
public:
	std::vector<int> getTable(int N)
	{
		std::vector<int> Table;

		for (int i = 1; i <= 10; i++) {
			Table.push_back(N * i);
		}

		return Table;
	}
};

// { Driver Code Starts.
int main()
{
	std::cout << "Print the multiplication table of a given number N up to the 10th term.\n\n";

	std::cout << "Enter the desired number to see its multiplication table: ";

	int N;

	std::cin >> N;
	Solution ob;
	std::vector<int> ans = ob.getTable(N);
	for (int i = 0; i < ans.size(); i++)
		std::cout << ans[i] << " ";
	std::cout << "\n";

	PAUSE
	return 0;
}  // } Driver Code Ends
