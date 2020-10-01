#include "maxdefense.hh"
#include "timer.hh"

using namespace std;

int main()
{
	int n = 100;	// adjust n to return different filtered_armors size
	auto armors = load_armor_database("armor.csv");
	auto filtered_armors = filter_armor_vector(*armors, 1, 100, n);
	
	// Testing time for each algorithm given total cost = 5000 
	// Commented out section not being tested
	Timer timer;
	greedy_max_defense(*filtered_armors, 5000);
	// exhaustive_max_defense(*filtered_armors, 5000);
	double elapsed = timer.elapsed();
	cout << "Elapsed time in seconds: " << elapsed << endl;
	
	return 0;
}


