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

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// int helper(int num)
// {
//     int sum = 0;
//     while (num > 0)
//     {
//         sum = sum + (num % 2);
//         num = num / 2;
//     }

//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = helper(n);
//     cout << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// vector<vector<int>> helper(vector<int> &nums, int target)
// {
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());
//     for (int i = 0; i < nums.size() - 2; i++)
//     {
//         if (i > 0 && nums[i] == nums[i - 1])
//             continue;
//         for (int j = i + 1; j < nums.size() - 1; j++)
//         {
//             if (j > i + 1 && nums[j] == nums[j - 1])
//                 continue;
//             for (int k = j + 1; k < nums.size(); k++)
//             {
//                 if (k > j + 1 && nums[k] == nums[k - 1])
//                     continue;
//                 if (nums[i] + nums[j] + nums[k] == target)
//                 {
//                     ans.push_back({nums[i], nums[j], nums[k]});
//                 }
//             }
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     cin >> k;
//     vector<int> v(n);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cin >> v[i];
//     }

//     vector<vector<int>> ans = helper(v, k);
//     for (auto &triplet : ans)
//     {
//         for (auto &num : triplet)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<vector<int>> helper(vector<int> &nums, int target)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum < target)
                left++;
            else if (sum > target)
                right--;
            else
            {
                ans.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;
                left++;
                right--;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    vector<vector<int>> ans = helper(v, k);
    for (auto &triplet : ans)
    {
        for (auto &num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}