        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n - i; j++) {
                string sub = s.substr(i, j);
                substrings.insert(sub);

                // Generate modified strings by removing the first or second character
                if (sub.size() > 1) {
                    substrings.insert(sub.substr(1));  // Remove first character
                    substrings.insert(sub.substr(0, sub.size() - 2));  // Remove second character
                }
            }
        }