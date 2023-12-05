#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <exception>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <deque>
#include <limits.h>

void	createPairs(std::pair<int, int> *pairTab, unsigned int *arr, int len, int *lastNbr);
void 	printPairs(std::pair<int, int> pair[], int pairNbr);
void	sortPairsFromSecond(std::pair<int, int> *pairTab, int pairNb);
bool	allNbrIsPushed(std::pair<int, int> pairTab[], int nbOfPair, int i);
int 	Jacobsthal(int n);


template <typename T>
void printArray(T *arg, int len, std::string text) {
	std::cout << text;
	for (int i = 0; i < len; i++) {
		std::cout << arg[i] << " ";
		if (i == 4)
			break;
	}
	if (len > 5)
		std::cout << "[...]";
	std::cout << std::endl;
}

template <typename T>
void printVector(const std::vector<T>& vec, std::string text) {
    std::cout << text;
    for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void printDeque(const std::deque<T>& myDeque, std::string text) {
    std::cout << text;
    for (typename std::deque<T>::const_iterator it = myDeque.begin(); it != myDeque.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void insertFirstInVector(T *vec, std::pair<int, int> pairTab[], int nbOfPair) {
    int indToSort = 1;
    int prevInd;
    int x = 2;

    for (int i = 0; i < nbOfPair; ++i) 
    {
        prevInd = indToSort;
        indToSort = Jacobsthal(x);
        if (indToSort <= nbOfPair)
            vec->insert(std::lower_bound(vec->begin(), vec->end(), pairTab[indToSort - 1].first), pairTab[indToSort - 1].first);
        for (int j = indToSort - 1; j > prevInd; --j) 
        {
            if (j <= nbOfPair)
                vec->insert(std::lower_bound(vec->begin(), vec->end(), pairTab[j - 1].first), pairTab[j - 1].first);
            i++;
        }
        x++;
    }
}

template <typename T>
void addSecondsToVector(T *vec, std::pair<int, int> pairTab[], int NbOfPair, int keepLast) {
	for (int i = 0; i < NbOfPair; ++i)
		if (pairTab[i].second != -1)
            vec->insert(std::lower_bound(vec->begin(), vec->end(), pairTab[i].second), pairTab[i].second);
	if (keepLast != -1)
        vec->insert(std::lower_bound(vec->begin(), vec->end(), keepLast), keepLast);
}

template <typename T>
void vecSort(T &vec, unsigned int *arr, int len)
{
	std::pair<int, int>	pairTab[len / 2];
	int lastNbr;

	lastNbr = -1;
	createPairs(pairTab, arr, len, &lastNbr);
	sortPairsFromSecond(pairTab, len / 2);
	addSecondsToVector(&vec, pairTab, len / 2, lastNbr);
	insertFirstInVector(&vec, pairTab, len / 2);
}

void	checkErrors(int ac, char **av);
bool 	ft_error(std::string str);

#endif