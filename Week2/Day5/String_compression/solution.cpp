 int n = chars.size();
        int write = 0;  // where to write compressed chars
        int i = 0;      // start of current group

        while (i < n) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            // write character
            chars[write++] = ch;

            // write count if > 1
            if (count > 1) {
                string cnt = to_string(count);

                for (char digit : cnt) {
                    chars[write++] = digit;
                }
            }
        }

        return write;
