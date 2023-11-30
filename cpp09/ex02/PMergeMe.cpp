#include "PMergeMe.hpp"

void	createPairs(std::pair<int, int> *pairTab, unsigned int *arr, int len, int *lastNbr) {
	int	count = 0;
	for (int i = 0; i < len; i++)
	{
		if (i + 1 == len) {
			*lastNbr = arr[i];
			break;
		}
		pairTab[count].first = arr[i];
		i++;
		pairTab[count].second = arr[i];
		count++;
	}
}
void	sortInPairs(std::pair<int, int> *pairTab, int pairNb) {
	int	tmp;

	for (int i = 0; i < pairNb; i++)
	{
		if (pairTab[i].first > pairTab[i].second) {
			tmp = pairTab[i].first;
			pairTab[i].first = pairTab[i].second;
			pairTab[i].second = tmp;
		}
	}
}

bool	allNbrIsPushed(std::pair<int, int> pairTab[], int nbOfPair, int i) {
	while (i < nbOfPair) {
		if (pairTab[i].second != -1)
			return false;
		i++;
	}
	return true;
}

void pushSecondToVector(std::vector<int> *vec, std::pair<int, int> pairTab[], int nbOfPair) {
    while (!allNbrIsPushed(pairTab, nbOfPair, 0)) {
        int tmp = pairTab[0].second;

        for (int i = 1; i < nbOfPair; ++i) {
            if (pairTab[i].second > tmp) {
                tmp = pairTab[i].second;
            }
        }
        for (int i = 0; i < nbOfPair; ++i) {
            if (tmp == pairTab[i].second) {
                pairTab[i].second = -1;
                break;
            }
        }
        vec->insert(vec->begin(), tmp);
    }
}

void pushMinNbrToVector(std::vector<int> *vec, std::pair<int, int> pairTab[], int nbOfPair, int *lastNbr) {
    int minNbrIndex = 0;

    for (int i = 1; i < nbOfPair; ++i) {
        if (pairTab[i].first < pairTab[minNbrIndex].first) {
            minNbrIndex = i;
        }
    }
    if (*lastNbr >= 0 && pairTab[minNbrIndex].first >= *lastNbr) {
        vec->insert(vec->begin(), *lastNbr);
        *lastNbr = -1;
    } else {
        vec->insert(vec->begin(), pairTab[minNbrIndex].first);
        pairTab[minNbrIndex].first = -1;
    }
}

void addRestToVector(std::vector<int> *vec, std::pair<int, int> pairTab[], int NbOfPair, int keepLast) {
	for (int i = 0; i < NbOfPair; ++i)
		if (pairTab[i].first != -1)
            vec->insert(std::lower_bound(vec->begin(), vec->end(), pairTab[i].first), pairTab[i].first);
	if (keepLast != -1)
        vec->insert(std::lower_bound(vec->begin(), vec->end(), keepLast), keepLast);
}

std::vector<int> vecSort(unsigned int *arr, int len)
{
	std::vector<int>	vec;
	std::pair<int, int>	pairTab[len / 2];
	int lastNbr;

	lastNbr = -1;
	createPairs(pairTab, arr, len, &lastNbr);
	sortInPairs(pairTab, len / 2);
	pushSecondToVector(&vec, pairTab, len / 2);
	pushMinNbrToVector(&vec, pairTab, len / 2, &lastNbr);
	addRestToVector(&vec, pairTab, len / 2, lastNbr);
	return vec;
}

void pushSecondToDeque(std::deque<int> *deq, std::pair<int, int> pairTab[], int nbOfPair) {
    while (!allNbrIsPushed(pairTab, nbOfPair, 0)) {
        int tmp = pairTab[0].second;

        for (int i = 1; i < nbOfPair; ++i) {
            if (pairTab[i].second > tmp) {
                tmp = pairTab[i].second;
            }
        }
        for (int i = 0; i < nbOfPair; ++i) {
            if (tmp == pairTab[i].second) {
                pairTab[i].second = -1;
                break;
            }
        }
        deq->insert(deq->begin(), tmp);
    }
}

void pushMinNbrToDeque(std::deque<int> *deq, std::pair<int, int> pairTab[], int nbOfPair, int *lastNbr) {
    int minNbrIndex = 0;

    for (int i = 1; i < nbOfPair; ++i) {
        if (pairTab[i].first < pairTab[minNbrIndex].first) {
            minNbrIndex = i;
        }
    }
    if (*lastNbr >= 0 && pairTab[minNbrIndex].first >= *lastNbr) {
        deq->insert(deq->begin(), *lastNbr);
        *lastNbr = std::numeric_limits<int>::min();
    } else {
        deq->insert(deq->begin(), pairTab[minNbrIndex].first);
        pairTab[minNbrIndex].first = -1;
    }
}

void addRestToDeque(std::deque<int> *deq, std::pair<int, int> pairTab[], int NbOfPair, int keepLast) {
    for (int i = 0; i < NbOfPair; ++i) {
        if (pairTab[i].first != -1)
            deq->insert(std::lower_bound(deq->begin(), deq->end(), pairTab[i].first), pairTab[i].first);
	}
    if (keepLast != -1)
        deq->insert(std::lower_bound(deq->begin(), deq->end(), keepLast), keepLast);
}

std::deque<int> deqSort(unsigned int *arr, int len)
{
	std::deque<int>	deq;
	std::pair<int, int>	pairTab[len / 2];
	int lastNbr;

	lastNbr = -1;
	createPairs(pairTab, arr, len, &lastNbr);
	sortInPairs(pairTab, len / 2);
	pushSecondToDeque(&deq, pairTab, len / 2);
	pushMinNbrToDeque(&deq, pairTab, len / 2, &lastNbr);
	addRestToDeque(&deq, pairTab, len / 2, lastNbr);
	return deq;
}