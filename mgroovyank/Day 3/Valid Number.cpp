// https://www.interviewbit.com/problems/valid-number/


class Solution {
    public:
        bool isNumber(const string &S) 
        {
            const char *s = S.c_str();
            int i = 0;

            // skip the whilespaces
            while (s[i] == ' ') { 
                i++;
            }
            if (s[i] == '\0') return false;

            // check the significand
            if (s[i] == '+' || s[i] == '-') i++; // skip the sign if exist
            int num_digits, num_points;
            for (num_digits=0, num_points=0; (s[i] <= '9' && s[i] >= '0') || s[i]=='.'; i++) {
                if (s[i] == '.') {
                    num_points++;
                } else {
                    num_digits++;
                }
            }

            // no more than one point, at least one digit. Should not end with .
            if (num_points > 1 || num_digits < 1 || s[i - 1] == '.') 
                return false;

            // check the exponent if exist
            if(s[i] == 'e') {
                i++;
                if (s[i] == '+' || s[i] == '-') i++; // skip the sign

                num_digits = 0;
                while (s[i] >= '0' && s[i] <= '9') { 
                    i++; 
                    num_digits++;
                }

                if (num_digits < 1)
                    return false;
            }

            // skip the trailing whitespaces
            while (s[i] == ' ') {
                i++;
            }

            return s[i] == '\0';  // must reach the ending \0 of the string
        }
};
