// https://leetcode-cn.com/problems/longest-common-prefix/
char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 0) {
        return "";
    }
    bool f = true;
    int cnt = 0;
    for (int i = 0; f; i++) {
        if (strs[0][i] == '\0') {
            break;
        }
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                f = false;
                break;
            }
        }
        if (f) {
            cnt += 1;
        }
    }
    strs[0][cnt] = '\0';
    return strs[0];
}