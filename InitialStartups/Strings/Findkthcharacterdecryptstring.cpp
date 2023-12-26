char kThCharaterOfDecryptedString(string s, long long k) {
   long long n = s.size();
    string exe = "";
    string num = "";
    string res = "";
    int flag = 1;
    long long temp = 0;

    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            if (flag == 0) {
                while (temp--) {
                    res += exe;
                }
                exe = "";
                num = "";
            }
            flag = 1;
            exe += s[i];
        } else {
            num += s[i];
            temp = stoll(num);
            flag = 0;
        }
    }

    while (temp--) {
        res += exe;
    }

   cout<<res<<endl;
    if (k >= 0 && k < res.size()) {
        return res[k+1]; 
    }

    return '\0'; 
}