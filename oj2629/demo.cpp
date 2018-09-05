#include <iostream>
#include <map>
#include <string>

int main(void)
{
    using namespace std;
    const map<string, string> regionList {
        {"33", "Zhejiang"},
        {"11", "Beijing"},
        {"71", "Taiwan"},
        {"81", "Hong Kong"},
        {"82", "Macao"},
        {"54", "Tibet"},
        {"21", "Liaoning"},
        {"31", "Shanghai"}
    };
    string id;
    int n;
    cin >> n;
    while (--n >= 0) {
        cin >> id;
        string region(id.begin(), id.begin() + 2);
        string birthday[3] {
            {id.begin() + 6, id.begin() + 10},
            {id.begin() + 10, id.begin() + 12},
            {id.begin() + 12, id.begin() + 14}
        };
        cout << "He/She is from " << regionList.find(region)->second << ",and his/her birthday is on "
             << birthday[1] << "," << birthday[2] << ","<< birthday[0] << " based on the table." << endl;
    }

    return 0;
}
