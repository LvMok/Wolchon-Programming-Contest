#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int w_cnt = 0;
    bool iscmd = false;
    vector<string> str;

    while (1) {
        string inp;
        getline(cin, inp);

        if (iscmd) {
            if (inp == ":i") {
                iscmd = false;
                continue;
            }
            else if (inp == ":dd") {
                str.clear();
            }
            else if (inp == ":X") {
                str.pop_back();
            }
            else if (inp == ":wq") {
                break;
            }
        }
        else {
            if (inp == ":e") {
                iscmd = true;
                continue;
            }


            if (w_cnt + inp.size() > 30) {
                cout << "Error" << "\n";
                continue;
            }
            else {
                w_cnt += inp.size();
                str.push_back(inp);
            }
        }
    }

    for (int i = 0; i < str.size(); i++) {
        cout << str[i];
    }
}