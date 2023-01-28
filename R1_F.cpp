#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, y, x, ans;
    cin >> t;
    while(t--)
    {
        cin >> y >> x;
        if(y > x) //數字在第y層左邊算第x個
        {
            if(y%2 == 0) //偶數層數字右排到左，同一層用減的
            {
                ans = y*y+1-x;
            }
            else //奇數層數字左排到右，算前一層用加的
            {
                ans = (y-1)*(y-1)+x;
            }

        }
        else //數字在第x層右邊算第y個 (y == x 也符合定義)
        {
            if(x%2 == 0) //偶數層數字右排到左，算前一層用加的
            {
                ans = (x-1)*(x-1)+y;
            }
            else //奇數層數字左排到右，同一層用減的
            {
                ans = x*x+1-y;
            }

        }
        cout << ans << endl;
    }
    return 0;
}