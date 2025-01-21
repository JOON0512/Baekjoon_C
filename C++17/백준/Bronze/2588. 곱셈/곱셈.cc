#include <iostream>
#include <vector>
#include <cmath>
#include <string>

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    // Digits of the second number
    std::vector<int> digits;
    int temp = num2;
    while (temp > 0) {
        digits.push_back(temp % 10);
        temp /= 10;
    }

    std::vector<int> results;
    std::vector<std::string> formattedResults;
    for (int i = 0; i < digits.size(); i++) {
        int product = num1 * digits[i];
        int adjustedProduct = product * static_cast<int>(std::pow(10, i));

        // Store the full product adjusted by positional value for final summation
        results.push_back(adjustedProduct);

        // Formatting each result with the proper division
        std::string result = std::to_string(adjustedProduct / static_cast<int>(std::pow(10, i)));
        formattedResults.push_back(result);
    }
    
    // Output each intermediate result
    for (const auto& res : formattedResults) {
        std::cout << res << "\n";
    }

    // Calculate and output the final result
    int finalResult = 0;
    for (int res : results) {
        finalResult += res;
    }
    std::cout << finalResult << std::endl;

    return 0;
}
