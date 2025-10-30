#include <iostream>  
#include <string>    
#include <cmath>     
#include <cstdlib>   
#include <ctime>     
/*
#include <iostream> используется для std::cin, std::cout
#include <string>   используется для std::string
#include <cmath>    используется для std::abs в функции EqualNum
#include <cstdlib>  используется для std::rand, std::srand
#include <ctime>    используется для std::time*/

// --- Все функции ---
/*
#2
возвращает сумму двух последних цифр числа
Получить последнюю цифру числа через остаток от деления на 10 (x % 10)
Получить предпоследнюю цифру через деление на 10 и взятие остатка от деления ((x/10) % 10)
Сложить полученные цифры
Вернуть результат
*/
int SumLastNums(int x) {
  return (x % 10) + ((x / 10) % 10);
}

/*
#4
проверяет, является ли число положительным
Сравнить число с нулем
Вернуть true если число > 0, иначе false
*/
bool IsPositive(int x) {
  return x > 0;
}

/* 
#6
проверяет, является ли символ заглавной буквой 
Проверить, находится ли символ в диапазоне 'A'-'Z'
Вернуть результат проверки
*/
bool IsUpperCase(char x) {
  return (x >= 'A' && x <= 'Z');
}

/* 
#8
проверяет, делит ли одно число другое нацело
Проверить, что оба числа не равны нулю
Проверить делимость a на b ИЛИ b на a
Вернуть true если одно делится на другое
*/
bool IsDivisor(int a, int b) {
  return ((b != 0) && (a % b == 0)) || ((a != 0) && (b % a == 0));
}

/*
#10
возвращает сумму последних цифр двух чисел
Получить последнюю цифру первого числа: a % 10
Получить последнюю цифру второго числа: b % 10
Вернуть сумму этих цифр
*/
int LastNumSum(int a, int b) {
  return (a % 10) + (b % 10);
}

// Функции из блока 2
/*
#12
безопасное деление
Проверить, не равен ли делитель нулю
Если равен - вывести ошибку и вернуть 0
Иначе выполнить деление и вернуть результат
*/
double SafeDiv(int x, int y) {
  if (y == 0) {
    std::cout << "Деление на 0 невозможно!" << std::endl;
    return 0;
  } else {
    return x / y;
  }
}

// #14
/*
сравнение двух чисел
Сравнить x и y
Если x > y - вернуть строку "x > y"
Если x < y - вернуть строку "x < y"
Иначе вернуть "x == y"
*/
std::string MakeDecision(int x, int y) {
  if (x > y) {
    return std::to_string(x) + " > " + std::to_string(y);
  } else if (x < y) {
    return std::to_string(x) + " < " + std::to_string(y);
  } else {
    return std::to_string(x) + " == " + std::to_string(y);
  }
}

// #16
/*
проверяет, равна ли сумма двух чисел третьему
Проверить, равна ли сумма первых двух чисел третьему
Проверить, равна ли сумма первого и третьего чисел второму
Проверить, равна ли сумма второго и третьего чисел первому
Вернуть true если любое условие выполняется
*/
bool Sum3(int x, int y, int z) {
  if (x + y == z) {
    return true;
  } 
  if (x + z == y) {
    return true;
  }
  if (y + z == x) {
    return true;
  }
  return false;
}

/* 
#18
возвращает строку с правильным склонением слова "год"
Определить последнюю цифру числа
Если число заканчивается на 1 (кроме 11) - использовать "год"
Если число заканчивается на 2-4 (кроме 12-14) - использовать "года"
Иначе использовать "лет"
*/
std::string Age(int x) {
  if (x % 10 == 1 && x % 100 != 11) {
    return std::to_string(x) + " год";
  }
  if (x % 10 >= 2 && x % 10 <= 4 && (x % 100 < 10 || x % 100 >= 20)) {
    return std::to_string(x) + " года";
  }
  return std::to_string(x) + " лет";
}

