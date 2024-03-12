#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


std::string MostFreqWord(std::vector<std::string>& text) {
    std::unordered_map<std::string, int> words;
    for (std::string word : text) {
        ++words[word];
    }
    std::string most_freq_word = text[0];
    int max_freq = words[text[0]];
    for (auto [word, freq] : words) {
        if (freq > max_freq) {
            max_freq = freq;
            most_freq_word = word;
        } else if (freq == max_freq) most_freq_word = std::min(most_freq_word, word);
    }
    return most_freq_word;
}