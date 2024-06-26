
/*!
    \brief Класс для математических операций.

    Данный класс предоставляет функционал разных математических операций для шаблоных типов.
*/
class Math
{
 public:
    /*!
    \brief Шаблонная функция суммирования двух объектов

    \tparam T - любой тип, для которого определен оператор суммирования 
    и оператор присваивания

    \param [in] a Первый объект, который нужно сложить
    \param [in] b Второй объект, который нужно сложить

    \return Новый объект типа *T*, равный сумме *a* и *b*.
*/
     template <class T>
     T Summ(const T& a, const T& b);
    /*!
        \brief Шаблонная функция извлечения корня из объекта

        \tparam T - любой тип, из которого можно извлечь корень

        \param [in] a Объект для извлечения корня

        \return Новый объект типа *T*, равный корню *a*.


        \code{cpp}
        Math m;

        double d = m.Sqrt(2.542);
        \endcode

        \warning Не принимает отрицательные значения
    */
     template <class T>
     T Sqrt(const T& a);
 };