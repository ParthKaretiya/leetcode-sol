// Last updated: 7/13/2026, 1:23:52 PM
class Solution {
public:
    string simplifyPath(string path) {

        vector<string> dirs;
        string dir = "";

        for (int i = 0; i <= path.size(); i++) {

            if (i == path.size() || path[i] == '/') {

                if (dir == "..") {
                    if (!dirs.empty()) {
                        dirs.pop_back();
                    }
                }
                else if (dir != "" && dir != ".") {
                    dirs.push_back(dir);
                }

                dir = "";
            }
            else {
                dir += path[i];
            }
        }

        string ans = "";

        for (string s : dirs) {
            ans += "/" + s;
        }

        return ans.empty() ? "/" : ans;
    }
};