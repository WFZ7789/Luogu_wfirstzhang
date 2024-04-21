#include <bits/stdc++.h>
using namespace std;
string s, t;
bool a, b, c; // 标记
int main() {
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++)
    {
        s[i] -= 32; //转换成大写字母
        if((a == 0 && b == 0 && c == 0) && s[i] == t[0])    a = 1;
        else if(a && c == 0 && s[i] == t[1]) b = 1;
        else if(a && b && s[i] == t[2])    c = 1;
      	 // 如果符合条件就标记
    }
    if((a && b && c) || (a && b && t[2] == 'X'))   cout << "Yes" << endl;
  	//  判断两种情况，有其中一种就输出Yes
    else cout << "No" << endl;
    return 0;
}