/*
#20
выводит название дня недели по номеру
Использовать оператор switch для определения дня
Для значений 1-7 вывести соответствующий день
Для других значений вывести сообщение об ошибке
*/
void PrintDays(int x) {
  switch(x) {
    case 1:
      std::cout << "Понедельник" << std::endl;
      break;
    case 2:
      std::cout << "Вторник" << std::endl;
      break;
    case 3:
      std::cout << "Среда" << std::endl;
      break;
    case 4:
      std::cout << "Четверг" << std::endl;
      break;
    case 5:
      std::cout << "Пятница" << std::endl;
      break;
    case 6:
      std::cout << "Суббота" << std::endl;
      break;
    case 7:
      std::cout << "Воскресенье" << std::endl;
      break;
    default:
      std::cout << "Это не день недели" << std::endl;
  }
}

// Функции из блока 3
/*
#22
возвращает строку с числами от x до 0 в обратном порядке
Начать с числа x и двигаться вниз до 0
На каждой итерации добавлять текущее число к строке результата
Добавлять пробелы между числами (кроме последнего)
*/
std::string ReverseListNums(int x) {
  std::string result = "";
  for (int i = x; i >= 0; --i) {
    result += std::to_string(i);
    if (i > 0) {
      result += " ";
    }
  }
  return result;
}
/*
#24
возводит число x в степень y
Инициализировать результат как 1(если степень 0)
Умножать результат на x y раз
Вернуть полученное значение
*/
int Exponentiation(int x, int y) {
  int result = 1;
  
  for (int i = 0; i < y; ++i) {
    result *= x;
  }
  
  return result;
}
/*
#26
проверяет, все ли цифры числа одинаковы
Для чисел меньше 10 вернуть true (все цифры одинаковы)
Получить последнюю цифру
Пока число не равно 0, сравнивать текущую цифру с последней
Если найдена отличающаяся цифра - вернуть false
*/
bool EqualNum(int x) {
  if (x < 10 && x > -10) {
    return true;
  }
  int last_digit = std::abs(x % 10);
  int num = std::abs(x / 10);
  while (num > 0) {
    int current_digit = num % 10;
    if (current_digit != last_digit) {
      return false; 
    }
    num /= 10; 
  }
  
  return true;
}
/*
#28
выводит левый треугольник из звездочек заданного размера
Для каждой строки от 1 до x
Вывести i звездочек
Перейти на новую строку
*/
void LeftTriangle(int x) {
  for (int i = 1; i <= x; ++i) {
    for (int j = 0; j < i; ++j) {
      std::cout << '*';
    }
    std::cout << '\n';
  }
}
/*
#30
игра "угадай число"
Сгенерировать случайное число от 0 до 9
В цикле запрашивать у пользователя числа
Сравнивать с загаданным числом
При угадывании вывести поздравление и статистику
*/
void GuessGame() {
  std::srand(std::time(nullptr));
  int secret_number = std::rand() % 10;
  int attempts = 0;
  int guess; 
  while (true) {
    std::cout << "Введите число от 0 до 9: ";
    std::cin >> guess;
    ++attempts;
    if (guess == secret_number) {
      std::cout << "Вы угадали!" << std::endl;
      break;
    } else {
      std::cout << "Вы не угадали, попробуйте еще раз." << std::endl;
    }
  }
  
  std::cout << "Вы отгадали число! кол-во попыток: " << attempts << std::endl;
}

