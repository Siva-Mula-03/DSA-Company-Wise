int makeBeautiful(string str) {
	// Write your code here

	int len = str.length();
	int diff1 = 0;
	int diff2 = 0;
	int var1 = 0;
	int var2 = 1;

	for(int i = 0;i < len;i++){
		if(str[i] -48 != var1)diff1++;
		if(str[i] - 48 != var2) diff2++;
		var1 = 1-var1;
		var2 = 1-var2;
	}

	return min(diff1,diff2);
}