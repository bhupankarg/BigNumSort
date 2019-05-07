#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

bool smallerNum(string str1, string str2)
{
    if(str1.size() == str2.size())
        return (str1 < str2);
    return (str1.size() < str2.size());
}

int main()
{
    int total;
    cin  >> total;
    string str;
    vector<string> vecStrNum;
    for(int i = 0; i < total; i++)
    {
        cin >> str;
        vecStrNum.push_back(str);
    }
    sort(vecStrNum.begin(), vecStrNum.end(), smallerNum);
    for(int i = 0; i < total; i++)
        cout << vecStrNum[i] << endl;
    return 0;
}
