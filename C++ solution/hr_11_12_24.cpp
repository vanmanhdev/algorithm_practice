int superDigit(string n, int k) {
    long long result = 0;
    for (char c : n) {
        result += c - '0';
    }
    result *= k;
    while (result >= 10) {
        long long newResult = 0;
        while (result > 0) {
            newResult += result % 10;
            result /= 10;
        }
        result = newResult;
    }

    return result;
}
