int to_int(string a) {
    int b = 0;
    for (auto x:a) b = b*10 + x-'0';
    return b;
}

string inputl() {
    string rtrn;
    getline(cin, rtrn);
    return rtrn;
}

string inputt() {
    string rtrn;
    cin >> rtrn;
    return rtrn;
}

string input(bool line = false) {
    if (line) return inputl();
    else return inputt();
}

int intput() {
    return to_int(input());
}

int countt(string s, char to_count) {
    int ans = 0;
    for (char ch : s) ans += ch == to_count;
    return ans;
}

int sign(int num) {
    if (num < 0) return -1;
    else if (num > 0) return 1;
    else return 0;
}
