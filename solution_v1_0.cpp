#include <algorithm> // copy
#include <iostream> // cin, cout, streamsize
#include <iterator> // back_inserter, istream_iterator
#include <limits> // numeric_limits
#include <sstream> // istringstream
#include <string> // getline, string
#include <vector> // vector

int multiprocessor_system(std::vector<int> capacity, int tasks) {
    // WRITE YOUR BRILLIANT CODE HERE
    int hours = 0;
    while(tasks >= 1){
        int max = *max_element(capacity.begin(),capacity.end()); //find max value in capacity
        tasks = tasks - max; //decrease tasks by the max capacity value
        for(int i = 0; i < capacity.size(); i++)
            if(capacity.at(i) == max)capacity.at(i) = capacity.at(i)/2;
        hours++;
    }
    return hours;
    
}

template<typename T>
std::vector<T> get_words() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream ss{line};
    std::vector<T> v;
    std::copy(std::istream_iterator<T>{ss}, std::istream_iterator<T>{}, std::back_inserter(v));
    return v;
}

void ignore_line() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    std::vector<int> capacity = get_words<int>();
    int tasks;
    std::cin >> tasks;
    ignore_line();
    int res = multiprocessor_system(capacity, tasks);
    std::cout << res << '\n';
}
