//well the brute force would be divide num by 2 and strore the rem in a string till num>0

//using biytet approach avoids expensive divison op
string toBinary(int n) {
    if (n == 0) return "0";
    string s;
    while (n > 0) {
        s.push_back((n & 1) + '0');
        n >>= 1;
    }
    reverse(s.begin(), s.end());
    return s;
}
