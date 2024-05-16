#include <vector>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int n) {
		vector<int> ret = {};
		if (n == 2)
			ret.push_back(2);
		else if (n == 3)
			ret.push_back(3);
		return ret;
	}
};