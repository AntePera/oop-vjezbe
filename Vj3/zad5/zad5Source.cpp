#include"header.hpp"
int substring(string s, string target)
{
    int cnt = 0;
    string::size_type pos = 0;
    while ((pos = s.find(target, pos)) != string::npos) {
        ++cnt;
        pos += target.length();
    }
    return cnt;
}
int main()
{
    
    string::size_type pos = 0;
    string s;
    string target ;
    cout << "input the string:" << endl;
    cin >> s;
    cout << "input the substring" << endl;
    cin >> target;
    cout << substring(s, target);
    system("pause");

}