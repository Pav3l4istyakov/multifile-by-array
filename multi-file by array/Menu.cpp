#include <iostream>
#include "menu.hpp"
#include <cstdlib>
#include <ctime>
#include <climits>

void Menu::run() {
    setlocale(LC_ALL, "RU");
    int choice;
    do {
        std::cout << "�������� �������:\n";
        std::cout << "1. ������� 1 \n";
        std::cout << "2. ������� 2 \n";
        std::cout << "3. ������� 3 \n";
        std::cout << "4. �����\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
        {
            const int size = 5;
            int arr[size];

            std::cout << "�������  " << size << " ��������� �����:\n";

            for (int i = 0; i < size; ++i) {
                std::cin >> arr[i];
            }

            int min = INT_MAX;
            int max = INT_MIN;

            for (int i = 0; i < size; ++i) {
                if (arr[i] < min) {
                    min = arr[i];
                }
                if (arr[i] > max) {
                    max = arr[i];
                }
            }

            std::cout << "����������� �������� : " << min << std::endl;
            std::cout << "������������ ��������3: " << max << std::endl;
        }

        case 2:
        {
            int size, range, threshold;
            int sum = 0;

            std::cout << "������� ������ �������:";
            std::cin >> size;

            int* arr = new int[size];

            std::cout << "������� �������� ��������� �����: ";
            std::cin >> range;

            std::cout << "������� ����������  ��������: ";
            std::cin >> threshold;

            srand(time(0));

            for (int i = 0; i < size; ++i) {
                arr[i] = rand() % range;
                if (arr[i] < threshold) {
                    sum += arr[i];
                }
            }

            std::cout << "�������� �������: ";
            for (int i = 0; i < size; ++i) {
                std::cout << arr[i] << " ";
            }

            std::cout << "\n����� ��������� ������: " << threshold << ": " << sum;

            delete[] arr;


        }
        case 3:
        {
            int i, n, k, mi, ma, start, end;
            int mouth[12];
            for (i = 0; i < 12; i++)
            {
                std::cout << "������� ������� �� " << i + 1 << " �����: ";
                std::cin >> mouth[i];
            }
            std::cout << "������� ������� ���������: ";
            std::cin >> start >> end;
            start = start - 1;
            end = end - 1;
            mi = mouth[start];
            ma = mouth[start];
            for (i = start; i <= end; i++)
            {
                if (mi > mouth[i])
                    mi = mouth[i];
            }
            for (i = 0; i < 12; i++)
            {
                if (mi == mouth[i])
                    n = i;
            }
            std::cout << "����� � ����������� ��������: " << ++n << "\n";

            for (i = start; i <= end; i++)
            {
                if (ma < mouth[i])
                    ma = mouth[i];
            }
            for (i = 0; i < 12; i++)
            {
                if (ma == mouth[i])
                    k = i;
            }
            std::cout << "����� � ������������ ��������: " << ++k << "\n";
        }
        break;
        }






    } while (choice != 4);
}