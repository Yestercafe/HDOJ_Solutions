//第一次尝试使用穷举法做oj，switch中所有的情况穷举事先使用util.cpp生成
#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n) {
        if (n == 0) break;
        switch(n) {
            case 2992:case 2993:case 2994:case 2995:case 2996:case 2997:case 2998:case 2999:case 4470:case 4471:case 4472:case 4473:case 4474:case 4475:case 4970:case 4971:case 4972:case 4973:case 4974:case 4975:case 5460:case 5461:case 5462:case 5463:case 5464:case 5465:case 5466:case 5467:case 5468:case 5469:case 5960:case 5961:case 5962:case 5963:case 6456:case 6457:case 6458:case 6459:case 7440:case 7441:case 7442:case 7443:case 7444:case 7445:case 7446:case 7447:case 7448:case 7449:case 7940:case 7941:case 7942:case 7943:case 8436:case 8437:case 8438:case 8439:case 9424:case 9425:case 9426:case 9427:case 9428:case 9429:case 9924:case 9925:case 9926:case 9927:case 9928:case 9929:
                cout << n << " is a Sky Number." << endl;
                break;
            default:
                cout << n << " is not a Sky Number." << endl;
                break;
        }
    }
    return 0;
}
