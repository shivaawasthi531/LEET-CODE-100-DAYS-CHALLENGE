//zigzag conversion
class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1 || s.length() <= numRows)
            return s;

        vector<string> rows(numRows);

        int currRow = 0;
        bool goingDown = false;

        for(char c : s) {

            rows[currRow] += c;

            if(currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;

            if(goingDown)
                currRow++;
            else
                currRow--;
        }

        string result = "";

        for(string row : rows)
            result += row;

        return result;
    }
};