// Функции из блока 4
/*
#32
возвращает индекс последнего вхождения числа x в массив
Пройти по массиву с конца к началу
При нахождении элемента x вернуть его индекс
Если элемент не найден, вернуть -1
*/
int FindLast(int arr[], int size, int x) {
  // поиск с конца массива
  for (int i = size - 1; i >= 0; --i) {
    // если найдено, возвращаем индекс
    if (arr[i] == x) {
      return i;
    }
  }
  // если не найдено, возвращаем -1
  return -1;
}
/* 
#34
добавляет число x в массив на позицию pos
Проверить корректность позиции
Создать новый массив размером size + 1
Скопировать элементы до позиции вставки
Вставить новый элемент
Скопировать оставшиеся элементы
Вернуть новый массив
*/
int* Add(int arr[], int size, int x, int pos) {
  // проверка позиции
  if (pos < 0 || pos > size) {
    std::cout << "Неверная позиция!" << std::endl;
    return nullptr;
  }
  // создание нового массива на 1 элемент больше
  int* new_arr = new int[size + 1];
  // копирование элементов до позиции вставки
  for (int i = 0; i < pos; ++i) {
    new_arr[i] = arr[i];
  }
  // вставка нового элемента
  new_arr[pos] = x;
  // копирование оставшихся элементов
  for (int i = pos; i < size; ++i) {
    new_arr[i + 1] = arr[i];
  }
  
  return new_arr;
}
/*
#36
переворачиваем массив
Использовать два указателя: начало и конец массива
Пока указатели не встретятся, менять местами элементы
Сдвигать указатели к центру
*/
void Reverse(int arr[], int size) {
  // два указателя - с начала и с конца
  int left = 0;
  int right = size - 1;
  // обмен элементов до середины массива
  while (left < right) {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    ++left;
    --right;
  }
}

