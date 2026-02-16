#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string cript;
    string correct;
    bool flag = false;
    int ac = 0;
 
    cin >> cript >> correct;
 
    flag = false;
    if (cript.size() < correct.size())
    {
        cout << 0;
        return 0;
    }
    
 
 
 
    for (int j = 0; j < correct.size(); j++)
    {
        if (correct[j] == cript[j])
        {
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        ac++;
    }
 
 
 
    for (int i = 1; i <= cript.size() - correct.size(); i++)
    {
        flag = false;
        for (int j = 0; j < correct.size(); j++)
        {
            if (correct[j] == cript[j+i])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            ac++;
        }
    }
    cout << ac;
}