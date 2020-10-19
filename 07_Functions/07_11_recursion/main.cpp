//
//  main.cpp
//  07_11_recursion
//
//  Created by txc-ios on 2020/10/19.
//

#include <iostream>
#include <vector>
#include <array>


static int kkindex{ 0 };

//int fibonacci(int count) {
//    kkindex++;
//    if (count == 0) {
//        return 0;
//    }
//    if (count == 1) {
//        return 1;
//    }
//    return fibonacci(count - 1) + fibonacci(count - 2);
//}

int fibonacci(int count) {
    kkindex++;
    static std::vector<int> result{ 0, 1 };
    if (count < static_cast<int>(std::size(result))) {
        return result[count];
    } else {
        result.push_back(fibonacci(count - 1) + fibonacci(count - 2));
        return result[count];
    }
}

int main(int argc, const char * argv[]) {

    for (int count{} ; count < 13; ++count) {
        std::cout << fibonacci(count) << ' ';
    }
    std::cout << '\n';
    std::cout << "index = " << kkindex << '\n';

    return 0;
}
//
//int fibonacci(int count)
//{
//    // We'll use a static std::vector to cache calculated results
//    static std::vector<int> results{ 0, 1 };
//
//    // If we've already seen this count, then use the cache'd result
//    if (count < static_cast<int>(std::size(results)))
//        return results[count];
//    else
//    {
//        // Otherwise calculate the new result and add it
//        results.push_back(fibonacci(count - 1) + fibonacci(count - 2));
//        return results[count];
//    }
//}
//
//// And a main program to display the first 13 Fibonacci numbers
//int main()
//{
//    for (int count = 0; count < 13; ++count)
//    std::cout << fibonacci(count) << " ";
//
//    return 0;
//}
