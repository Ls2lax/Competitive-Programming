// F Sakurko's Box
//@Author Laxman Sharma
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod = 1e9+7;
int binaryExp(int x, int n) {
    if(n == 1) return x;
    else if(n %2 == 0) {
        x = (x*x)%mod;
        return binaryExp(x, n/2);
    } else {
        return (x * binaryExp((x*x) % mod, n/2))%mod;
    }
}
string longDivision(string number, int divisor) {
    string ans;
    int idx = 0;
    int temp = number[idx] - '0';
    while (idx < (number.size() - 1) && temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');

    while ((number.size() - 1) > idx) {
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }

    ans += (temp / divisor) + '0';
    if (ans.length() == 0)
        return "0";
    return ans;
}
string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";
    vector<int> result(len1 + len2, 0);
    int i_n1 = 0; 
    int i_n2 = 0; 
    
    // Go from right to left in num1
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0; 
        
        // Go from right to left in num2             
        for (int j=len2-1; j>=0; j--)
        {
            // Take current digit of second number
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            // Carry for next iteration
            carry = sum/10;

            // Store result
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        // store carry in next cell
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }

    // ignore '0's from the right
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;

    if (i == -1)
    return "0";

    string s = "";
    
    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}
string findSum(string str1, string str2) 
{ 
    // Remove leading zeros from both strings
    str1.erase(0, min(str1.find_first_not_of('0'), str1.size()-1));
    str2.erase(0, min(str2.find_first_not_of('0'), str2.size()-1));
 
    // If both strings become empty, return "0"
    if (str1.empty() && str2.empty()) 
        return "0";
 
    // Before proceeding further, make sure length 
    // of str2 is larger. 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
 
    // Take an empty string for storing result 
    string str = ""; 
 
    // Calculate length of both string 
    int n1 = str1.length(), n2 = str2.length(); 
    int diff = n2 - n1; 
 
    // Initially take carry zero 
    int carry = 0; 
 
    // Traverse from end of both strings 
    for (int i=n1-1; i>=0; i--) 
    { 
        // Do school mathematics, compute sum of 
        // current digits and carry 
        int sum = ((str1[i]-'0') + 
                (str2[i+diff]-'0') + 
                carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
 
    // Add remaining digits of str2[] 
    for (int i=n2-n1-1; i>=0; i--) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
 
    // Add remaining carry 
    if (carry) 
        str.push_back(carry+'0'); 
 
    // reverse resultant string 
    reverse(str.begin(), str.end()); 
 
    return str; 
}
int findMod(string s, int num) {
    int mod = 0;
    for(int i=0;i<s.length();i++) {
        mod = (mod *10 + s[i]-'0')%num;
    }
    return mod;
}
int findgcd(int a, int b) {
    if (!a)
        return b;
    return findgcd(b % a, a);
}
int findGcd(string s, int val) {
    int num1 = findMod(s, val);
    return findgcd(val, num1);
}
void solve() {
    int n;
    cin>>n;
    vector<int> val(n);
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>val[i];
        sum += val[i];
    }
    string p="0";
    for(int i=0;i<n-1;i++) {
        sum -= val[i];
        string s1 =to_string(val[i]);
        string s2 =to_string(sum);
        string s3 = multiply(s1, s2);
        p = findSum(p, s3);
    }
    int q = (n *(n-1))/2;
    //cout<<p<<" "<<q<<endl;
    int gcd = findGcd(p, q);
    p = longDivision(p, gcd);
    int num1 = findMod(p, mod);
    q = q/gcd;
    int ans = (num1 * binaryExp(q%mod, mod-2))%mod;
    cout<<ans<<endl;
}
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
