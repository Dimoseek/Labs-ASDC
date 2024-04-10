#include <array>
#include <span> // c++ =20
int LinearSearch(std::span<int> array, int iscomiielement)
{
    int tecindex {0};

    
}

int sum(int* array0, size_t colElemnt)
{
  int* arraysled;
  int* arrayposl;
  int  sumelment;
  arraysled = array0 + 1;
  while(true)
  {
    sumelement = *array0;
    arrayposl = array0 + colElement - 1;
    smelement = sumelemnt + *arraysled;
    if (arraysled == arrayposl)
    {
      return sumelement;
    }
    arraysled = arraysled + 1;

  }


}

// 1. Создаём ячейку под произведение чмсел массива.
// 2. Создаём переменную под адресс текущего эл. массива.
// 3. Записываем в адресс текущего эелем. массива.  (Arr0)
// 4. Создаём ячеёку под адресс конечного элемента массива. 
// 5. Записываем в переменную адресса последнего елем. Arr0 + colElem - 1
// 6. Начинаю цикл для перемножения элементов массива.
// 7. Присваиваю произведение текущего элемента (prodelement) умноженного на значение следующего элемента (*arraysled).
// 8. Если текущий адрес равен адресу последнего элемента, завершаем цикл и возвращаем произведение.
// 9. Иначе, увеличиваем адрес текущего элемента на единицу.

int product(int* arr0, size_t colElemnt)
{
  int* arraysled;
  int* arrayposl;
  int prodelement;
  arraysled = arr0 + 1;
  while(true)
  {
    prodelement = *arr0;
    arrayposl = arr0 + colElemnt - 1;
    prodelement = prodelement * *arraysled;
    if (arraysled == arrayposl)
    {
      return prodelement;
    }
    arraysled = arraysled + 1;
  }
}


int main()
{
  std::array<int, 5> array{0,1,2,3,4};
  std::array<int, 6> array1{0,1,2,3,4,5};
  int iscomiielement {3};


  sum(array.data(), array.size());
  sum(array1.data(), array1.size());
  
}
