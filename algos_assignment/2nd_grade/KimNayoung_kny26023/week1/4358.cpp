#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, int> m; //map m을 만들어준다.
	string tree;
	float cnt = 0;  //cnt로 들어오는 개수를 세어준다.
	while (getline(cin, tree)) {  //입력 받을 때까지
		if (m.find(tree) != m.end()) {  //이미 tree가 저장되어 있는 경우
			m[tree] += 1; //1을 더해준다
		}
		else {  //tree가 저장이 되어있지 않은 경우
			m[tree] = 1;  //1로 넣어준다
		}
		cnt++;  //cnt는 개수기 때문에 항상 더해준다
	}
	cout << fixed;
	cout.precision(4);  //float 뒷자리 수를 4자리까지 출력하도록 해주는 부분이다.

	for (auto it = m.begin(); it != m.end(); it++) {  //iterator를 사용한다
		float portion = (it->second / cnt) * 100; //portion은 차지하는 비율이다
		cout << (it->first) << " " << portion << "\n";  //나무의 이름과 비율을 프린트해준다
	}
	return 0;
}