/*
#38
объединяет два массива в один
Создать новый массив размером size1 + size2
Скопировать элементы первого массива
Скопировать элементы второго массива после первого
Вернуть новый массив
*/
int* Concat(int arr1[], int size1, int arr2[], int size2) {
  // создание нового массива размера = сумме размеров двух массивов
  int* new_arr = new int[size1 + size2];
  // копирование первого массива
  for (int i = 0; i < size1; ++i) {
    new_arr[i] = arr1[i];
  }
  // копирование второго массива
  for (int i = 0; i < size2; ++i) {
    new_arr[size1 + i] = arr2[i];
  }
  
  return new_arr;
}
/*
#40
удаляет все отрицательные числа из массива
Подсчитать количество неотрицательных элементов
Создать новый массив нужного размера
Скопировать только неотрицательные элементы
Вернуть новый массив и его размер
*/
int* DeleteNegative(int arr[], int size, int& new_size) {
  // подсчет количества неотрицательных чисел
  int count_non_negative = 0;
  for (int i = 0; i < size; ++i) {
    if (arr[i] >= 0) {
      ++count_non_negative;
    }
  }
  // создание нового массива для неотрицательных чисел
  int* new_arr = new int[count_non_negative];
  new_size = count_non_negative;
  // копирование неотрицательных чисел
  int new_index = 0;
  for (int i = 0; i < size; ++i) {
    if (arr[i] >= 0) {
      new_arr[new_index] = arr[i];
      ++new_index;
    }
  }
  
  return new_arr;
}
/*
Функция для заполнения массива с клавиатуры
Вывести приглашение для ввода
Цикл от i = 0 до size - 1
Для каждого индекса i считать число из входного потока в arr[i]
*/
void FillArray(int arr[], int size) {
    std::cout << "Введите элементы массива через пробел: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}
/*
вывод массива
Цикл от i = 0 до size - 1
Для каждого индекса i вывести arr[i] и пробел
После цикла вывести перевод строки
*/
void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int Main() {
  setlocale(LC_ALL, "Russian");

  int numtask;
  do {
    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Четные варианты заданий" << std::endl;
    std::cout << "Первый блок заданий - 2, 4, 6, 8, 10" << std::endl;
    std::cout << "Второй блок заданий - 12, 14, 16, 18, 20" << std::endl;
    std::cout << "Третий блок заданий - 22, 24, 26, 28, 30" << std::endl;
    std::cout << "Четвертый блок заданий - 32, 34, 36, 38, 40" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Чтобы выйти введите -1" << std::endl;
    std::cout << "\nВыберите номер задания -> ";
    std::cin >> numtask;
    
    switch(numtask) {
      case 2: {
          int x;
          std::cout << "Введите число x -> ";
          std::cin >> x;
          std::cout << "Сумма 2-х последних цифр: " << SumLastNums(x) << std::endl;
          break;
      }
      case 4: {
          int x;
          std::cout << "Введите число x -> ";
          std::cin >> x;
          if (IsPositive(x)){
              std::cout << "Число " << x << " положительное, т.е - True\n" << std::endl;
          } else {
              std::cout << "Число " << x << " не является положительным, т.е - False\n" << std::endl;
          }
          break;
      }
      case 6: {
          char x;
          std::cout << "Введите букву на англ.яз -> ";
          std::cin >> x;
          if (IsUpperCase(x)){
              std::cout << "Символ " << x << " является большой буквой, т.е - True" << std::endl;
          } else {
              std::cout << "Символ " << x << " не является большой буквой, т.е - False" << std::endl;
          }
          break;
      }
      case 8: {
          int a, b;
          std::cout << "Введите число a -> ";
          std::cin >> a;
          std::cout << "Введите число b -> ";
          std::cin >> b;
          if (IsDivisor(a, b)){
              std::cout << "Одно из чисел " << a << " или " << b << " делит другое нацело, т.е - True" << std::endl;
          } else {
              std::cout << "Одно из чисел " << a << " или " << b << " не делит другое нацело, т.е - False" << std::endl;
          }
          break;
      }
      case 10: {
          int a, b, result;
          std::cout << "Введите число a -> ";
          std::cin >> a;
          std::cout << "Введите число b -> ";
          std::cin >> b;
          result = LastNumSum(a, b); // 1,2
          std::cout << "Введите третье число -> ";
          std::cin >> b;
          result = LastNumSum(result, b); // 2,3
          std::cout << "Введите четвертое число -> ";
          std::cin >> b;
          result = LastNumSum(result, b); // 3,4
          std::cout << "Введите пятое число -> ";
          std::cin >> b;
          result = LastNumSum(result, b); // 4,5
          std::cout << "Итог = " << result << std::endl;
          break;
      }
      case 12: {
          int a, b;
          std::cout << "Введите число a -> ";
          std::cin >> a;
          std::cout << "Введите число b -> ";
          std::cin >> b;
          std::cout << "Результат деления a на b = " << SafeDiv(a, b) << std::endl;
          break;
      }
      case 14: {
          int x, y;
          std::cout << "Введите число x -> ";
          std::cin >> x;
          std::cout << "Введите число y -> ";
          std::cin >> y;
          std::cout << "Результат сравнения: " << MakeDecision(x, y) << std::endl;
          break;
      }
      case 16: {
          int a, b, c;
          std::cout << "Введите число a -> ";
          std::cin >> a;
          std::cout << "Введите число b -> ";
          std::cin >> b;
          std::cout << "Введите число c -> ";
          std::cin >> c;
          if (Sum3(a, b, c)){
              std::cout << "Сумма двух чисел равна третьему, т.е - True" << std::endl;
          } else {
              std::cout << "Сумма двух чисел не равна третьему, т.е - False" << std::endl;
          }
          break;
      }
      case 18: {
          int a;
          std::cout << "Введите возраст -> ";
          std::cin >> a;
          std::cout << "Возраст: " << Age(a) << std::endl;
          break;
      }
      case 20: {
          int a;
          std::cout << "Введите номер дня недели (1-7) -> ";
          std::cin >> a;
          PrintDays(a);
          break;
      }
      case 22: {
          int x;
          std::cout << "Введите число х -> ";
          std::cin >> x;
          std::cout << "Полученная строка: " << ReverseListNums(x) << std::endl;
          break;
      }
      case 24: {
          int x, y;
          std::cout << "Введите число х -> ";
          std::cin >> x;
          std::cout << "Введите число y -> ";
          std::cin >> y;
          std::cout << "Результат возведения в степень: " << Exponentiation(x, y) << std::endl;
          break;
      }
      case 26: {
          int x;
          std::cout << "Введите число х -> ";
          std::cin >> x;
          if (EqualNum(x)) {
              std::cout << "Все цифры числа одинаковы, т.е - True" << std::endl;
          } else {
              std::cout << "Цифры числа различны, т.е - False" << std::endl;
          }
          break;
      }
      case 28: {
          int x;
          std::cout << "Введите размер треугольника -> ";
          std::cin >> x;
          LeftTriangle(x);
          break;
      }
      case 30: {
          GuessGame();
          break;
      }
      case 32: {
          int size;
          std::cout << "Введите размер массива -> ";
          std::cin >> size;
          int* arr = new int[size];
          FillArray(arr, size);
          int x;
          std::cout << "Массив: ";
          PrintArray(arr, size);
          std::cout << "Введите число для поиска -> ";
          std::cin >> x;
          int result = FindLast(arr, size, x);
          if (result != -1) {
              std::cout << "Последнее вхождение числа " << x << " на индексе: " << result << std::endl;
          } else {
              std::cout << "Число " << x << " не найдено" << std::endl;
          }
          delete[] arr;
          break;
      }
      case 34: {
          int size;
          std::cout << "Введите размер массива -> ";
          std::cin >> size;
          int* arr = new int[size];
          FillArray(arr, size);
          int x, pos;
          std::cout << "Исходный массив: ";
          PrintArray(arr, size);
          std::cout << "Введите число для добавления -> ";
          std::cin >> x;
          std::cout << "Введите индекс для вставки -> ";
          std::cin >> pos;
          
          int* result = Add(arr, size, x, pos);
          if (result != nullptr) {
              std::cout << "Результат: ";
              PrintArray(result, size + 1);
              delete[] result;
          }
          delete[] arr;
          break;
      }
      case 36: {
          int size;
          std::cout << "Введите размер массива -> ";
          std::cin >> size;
          int* arr = new int[size];
          FillArray(arr, size);
          std::cout << "Исходный массив: ";
          PrintArray(arr, size);
          Reverse(arr, size);
          std::cout << "После реверса: ";
          PrintArray(arr, size);
          delete[] arr;
          break;
      }
      case 38: {
          int size1, size2;
          std::cout << "Введите размер первого массива -> ";
          std::cin >> size1;
          int* arr1 = new int[size1];
          FillArray(arr1, size1);
          
          std::cout << "Введите размер второго массива -> ";
          std::cin >> size2;
          int* arr2 = new int[size2];
          FillArray(arr2, size2);
          
          std::cout << "Первый массив: ";
          PrintArray(arr1, size1);
          std::cout << "Второй массив: ";
          PrintArray(arr2, size2);
          
          int* result = Concat(arr1, size1, arr2, size2);
          std::cout << "Объединенный массив: ";
          PrintArray(result, size1 + size2);
          
          delete[] arr1;
          delete[] arr2;
          delete[] result;
          break;
      }
      case 40: {
          int size;
          std::cout << "Введите размер массива -> ";
          std::cin >> size;
          int* arr = new int[size];
          FillArray(arr, size);
          
          int new_size;
          std::cout << "Исходный массив: ";
          PrintArray(arr, size);
          
          int* result = DeleteNegative(arr, size, new_size);
          std::cout << "Без отрицательных: ";
          PrintArray(result, new_size);
          
          delete[] arr;
          delete[] result;
          break;
      }
      default:
          if (numtask != -1) {
              std::cout << "Введен неверный номер! Попробуйте снова." << std::endl;
          }
          break;
    }
  } while (numtask != -1);

  return 0;
}
