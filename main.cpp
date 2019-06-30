#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>


using namespace std;

ostream& operator<<(ostream& os, const vector<char>& v) {
  os << "[";
  for (char i : v) {
    os << i << " ";
  }
  os << "]";
  return os;
}

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0, j =  s.size() - 1; i < s.size() / 2; ++i, --j) {
          swap(s[i], s[j]);
        }
    }
};

void test1() {
  Solution S;
  vector<char> v1{'h','e','l','l','o'};
  S.reverseString(v1);
  cout << "[olleh]? " << v1 << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}

