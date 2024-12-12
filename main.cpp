#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
    // count how many 'a' in the string s
    char target ='a';
    long count =0;
    long result =0;
    long extra=0;
    long remainder =0;
    
    for (char c : s)
    {
        if (c == target )
        count ++;
    }
    // how many remainder 
    remainder = n%s.length();
    result = (n/s.length())*count;
    
    for (long i=0;i<=remainder-1 ;i++)
    {
        
        if (s[i] == target)
        {
            extra +=1;
        }
        
    }
    return result+extra;
        
        
    
    
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string n_temp;
    getline(cin, n_temp);

    long n = stol(ltrim(rtrim(n_temp)));

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
