// #include <bits/stdc++.h>
// using namespace std;

// string helper(vector<string> &v)
// {
//     int cnt1 = 0;
//     int cnt2 = 0;
//     int idx = 0;

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[0] == v[i])
//         {
//             cnt1++;
//         }
//         else
//         {
//             cnt2++;
//         }
//     }

//     if (cnt1 > cnt2)
//     {
//         return v[0];
//     }
//     else if (cnt2 > cnt1)
//     {
//         while (idx < v.size())
//         {
//             if (v[idx] != v[0])
//             {
//                 return v[idx];
//             }
//             idx++;
//         }
//     }
//     else
//     {
//         return v[0];
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<string> v(n);

//     for (int i = 0; i < v.size(); i++)
//     {
//         cin >> v[i];
//     }

//     string ans = helper(v);
//     cout << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// int helper(vector<int> &v)
// {
//     sort(v.begin(), v.end());

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] != v[0])
//         {
//             return v[i];
//             break;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for (int i = 0; i < v.size(); i++)
//     {
//         cin >> v[i];
//     }

//     int ans = helper(v);
//     cout << ans << endl;
//     return 0;
// }

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int helper(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + (num % 2);
        num = num / 2;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    int ans = helper(n);
    cout << ans << endl;
    return 0;
}