#include <bits/stdc++.h>

using namespace std;

typedef struct CHAR
{
    int tan_xuat;
    int trong_so;
} character;

int xuLyTrongSo(char a)
{
    if (a == 'a' || a == 'd' || a == 'g' || a == 'j' || a == 'm' || a == 'p' || a == 't' || a == 'w' || a == ' ')
        return 1;
    else if (a == 'b' || a == 'e' || a == 'h' || a == 'k' || a == 'n' || a == 'q' || a == 'u' || a == 'x')
        return 2;
    else if (a == 'c' || a == 'f' || a == 'i' || a == 'l' || a == 'o' || a == 'r' || a == 'v' || a == 'y')
        return 3;
    else if (a == 's' || a == 'z')
        return 4;
}

int process(string input)
{
    character alphabel[26] = {};
    for (char a = 'a'; a <= 'z'; a++)
    {
        int trongso = xuLyTrongSo(a);

        alphabel[a - 'a'].tan_xuat = 0;
        alphabel[a - 'a'].trong_so = trongso;
    }

    int length = input.size();
    int pcnt = 0;
    for (int i = 0; i < length; i++)
    {
        if (input[i] == ' ')
        {
            pcnt++;
            continue;
        }
        for (char j = 'a'; j <= 'z'; j++)
        {
            if (j == input[i])
            {
                alphabel[j - 'a'].tan_xuat++;
                break;
            }
        }
    }
    int result = 0;
    for (character i : alphabel)
    {
        result += i.tan_xuat * i.trong_so;
    }
    result += pcnt;
    return result;
}

class Solution
{
public:
    void input(vector<string> &input)
    {
        int num = 0;
        cin >> num;
        string s;
        getline(cin, s);
        for (int i = 0; i < num;i++) {
            getline(cin, s);
            input.push_back(s);
        }
    }

    void processMultil(vector<string> &processMultil)
    {
        for (int i = 0; i < processMultil.size(); i++) {
            cout << "Case #" << (i+1) << ": " << process(processMultil[i]) << endl;
        }
    }
};

int main(int argc, char **argv)
{
    vector<string> input = {};
    Solution solution = Solution();
    solution.input(input);
    solution.processMultil(input);
    return 0;
}