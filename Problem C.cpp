#include <queue>
#include <iostream>


int main()
{
    int N = 10;
    std::queue<int> first, second;

    for (int i = 0, x; i < N / 2; ++i) {
        std::cin >> x;
        first.push(x);
    }

    for (int i = 0, x; i < N / 2; ++i) {
        std::cin >> x;
        second.push(x);
    }

    int moves = 0;

    for (; !first.empty() && !second.empty() && moves <= 200000; moves++) {
        int first_th = first.front();
        int second_th = second.front();
        first.pop(); 
        second.pop();

        std::queue<int>* win;

        if (first_th == 0 && second_th == N - 1) {
            win = &first;
        }

        else if (second_th == 0 && first_th == N - 1) {
            win = &second;
        }

        else if (first_th > second_th) {
            win = &first;
        }

        else {
            win = &second;
        }
        win->push(first_th);
        win->push(second_th);
    }

    if (first.empty())
        std::cout << "second " << moves << std::endl;
    else if (second.empty())
        std::cout << "first " << moves << std::endl;
    else
        std::cout << "botva\n";

    return 0;
}