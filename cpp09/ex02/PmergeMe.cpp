#include "PmergeMe.hpp"

bool ft_error(std::string str) {
		std::cerr << str << std::endl;
		return false;
}

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

void printPairs(std::pair<int, int> pair[], int pairNbr)
{
    for (int i = 0; i < pairNbr; i++)
    {
        std::cout << pair[i].first << " " << pair[i].second << std::endl;
    }
}

/* tri recursif
https://stackoverflow.com/questions/20912274/recursive-merge-sort-in-c
https://www.sanfoundry.com/cpp-program-implement-merge-sort/#:~:text=Merge%20Sort%20in%20C%2B%2B,in%20ascending%20or%20descending%20order.
*/

// void	sortPairsFromSecond(std::pair<int, int> *pairTab, int pairNb) {
// 	std::pair<int, int>	tmpair;
// 	int tmp;
    
// 	for (int i = 0; i < pairNb; i++)
// 	{
// 		if (pairTab[i].first > pairTab[i].second) {
// 			tmp = pairTab[i].first;
// 			pairTab[i].first = pairTab[i].second;
// 			pairTab[i].second = tmp;
// 		}
// 	}
//     for (int i = 0; i < pairNb; i++)
//     {
//         for (int j = i + 1; j < pairNb; j++) {
//             if (pairTab[i].second > pairTab[j].second) {
//                 tmpair = pairTab[i];
//                 pairTab[i] = pairTab[j];
//                 pairTab[j] = tmpair;
//             }
//         }
//     }
// }

#include <iostream>
#include <vector>

// Fonction pour fusionner deux sous-tableaux
void merge(std::pair<int, int> *pairTab, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Création de deux tableaux temporaires
    std::vector<int> L(n1), R(n2);

    // Copie des données dans les tableaux temporaires L[] et R[]
    for (int i = 0; i < n1; i++)
        L[i] = pairTab[l + i].second;
    for (int j = 0; j < n2; j++)
        R[j] = pairTab[m + 1 + j].second;

    // Fusion des tableaux temporaires L[] et R[]
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            pairTab[k].second = L[i];
            i++;
        } else {
            pairTab[k].second = R[j];
            j++;
        }
        k++;
    }

    // Copie des éléments restants de L[], s'il y en a
    while (i < n1) {
        pairTab[k].second = L[i];
        i++;
        k++;
    }

    // Copie des éléments restants de R[], s'il y en a
    while (j < n2) {
        pairTab[k].second = R[j];
        j++;
        k++;
    }
}

// Fonction principale qui effectue le tri fusion
void sortPairsBySecondRecursively(std::pair<int, int> *pairTab, int start, int end) {
    if (start < end) {
        // Castartcustart du point mistartieu
        int middle = start + (end - start) / 2;

        // Tri des deux moitiés
        sortPairsBySecondRecursively(pairTab, start, middle);
        sortPairsBySecondRecursively(pairTab, middle + 1, end);

        // Fusion des moitiés triées
        merge(pairTab, start, middle, end);
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

int Jacobsthal(int n)
{
  int dp[n + 1];
  dp[0] = 0;
  dp[1] = 1;
  for (int i = 2; i <= n; i++)
      dp[i] = dp[i - 1] + 2 * dp[i - 2];
  return dp[n];
}
